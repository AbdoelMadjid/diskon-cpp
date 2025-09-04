#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <ctime> // Untuk mendapatkan tanggal sistem

using namespace std;

int main()
{
    vector<string> namaBarang;
    vector<double> hargaBarang;
    int jumlahBarang;
    double totalHarga = 0, persentaseDiskon, jumlahDiskon, hargaSetelahDiskon;
    int pilihanDiskon;

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
    cout << left << setw(5) << "No" << setw(25) << "Nama Barang" << right << setw(15) << "Harga (Rp)" << endl;
    cout << "--------------------------------------" << endl;

    for (int i = 0; i < jumlahBarang; ++i)
    {
        cout << left << setw(5) << i + 1
             << setw(25) << namaBarang[i]
             << right << setw(15) << fixed << setprecision(2) << hargaBarang[i] << endl;
    }

    cout << "--------------------------------------" << endl;
    cout << left << setw(30) << "TOTAL PEMBELIAN"
         << right << setw(15) << fixed << setprecision(2) << totalHarga << endl;
    cout << "======================================" << endl;

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

    return 0;
}