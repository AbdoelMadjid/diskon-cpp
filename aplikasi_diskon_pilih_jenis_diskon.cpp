#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> namaBarang;
    vector<double> hargaBarang;
    int jumlahBarang;
    double totalHarga = 0, persentaseDiskon, jumlahDiskon, hargaSetelahDiskon;
    int pilihanDiskon;

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
    }

    // Perhitungan diskon
    jumlahDiskon = totalHarga * (persentaseDiskon / 100);
    hargaSetelahDiskon = totalHarga - jumlahDiskon;

    // Tampilkan hasil akhir
    cout << "\n======================================" << endl;
    cout << "             RINCIAN DISKON           " << endl;
    cout << "======================================" << endl;
    cout << left << setw(25) << "Total Pembelian"
         << right << setw(15) << fixed << setprecision(2) << totalHarga << endl;
    cout << left << setw(25) << "Persentase Diskon"
         << right << setw(15) << persentaseDiskon << "%" << endl;
    cout << left << setw(25) << "Jumlah Diskon"
         << right << setw(15) << jumlahDiskon << endl;
    cout << "--------------------------------------" << endl;
    cout << left << setw(25) << "TOTAL YANG HARUS DIBAYAR"
         << right << setw(15) << hargaSetelahDiskon << endl;
    cout << "======================================" << endl;

    return 0;
}