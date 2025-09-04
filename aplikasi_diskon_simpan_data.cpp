#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <ctime>   // Untuk mendapatkan tanggal sistem
#include <fstream> // Untuk menyimpan data ke file

using namespace std;

void tampilkanDaftarBarang(const vector<string> &namaBarang, const vector<double> &hargaBarang)
{
    cout << left << setw(5) << "No" << setw(25) << "Nama Barang" << right << setw(15) << "Harga (Rp)" << endl;
    cout << "--------------------------------------" << endl;

    for (size_t i = 0; i < namaBarang.size(); ++i)
    {
        cout << left << setw(5) << i + 1
             << setw(25) << namaBarang[i]
             << right << setw(15) << fixed << setprecision(2) << hargaBarang[i] << endl;
    }
}

void simpanTransaksi(const vector<string> &namaBarang, const vector<double> &hargaBarang,
                     double totalHarga, double jumlahDiskon, double hargaSetelahDiskon,
                     string jenisDiskon, int hari, int bulan, int tahun)
{
    ofstream file("riwayat_transaksi.txt", ios::app); // Membuka file dalam mode append

    if (!file.is_open())
    {
        cout << "Error: Tidak dapat membuka file untuk menyimpan data!" << endl;
        return;
    }

    // Menulis data transaksi ke file
    file << "======================================" << endl;
    file << "           DATA TRANSAKSI            " << endl;
    file << "======================================" << endl;
    file << "Tanggal: " << hari << "/" << bulan << "/" << tahun << endl;
    file << "--------------------------------------" << endl;
    file << left << setw(5) << "No" << setw(25) << "Nama Barang" << right << setw(15) << "Harga (Rp)" << endl;
    file << "--------------------------------------" << endl;

    for (size_t i = 0; i < namaBarang.size(); ++i)
    {
        file << left << setw(5) << i + 1
             << setw(25) << namaBarang[i]
             << right << setw(15) << fixed << setprecision(2) << hargaBarang[i] << endl;
    }

    file << "--------------------------------------" << endl;
    file << left << setw(30) << "TOTAL PEMBELIAN"
         << right << setw(15) << fixed << setprecision(2) << totalHarga << endl;
    file << left << setw(30) << "DISKON (" + jenisDiskon + ")"
         << right << setw(15) << fixed << setprecision(2) << jumlahDiskon << endl;
    file << "--------------------------------------" << endl;
    file << left << setw(30) << "TOTAL BAYAR"
         << right << setw(15) << fixed << setprecision(2) << hargaSetelahDiskon << endl;
    file << "======================================" << endl;
    file << endl; // Spasi antar transaksi

    file.close(); // Menutup file
}

int main()
{
    vector<string> namaBarang;
    vector<double> hargaBarang;
    int jumlahBarang;
    double totalHarga = 0, persentaseDiskon, jumlahDiskon, hargaSetelahDiskon;
    int pilihanDiskon;
    char ubahData, lanjutTransaksi, simpanData;

    // Mendapatkan tanggal sistem
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int hari = ltm->tm_mday;
    int bulan = 1 + ltm->tm_mon; // Bulan dimulai dari 0
    int tahun = 1900 + ltm->tm_year;

    cout << "======================================" << endl;
    cout << "      PROGRAM KASIR DISKON           " << endl;
    cout << "======================================" << endl;

    // Input jumlah barang
    cout << "Masukkan jumlah barang yang dibeli: ";
    cin >> jumlahBarang;

    // Validasi jumlah barang
    if (jumlahBarang <= 0)
    {
        cout << "\nError: Jumlah barang harus lebih dari 0!" << endl;
        return 1;
    }

    // Input detail barang
    cin.ignore(); // Membersihkan buffer input
    for (int i = 0; i < jumlahBarang; ++i)
    {
        string nama;
        double harga;

        cout << "\nBarang ke-" << i + 1 << ":" << endl;
        cout << "Nama barang: ";
        getline(cin, nama);

        cout << "Harga barang (Rp): ";
        cin >> harga;
        cin.ignore(); // Membersihkan buffer input

        // Validasi harga barang
        if (harga <= 0)
        {
            cout << "\nError: Harga barang harus lebih dari 0!" << endl;
            return 1;
        }

        namaBarang.push_back(nama);
        hargaBarang.push_back(harga);
        totalHarga += harga;
    }

    // Tampilkan daftar pembelian
    cout << "\n======================================" << endl;
    cout << "          DAFTAR PEMBELIAN           " << endl;
    cout << "======================================" << endl;
    tampilkanDaftarBarang(namaBarang, hargaBarang);

    cout << "--------------------------------------" << endl;
    cout << left << setw(30) << "TOTAL PEMBELIAN"
         << right << setw(15) << fixed << setprecision(2) << totalHarga << endl;
    cout << "======================================" << endl;

    // Opsi untuk mengubah data barang
    cout << "\nApakah Anda ingin mengubah data barang? (y/n): ";
    cin >> ubahData;

    if (ubahData == 'y' || ubahData == 'Y')
    {
        int nomorBarang;
        bool lanjutUbah = true;

        while (lanjutUbah)
        {
            cout << "\nMasukkan nomor barang yang ingin diubah (1-" << jumlahBarang << "): ";
            cin >> nomorBarang;

            // Validasi nomor barang
            if (nomorBarang < 1 || nomorBarang > jumlahBarang)
            {
                cout << "Error: Nomor barang tidak valid!" << endl;
                continue;
            }

            // Kurangi total harga dengan harga barang lama
            totalHarga -= hargaBarang[nomorBarang - 1];

            // Input data baru
            string namaBaru;
            double hargaBaru;

            cin.ignore(); // Membersihkan buffer input
            cout << "Nama baru untuk barang: ";
            getline(cin, namaBaru);

            cout << "Harga baru untuk barang (Rp): ";
            cin >> hargaBaru;

            // Validasi harga baru
            if (hargaBaru <= 0)
            {
                cout << "Error: Harga barang harus lebih dari 0!" << endl;
                return 1;
            }

            // Update data
            namaBarang[nomorBarang - 1] = namaBaru;
            hargaBarang[nomorBarang - 1] = hargaBaru;
            totalHarga += hargaBaru;

            // Tampilkan daftar pembelian yang sudah diperbarui
            cout << "\n======================================" << endl;
            cout << "      DAFTAR PEMBELIAN (DIPERBARUI)     " << endl;
            cout << "======================================" << endl;
            tampilkanDaftarBarang(namaBarang, hargaBarang);

            cout << "--------------------------------------" << endl;
            cout << left << setw(30) << "TOTAL PEMBELIAN"
                 << right << setw(15) << fixed << setprecision(2) << totalHarga << endl;
            cout << "======================================" << endl;

            // Tanyakan apakah ingin mengubah data lagi
            cout << "\nApakah ingin mengubah data barang lagi? (y/n): ";
            cin >> ubahData;
            if (ubahData != 'y' && ubahData != 'Y')
            {
                lanjutUbah = false;
            }
        }
    }

    // Konfirmasi untuk melanjutkan atau membatalkan transaksi
    cout << "\n======================================" << endl;
    cout << "        KONFIRMASI TRANSAKSI         " << endl;
    cout << "======================================" << endl;
    cout << "Total pembelian: Rp " << fixed << setprecision(2) << totalHarga << endl;
    cout << "Apakah Anda ingin melanjutkan transaksi? (y/n): ";
    cin >> lanjutTransaksi;

    if (lanjutTransaksi != 'y' && lanjutTransaksi != 'Y')
    {
        cout << "\n======================================" << endl;
        cout << "        TRANSAKSI DIBATALKAN         " << endl;
        cout << "======================================" << endl;
        cout << "Terima kasih telah menggunakan program ini." << endl;
        cout << "Data transaksi tidak disimpan." << endl;
        return 0;
    }

    // Tampilkan daftar tanggal diskon otomatis
    cout << "\n======================================" << endl;
    cout << "    DAFTAR TANGGAL DISKON OTOMATIS   " << endl;
    cout << "======================================" << endl;
    cout << "1. 17 Agustus -> Diskon 5% tambahan" << endl;
    cout << "======================================" << endl;

    // Cek apakah hari ini 17 Agustus
    bool isTanggalDiskon = (hari == 17 && bulan == 8);
    if (isTanggalDiskon)
    {
        cout << "\nINFO: Hari ini 17 Agustus " << tahun << "!" << endl;
        cout << "Anda akan mendapatkan diskon tambahan 5%" << endl;
    }

    // Pilihan jenis diskon
    cout << "\nPilih jenis diskon:" << endl;
    cout << "1. Otomatis (berdasarkan total pembelian)" << endl;
    cout << "2. Manual (input persentase)" << endl;
    cout << "Pilihan (1/2): ";
    cin >> pilihanDiskon;

    // Validasi pilihan
    if (pilihanDiskon != 1 && pilihanDiskon != 2)
    {
        cout << "\nError: Pilihan tidak valid!" << endl;
        return 1;
    }

    double diskonUtama = 0; // Diskon dari pilihan (otomatis/manual)
    string jenisDiskon;

    if (pilihanDiskon == 1)
    {
        // Diskon otomatis berdasarkan total pembelian
        if (totalHarga >= 3000000)
        {
            persentaseDiskon = 7;
        }
        else if (totalHarga >= 2000000)
        {
            persentaseDiskon = 5;
        }
        else if (totalHarga >= 1000000)
        {
            persentaseDiskon = 3;
        }
        else
        {
            persentaseDiskon = 0;
        }

        diskonUtama = totalHarga * (persentaseDiskon / 100);
        jenisDiskon = "Otomatis";
        cout << "\nDiskon otomatis diterapkan: " << persentaseDiskon << "%" << endl;
    }
    else
    {
        // Diskon manual
        cout << "\nMasukkan persentase diskon (%): ";
        cin >> persentaseDiskon;

        // Validasi diskon manual
        if (persentaseDiskon < 0)
        {
            cout << "\nError: Diskon tidak boleh negatif!" << endl;
            return 1;
        }

        diskonUtama = totalHarga * (persentaseDiskon / 100);
        jenisDiskon = "Manual";
    }

    // Hitung diskon tambahan jika tanggal 17 Agustus
    double diskonTambahan = 0;
    if (isTanggalDiskon)
    {
        diskonTambahan = totalHarga * 0.05; // 5% dari total pembelian
    }

    // Total diskon
    jumlahDiskon = diskonUtama + diskonTambahan;

    // Validasi agar total diskon tidak melebihi total pembelian
    if (jumlahDiskon > totalHarga)
    {
        jumlahDiskon = totalHarga;
    }

    hargaSetelahDiskon = totalHarga - jumlahDiskon;

    // Tampilkan hasil akhir
    cout << "\n======================================" << endl;
    cout << "             RINCIAN DISKON           " << endl;
    cout << "======================================" << endl;
    cout << left << setw(25) << "Total Pembelian"
         << right << setw(15) << fixed << setprecision(2) << totalHarga << endl;
    cout << left << setw(25) << "Diskon " + jenisDiskon
         << right << setw(15) << diskonUtama << endl;

    if (isTanggalDiskon)
    {
        cout << left << setw(25) << "Diskon 17 Agustus (5%)"
             << right << setw(15) << diskonTambahan << endl;
    }

    cout << "--------------------------------------" << endl;
    cout << left << setw(25) << "Total Diskon"
         << right << setw(15) << jumlahDiskon << endl;
    cout << left << setw(25) << "TOTAL YANG HARUS DIBAYAR"
         << right << setw(15) << hargaSetelahDiskon << endl;
    cout << "======================================" << endl;

    // Konfirmasi akhir transaksi
    cout << "\nApakah Anda ingin menyelesaikan transaksi ini? (y/n): ";
    cin >> lanjutTransaksi;

    if (lanjutTransaksi != 'y' && lanjutTransaksi != 'Y')
    {
        cout << "\n======================================" << endl;
        cout << "        TRANSAKSI DIBATALKAN         " << endl;
        cout << "======================================" << endl;
        cout << "Terima kasih telah menggunakan program ini." << endl;
        cout << "Data transaksi tidak disimpan." << endl;
        return 0;
    }

    // Tanyakan apakah ingin menyimpan data transaksi
    cout << "\nApakah Anda ingin menyimpan data transaksi ini? (y/n): ";
    cin >> simpanData;

    if (simpanData == 'y' || simpanData == 'Y')
    {
        simpanTransaksi(namaBarang, hargaBarang, totalHarga, jumlahDiskon, hargaSetelahDiskon,
                        jenisDiskon, hari, bulan, tahun);
        cout << "\nData transaksi berhasil disimpan!" << endl;
    }
    else
    {
        cout << "\nData transaksi tidak disimpan." << endl;
    }

    // Tampilkan struk pembayaran
    cout << "\n======================================" << endl;
    cout << "           STRUK PEMBAYARAN           " << endl;
    cout << "======================================" << endl;
    cout << "Tanggal: " << hari << "/" << bulan << "/" << tahun << endl;
    cout << "--------------------------------------" << endl;
    tampilkanDaftarBarang(namaBarang, hargaBarang);
    cout << "--------------------------------------" << endl;
    cout << left << setw(30) << "TOTAL PEMBELIAN"
         << right << setw(15) << fixed << setprecision(2) << totalHarga << endl;
    cout << left << setw(30) << "TOTAL DISKON"
         << right << setw(15) << fixed << setprecision(2) << jumlahDiskon << endl;
    cout << "--------------------------------------" << endl;
    cout << left << setw(30) << "TOTAL BAYAR"
         << right << setw(15) << fixed << setprecision(2) << hargaSetelahDiskon << endl;
    cout << "======================================" << endl;
    cout << "Terima kasih atas pembelian Anda!" << endl;

    return 0;
}