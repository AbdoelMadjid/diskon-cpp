#include <iostream>
#include <iomanip> // Untuk mengatur presisi desimal

using namespace std;

int main()
{
    double hargaAsli, persentaseDiskon, hargaSetelahDiskon, jumlahDiskon;

    // Input data dari pengguna
    cout << "======================================" << endl;
    cout << "    PROGRAM PERHITUNGAN DISKON       " << endl;
    cout << "======================================" << endl;
    cout << "Masukkan harga asli barang (Rp): ";
    cin >> hargaAsli;
    cout << "Masukkan persentase diskon (%): ";
    cin >> persentaseDiskon;

    // Validasi input
    if (hargaAsli <= 0 || persentaseDiskon < 0)
    {
        cout << "\nError: Harga harus lebih dari 0 dan diskon tidak boleh negatif!" << endl;
        return 1; // Keluar dengan kode error
    }

    // Perhitungan diskon
    jumlahDiskon = hargaAsli * (persentaseDiskon / 100);
    hargaSetelahDiskon = hargaAsli - jumlahDiskon;

    // Tampilkan hasil
    cout << fixed << setprecision(2); // Mengatur 2 angka di belakang koma
    cout << "\n======================================" << endl;
    cout << "             HASIL HITUNG            " << endl;
    cout << "======================================" << endl;
    cout << "Harga Asli       : Rp " << hargaAsli << endl;
    cout << "Persentase Diskon: " << persentaseDiskon << "%" << endl;
    cout << "Jumlah Diskon    : Rp " << jumlahDiskon << endl;
    cout << "--------------------------------------" << endl;
    cout << "Harga Akhir      : Rp " << hargaSetelahDiskon << endl;
    cout << "======================================" << endl;

    return 0;
}