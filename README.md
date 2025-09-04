## Hi there 👋

<div id="header" align="center">
  <img src="https://media.giphy.com/media/M9gbBd9nbDrOTu1Mqx/giphy.gif" width="100"/>
  <br>
  <img src="https://readme-typing-svg.herokuapp.com/?font=Righteous&size=35&center=true&vCenter=true&width=500&height=70&duration=4000&lines=Hi+There!+👋;+I'm+Abdoel+Madjid!;" />
</div>
<img src="https://i.imgur.com/dBaSKWF.gif" height="20" width="100%">

<div align="center">
  
[![GitHub WidgetBox](https://github-widgetbox.vercel.app/api/profile?username=abdoelmadjid&data=followers,repositories,stars,commits&theme=viridescent)](https://github.com/abdoelmadjid)
<!-- <h3 align ="center"> <strong> Let`s Code.Build & FUN </strong> </h3-->

![](https://komarev.com/ghpvc/?username=abdoelmadjid&color=brightgreen&style=for-the-badge)
[![LinkedIn](https://img.shields.io/badge/linkedin-%230077B5.svg?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/abdoelmadjid/)
[![Gmail](https://img.shields.io/badge/%20-Send%20Mail-black?color=14171A&labelColor=ef5350&logo=gmail&logoColor=ffffff&style=for-the-badge)](mailto:abdulmadjid.mpd@gmail.com)
[![Facebook](https://img.shields.io/badge/Facebook-%231877F2.svg?style=for-the-badge&logo=Facebook&logoColor=white)](https://facebook.com/abdulmadjid.mpd)
[![Twitter](https://img.shields.io/badge/Twitter-%231DA1F2.svg?style=for-the-badge&logo=Twitter&logoColor=white)](https://x.com/AbdoelMadjid)
[![Instagram](https://img.shields.io/badge/Instagram-%405DE6.svg?style=for-the-badge&logo=Instagram&logoColor=white)](https://www.instagram.com/abdoelmadjid)

</div>

### APLIKASI DISKON AWAL

<details type="reasoning" done="true" duration="3">
<summary>Mari kita mulai :</summary>

Kita akan membuat program C++ sederhana untuk menghitung diskon.  
Program ini akan meminta input dari pengguna berupa harga asli dan persentase diskon.  
Kemudian, program akan menghitung harga setelah diskon dan menampilkannya.

### Langkah-langkah:

1. Deklarasikan variabel yang dibutuhkan: harga asli, persentase diskon, dan harga setelah diskon.
2. Mintalah pengguna untuk memasukkan harga asli.
3. Mintalah pengguna untuk memasukkan persentase diskon.
4. Hitung harga setelah diskon:  
   `hargaSetelahDiskon = hargaAsli - (hargaAsli * (persentaseDiskon / 100))`
5. Tampilkan harga setelah diskon.

Kita juga bisa menambahkan validasi input jika diperlukan, misalnya memastikan harga dan diskon tidak negatif.  
Tapi untuk kesederhanaan, kita asumsikan input yang valid.

Mari kita tulis kode tersebut.

</details>

<details type="reasoning" done="true">
<summary>Hasil Implementasinya </summary>

Berikut adalah program C++ sederhana untuk menghitung diskon berdasarkan harga asli dan persentase diskon yang dimasukkan pengguna:

```cpp
#include <iostream>
#include <iomanip> // Untuk mengatur presisi desimal

using namespace std;

int main() {
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
    if (hargaAsli <= 0 || persentaseDiskon < 0) {
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
```

### Cara Kerja Program:

1. **Input Data**:

   - Pengguna memasukkan harga asli barang
   - Pengguna memasukkan persentase diskon (dalam %)

2. **Validasi Input**:

   - Program menolak harga ≤ 0 atau diskon negatif
   - Menampilkan pesan error jika input tidak valid

3. **Perhitungan**:

   - Menghitung jumlah diskon: `hargaAsli × (persentaseDiskon / 100)`
   - Menghitung harga akhir: `hargaAsli - jumlahDiskon`

4. **Output**:
   - Menampilkan harga asli, persentase diskon, jumlah diskon, dan harga akhir
   - Format mata uang Rupiah dengan 2 angka di belakang koma

### Contoh Penggunaan:

```
======================================
    PROGRAM PERHITUNGAN DISKON
======================================
Masukkan harga asli barang (Rp): 250000
Masukkan persentase diskon (%): 15

======================================
             HASIL HITUNG
======================================
Harga Asli       : Rp 250000.00
Persentase Diskon: 15.00%
Jumlah Diskon    : Rp 37500.00
--------------------------------------
Harga Akhir      : Rp 212500.00
======================================
```

### Fitur Tambahan:

1. **Validasi Input**:

   - Mencegah harga nol/negatif
   - Mencegah diskon negatif

2. **Format Output**:

   - Pengaturan presisi desimal untuk mata uang
   - Tampilan tabel yang rapi

3. **Error Handling**:
   - Program keluar dengan kode error jika input tidak valid

</details>

### MENAMBAHKAN UNTUK MEMASUKKAN NAMA BARANG DAN HARGA

<details type="reasoning" done="true" duration="7">
<summary>Gimana ya buatnya :</summary>

Kita akan memodifikasi program sebelumnya dengan menambahkan fitur:

1. Memasukkan beberapa barang (nama barang dan harga per barang)
2. Menampilkan daftar barang yang dibeli beserta harganya
3. Menghitung total harga sebelum diskon
4. Memasukkan persentase diskon
5. Menghitung diskon dan total setelah diskon

### Langkah-langkah:

- Gunakan array atau vector untuk menyimpan nama barang dan harga (karena jumlah barang bisa lebih dari satu).
- Minta pengguna memasukkan jumlah barang terlebih dahulu, kemudian untuk setiap barang masukkan nama dan harga.
- Hitung total harga.
- Tampilkan daftar barang dan harga per barang, lalu total.
- Setelah itu, minta persentase diskon.
- Hitung diskon dan total akhir.

### Struktur Program:

1. Input jumlah barang.
2. Loop untuk setiap barang: input nama dan harga.
3. Tampilkan tabel daftar barang dan harga, lalu total.
4. Input persentase diskon.
5. Hitung diskon dan total akhir.
6. Tampilkan hasil akhir.

### Catatan:

- Kita akan menggunakan `<vector>` dan `<string>` untuk menyimpan data barang.

### Perubahan dari Program Sebelumnya:

- Menambahkan input barang-barang.
- Menampilkan daftar pembelian.
- Baru kemudian menghitung diskon.

Kita juga akan menambahkan validasi untuk harga barang (harus positif).

Mari kita buat programnya.

</details>

<details type="reasoning" done="true">
<summary>Hasil Implementasinya </summary>

Berikut adalah program C++ yang telah diperbarui dengan fitur input barang-barang yang dibeli beserta harganya, kemudian menampilkan total pembayaran sebelum diskon, dilanjutkan dengan perhitungan diskon seperti program sebelumnya:

```cpp
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> namaBarang;
    vector<double> hargaBarang;
    int jumlahBarang;
    double totalHarga = 0, persentaseDiskon, jumlahDiskon, hargaSetelahDiskon;

    cout << "======================================" << endl;
    cout << "      PROGRAM KASIR DISKON           " << endl;
    cout << "======================================" << endl;

    // Input jumlah barang
    cout << "Masukkan jumlah barang yang dibeli: ";
    cin >> jumlahBarang;

    // Validasi jumlah barang
    if (jumlahBarang <= 0) {
        cout << "\nError: Jumlah barang harus lebih dari 0!" << endl;
        return 1;
    }

    // Input detail barang
    cin.ignore(); // Membersihkan buffer input
    for (int i = 0; i < jumlahBarang; ++i) {
        string nama;
        double harga;

        cout << "\nBarang ke-" << i + 1 << ":" << endl;
        cout << "Nama barang: ";
        getline(cin, nama);

        cout << "Harga barang (Rp): ";
        cin >> harga;
        cin.ignore(); // Membersihkan buffer input

        // Validasi harga barang
        if (harga <= 0) {
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

    for (int i = 0; i < jumlahBarang; ++i) {
        cout << left << setw(5) << i + 1
             << setw(25) << namaBarang[i]
             << right << setw(15) << fixed << setprecision(2) << hargaBarang[i] << endl;
    }

    cout << "--------------------------------------" << endl;
    cout << left << setw(30) << "TOTAL PEMBELIAN"
         << right << setw(15) << fixed << setprecision(2) << totalHarga << endl;
    cout << "======================================" << endl;

    // Input diskon
    cout << "\nMasukkan persentase diskon (%): ";
    cin >> persentaseDiskon;

    // Validasi diskon
    if (persentaseDiskon < 0) {
        cout << "\nError: Diskon tidak boleh negatif!" << endl;
        return 1;
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
```

### Cara Kerja Program:

1. **Input Barang**:

   - Pengguna memasukkan jumlah barang yang dibeli
   - Untuk setiap barang, pengguna memasukkan:
     - Nama barang
     - Harga barang per item

2. **Validasi Input**:

   - Jumlah barang harus > 0
   - Harga setiap barang harus > 0
   - Persentase diskon tidak boleh negatif

3. **Tampilan Daftar Pembelian**:

   - Menampilkan tabel berisi:
     - Nomor urut barang
     - Nama barang
     - Harga per barang
   - Menampilkan total pembelian sebelum diskon

4. **Perhitungan Diskon**:

   - Pengguna memasukkan persentase diskon
   - Program menghitung:
     - Jumlah diskon (Rp)
     - Total yang harus dibayar setelah diskon

5. **Tampilan Akhir**:
   - Menampilkan rincian:
     - Total pembelian awal
     - Persentase diskon
     - Jumlah diskon
     - Total akhir yang harus dibayar

### Contoh Penggunaan:

```
======================================
      PROGRAM KASIR DISKON
======================================
Masukkan jumlah barang yang dibeli: 3

Barang ke-1:
Nama barang: Buku Tulis
Harga barang (Rp): 15000

Barang ke-2:
Nama barang: Pensil
Harga barang (Rp): 5000

Barang ke-3:
Nama barang: Penggaris
Harga barang (Rp): 7000

======================================
          DAFTAR PEMBELIAN
======================================
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Buku Tulis                   15000.00
2    Pensil                        5000.00
3    Penggaris                     7000.00
--------------------------------------
TOTAL PEMBELIAN                    27000.00
======================================

Masukkan persentase diskon (%): 10

======================================
             RINCIAN DISKON
======================================
Total Pembelian                  27000.00
Persentase Diskon                  10.00%
Jumlah Diskon                     2700.00
--------------------------------------
TOTAL YANG HARUS DIBAYAR          24300.00
======================================
```

### Fitur Tambahan:

1. **Penyimpanan Data Barang**:

   - Menggunakan `vector` untuk menyimpan nama dan harga barang
   - Fleksibel untuk jumlah barang berapa pun

2. **Tampilan Tabel Rapi**:

   - Menggunakan `setw()` untuk format kolom yang rapi
   - Header tabel yang jelas

3. **Validasi Input Lengkap**:

   - Validasi jumlah barang
   - Validasi harga per barang
   - Validasi persentase diskon

4. **Perhitungan Otomatis**:
   - Total pembelian dihitung otomatis dari input barang
   - Diskon dihitung berdasarkan total pembelian

Program ini menggabungkan fitur input barang dengan perhitungan diskon dalam satu alur yang intuitif, cocok untuk aplikasi kasir sederhana dengan sistem diskon.

</details>

### TAMBAHKAN PILIHAN DISKON

tambahkan pilihan otomatis di beri diskon dengan kriteria

- 3.000.000 diskon 7 %
- 2.000.000 diskon 5 %
- 1.000.000 diskon 3 %
  atau input manual diskon

<details type="reasoning" done="true">
<summary>Berpikir logika dulu sebenera :</summary>

Kita akan menambahkan fitur pilihan diskon otomatis berdasarkan total pembelian atau input manual.

### Langkah-langkah:

1. Setelah menghitung total pembelian, tampilkan pilihan kepada user:
   - Apakah ingin menggunakan diskon otomatis (berdasarkan kriteria) atau input manual?
2. Jika memilih otomatis, maka program akan mengecek total pembelian dan menerapkan diskon sesuai kriteria:
   - > 3.000.000 → 7%
   - > 2.000.000 → 5%
   - > 1.000.000 → 3%
   - Jika total pembelian kurang dari 1.000.000, maka diskon 0%.
3. Jika memilih manual, maka user memasukkan persentase diskon.

Kita akan memodifikasi bagian setelah menampilkan total pembelian.

### Perubahan:

- Setelah menampilkan total pembelian, kita beri pilihan:

```console
  cout << "\nPilih jenis diskon:\n";
  cout << "1. Otomatis (berdasarkan total pembelian)\n";
  cout << "2. Manual (input persentase)\n";
  cout << "Pilihan (1/2): ";
```

- Kemudian kita baca pilihan dan lakukan perhitungan diskon sesuai pilihan.

**Catatan:** Kita tetap memvalidasi input manual agar tidak negatif.

Berikut adalah kode yang telah dimodifikasi:

</details>

<details type="reasoning" done="true">
<summary>Hasil Implementasinya </summary>

Berikut adalah program C++ yang telah diperbarui dengan fitur pilihan diskon otomatis berdasarkan total pembelian atau input manual diskon:

```cpp
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main() {
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
    if (jumlahBarang <= 0) {
        cout << "\nError: Jumlah barang harus lebih dari 0!" << endl;
        return 1;
    }

    // Input detail barang
    cin.ignore(); // Membersihkan buffer input
    for (int i = 0; i < jumlahBarang; ++i) {
        string nama;
        double harga;

        cout << "\nBarang ke-" << i + 1 << ":" << endl;
        cout << "Nama barang: ";
        getline(cin, nama);

        cout << "Harga barang (Rp): ";
        cin >> harga;
        cin.ignore(); // Membersihkan buffer input

        // Validasi harga barang
        if (harga <= 0) {
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

    for (int i = 0; i < jumlahBarang; ++i) {
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
    if (pilihanDiskon != 1 && pilihanDiskon != 2) {
        cout << "\nError: Pilihan tidak valid!" << endl;
        return 1;
    }

    if (pilihanDiskon == 1) {
        // Diskon otomatis berdasarkan total pembelian
        if (totalHarga >= 3000000) {
            persentaseDiskon = 7;
        } else if (totalHarga >= 2000000) {
            persentaseDiskon = 5;
        } else if (totalHarga >= 1000000) {
            persentaseDiskon = 3;
        } else {
            persentaseDiskon = 0;
        }

        cout << "\nDiskon otomatis diterapkan: " << persentaseDiskon << "%" << endl;
    } else {
        // Diskon manual
        cout << "\nMasukkan persentase diskon (%): ";
        cin >> persentaseDiskon;

        // Validasi diskon manual
        if (persentaseDiskon < 0) {
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
```

### Cara Kerja Program:

1. **Input Barang**:

   - Pengguna memasukkan jumlah barang yang dibeli
   - Untuk setiap barang, pengguna memasukkan nama dan harga

2. **Tampilan Daftar Pembelian**:

   - Menampilkan tabel berisi daftar barang yang dibeli
   - Menampilkan total pembelian sebelum diskon

3. **Pilihan Jenis Diskon**:

   - **Otomatis**: Diskon diterapkan berdasarkan total pembelian:
     - Total ≥ Rp 3.000.000 → Diskon 7%
     - Total ≥ Rp 2.000.000 → Diskon 5%
     - Total ≥ Rp 1.000.000 → Diskon 3%
     - Total < Rp 1.000.000 → Diskon 0%
   - **Manual**: Pengguna memasukkan persentase diskon sendiri

4. **Perhitungan dan Tampilan Akhir**:
   - Program menghitung jumlah diskon dan total pembayaran
   - Menampilkan rincian diskon dan total akhir

### Contoh Penggunaan dengan Diskon Otomatis:

```
======================================
      PROGRAM KASIR DISKON
======================================
Masukkan jumlah barang yang dibeli: 4

Barang ke-1:
Nama barang: Laptop
Harga barang (Rp): 8500000

Barang ke-2:
Nama barang: Mouse
Harga barang (Rp): 250000

Barang ke-3:
Nama barang: Keyboard
Harga barang (Rp): 450000

Barang ke-4:
Nama barang: Headset
Harga barang (Rp): 750000

======================================
          DAFTAR PEMBELIAN
======================================
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Laptop                     8500000.00
2    Mouse                       250000.00
3    Keyboard                    450000.00
4    Headset                     750000.00
--------------------------------------
TOTAL PEMBELIAN                 9950000.00
======================================

Pilih jenis diskon:
1. Otomatis (berdasarkan total pembelian)
2. Manual (input persentase)
Pilihan (1/2): 1

Diskon otomatis diterapkan: 7%

======================================
             RINCIAN DISKON
======================================
Total Pembelian                9950000.00
Persentase Diskon                  7.00%
Jumlah Diskon                    696500.00
--------------------------------------
TOTAL YANG HARUS DIBAYAR        9253500.00
======================================
```

### Contoh Penggunaan dengan Diskon Manual:

```
======================================
      PROGRAM KASIR DISKON
======================================
Masukkan jumlah barang yang dibeli: 2

Barang ke-1:
Nama barang: Sepatu
Harga barang (Rp): 650000

Barang ke-2:
Nama barang: Tas
Harga barang (Rp): 450000

======================================
          DAFTAR PEMBELIAN
======================================
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Sepatu                      650000.00
2    Tas                         450000.00
--------------------------------------
TOTAL PEMBELIAN                 1100000.00
======================================

Pilih jenis diskon:
1. Otomatis (berdasarkan total pembelian)
2. Manual (input persentase)
Pilihan (1/2): 2

Masukkan persentase diskon (%): 10

======================================
             RINCIAN DISKON
======================================
Total Pembelian                1100000.00
Persentase Diskon                 10.00%
Jumlah Diskon                    110000.00
--------------------------------------
TOTAL YANG HARUS DIBAYAR         990000.00
======================================
```

### Fitur Tambahan:

1. **Sistem Diskon Ganda**:

   - Diskon otomatis berdasarkan total pembelian
   - Diskon manual sesuai keinginan pengguna

2. **Kriteria Diskon Otomatis**:

   - Total ≥ Rp 3.000.000 → 7%
   - Total ≥ Rp 2.000.000 → 5%
   - Total ≥ Rp 1.000.000 → 3%
   - Total < Rp 1.000.000 → 0%

3. **Validasi Input**:

   - Validasi jumlah barang
   - Validasi harga per barang
   - Validasi pilihan diskon
   - Validasi persentase diskon manual

4. **Tampilan Informatif**:
   - Menampilkan jenis diskon yang diterapkan
   - Menampilkan kriteria diskon otomatis
   - Format tabel yang rapi dan jelas

Program ini memberikan fleksibilitas kepada pengguna untuk memilih sistem diskon yang diinginkan, baik otomatis berdasarkan total pembelian maupun manual sesuai kebutuhan.

## </details>

### TAMBAHKAN JIKA TANGGAL TERTENTU ADA DISKON

tambahkan jika tanggal hari ini tanggal 17 Agustus, maka di beri diskon 5 %,
jadi pilihan diskon tadi tambah diskon kalau tanggal 17 Agustus.
berikan dulu list tanggal untuk mendapatkan diskon otomatis

<details type="reasoning" done="true" duration="166">
<summary>Berfikir logika sedikit dulu :</summary>

Kita akan menambahkan fitur diskon otomatis berdasarkan tanggal tertentu (misalnya 17 Agustus).
Langkah-langkah:

1. Tambahkan pilihan diskon otomatis berdasarkan tanggal (misalnya 17 Agustus) dengan diskon 5%.
2. Sebelum pilihan diskon, tampilkan dulu daftar tanggal yang mendapatkan diskon otomatis (dalam hal ini hanya 17 Agustus).
3. Jika hari ini adalah tanggal 17 Agustus, maka tambahkan opsi diskon otomatis 5% (atau bisa juga langsung diterapkan?).
4. Namun, dalam permintaan, kita diminta untuk menambahkan diskon 5% jika tanggal 17 Agustus, jadi kita bisa:

   - Menambahkan opsi ketiga: "3. Diskon Spesial 17 Agustus (5%)"
   - Atau, jika tanggal 17 Agustus, maka otomatis diskon 5% ditambahkan ke diskon yang ada?

Tapi dari permintaan: "tambahkan jika tanggal hari ini tanggal 17 Agustus, maka di beri diskon 5 %", dan "jadi pilihan diskon tadi tambah diskon kalau tanggal 17 Agustus".

Saya interpretasikan:

1. Jika tanggal 17 Agustus, maka ada opsi diskon tambahan yaitu 5% (diskon spesial).
2. Jadi pilihan diskon menjadi:

- Otomatis (berdasarkan total pembelian)
- Manual (input persentase)
- Diskon Spesial 17 Agustus (5%) [hanya muncul jika tanggal 17 Agustus]

Namun, bagaimana jika kita ingin menggabungkan? Misalnya diskon otomatis (berdasarkan total) dan diskon 17 Agustus?
Permintaan tidak spesifik. Saya asumsikan bahwa diskon 17 Agustus adalah opsi terpisah.

Alternatif lain:

- Jika tanggal 17 Agustus, maka diskon otomatis (berdasarkan total) akan ditambah 5%?
  Tapi itu bisa membuat diskon menjadi 12% (jika total>=3jt) atau 10% (jika total>=2jt) dst.

Namun, dari kalimat: "tambahkan jika tanggal hari ini tanggal 17 Agustus, maka di beri diskon 5 %",
sepertinya diskon 5% ini adalah diskon tambahan yang berlaku di tanggal tersebut, bukan menggantikan.

Tapi permintaan selanjutnya: "jadi pilihan diskon tadi tambah diskon kalau tanggal 17 Agustus",
artinya kita menambahkan opsi diskon baru.

Jadi, kita akan:

- Mengecek tanggal hari ini (dalam program, kita bisa hardcode dulu untuk testing, tapi nanti bisa diubah ke input atau sistem)
- Jika tanggal 17 Agustus, maka tampilkan opsi ketiga: "3. Diskon Spesial 17 Agustus (5%)"
- Jika user memilih opsi 3, maka diskon yang diberikan adalah 5%.

Namun, bagaimana jika user ingin diskon otomatis (berdasarkan total) dan juga diskon 17 Agustus?
Permintaan tidak menyebutkan, jadi kita buat opsi terpisah.

Tapi, mungkin lebih baik jika diskon 17 Agustus adalah tambahan dari diskon yang ada?
Misalnya: jika tanggal 17 Agustus, maka diskon otomatis (berdasarkan total) akan ditambah 5%?
Atau diskon 17 Agustus berlaku sebagai diskon tunggal?

Karena permintaan tidak jelas, saya akan buat dua skenario:

```console
Skenario 1 :
(sesuai permintaan awal): - Menambah opsi diskon baru: "Diskon Spesial 17 Agustus (5%)" yang hanya muncul jika tanggal 17 Agustus.

Skenario 2 :
(alternatif): - Jika tanggal 17 Agustus, maka diskon otomatis (berdasarkan total) akan ditambah 5% (jadi diskon total = diskon otomatis + 5%).
```

Namun, dari kalimat: "tambahkan jika tanggal hari ini tanggal 17 Agustus, maka di beri diskon 5 %",
dan "jadi pilihan diskon tadi tambah diskon kalau tanggal 17 Agustus", saya pilih Skenario 1: opsi terpisah.

Tapi, untuk lebih fleksibel, mungkin kita bisa buat:

Opsi diskon:

```console
1. Diskon Otomatis (berdasarkan total pembelian)
2. Diskon Manual 3. Diskon Spesial 17 Agustus (5%) [hanya muncul jika tanggal 17 Agustus]
```

Dan jika user memilih opsi 1, maka diskon otomatis berdasarkan total, tanpa tambahan 5% (kecuali jika kita ingin menggabungkan, tapi tidak).

Atau, kita bisa buat: jika tanggal 17 Agustus, maka diskon otomatis (berdasarkan total) akan ditambah 5%?
Itu berarti diskon total = diskon otomatis + 5%.

Tapi permintaan: "tambahkan diskon kalau tanggal 17 Agustus", artinya menambah diskon, bukan mengganti.

Jadi, saya akan buat:

- Jika tanggal 17 Agustus, maka diskon yang diberikan adalah diskon otomatis (berdasarkan total) DITAMBAH 5%?
- Atau diskon 5% sebagai diskon tambahan setelah diskon otomatis?

Ini perlu klarifikasi. Tapi karena tidak ada, saya akan buat sesuai permintaan:
"tambahkan jika tanggal hari ini tanggal 17 Agustus, maka di beri diskon 5 %"

Artinya, di tanggal 17 Agustus, customer mendapat diskon 5% (selain diskon yang mungkin sudah ada?).

Namun, dalam program sebelumnya, diskon hanya satu (baik otomatis atau manual).

Saya putuskan:

- Jika tanggal 17 Agustus, maka kita akan menambahkan opsi diskon ketiga: "3. Diskon Spesial 17 Agustus (5%)"
  yang memberikan diskon 5% (menggantikan diskon otomatis/manual).

Tapi, bagaimana jika kita ingin diskon otomatis dan diskon 17 Agustus berlaku bersamaan?
Itu berarti diskon total = diskon otomatis + 5%.

Saya rasa ini lebih masuk akal. Jadi, jika tanggal 17 Agustus, maka diskon yang diberikan adalah:
diskon_total = diskon_otomatis (berdasarkan total) + 5%

Atau, diskon 5% diberikan setelah diskon otomatis?

Contoh:

```console
Total = 3.500.000
Diskon otomatis = 7% (karena >=3jt) -> 245.000
Diskon 17 Agustus = 5% dari total awal? atau dari sisa setelah diskon otomatis?
```

Biasanya, diskon bertingkat: - Diskon otomatis dulu, lalu diskon 17 Agustus dari sisa setelah diskon otomatis? - Atau diskon 17 Agustus dari total awal, lalu diskon otomatis dari sisa?

Saya asumsikan diskon 17 Agustus adalah tambahan diskon dari total awal, jadi:

```console
diskon_total = (diskon_otomatis + diskon_17_agustus) % dari total awal.
```

Tapi, itu berarti diskon total = 7% + 5% = 12% dari total awal.

Atau, bisa juga diskon 17 Agustus diberikan setelah diskon otomatis, jadi:

```console
Setelah diskon otomatis: total = 3.500.000 - 245.000 = 3.255.000
Lalu diskon 5% dari 3.255.000 = 162.750
Total akhir = 3.255.000 - 162.750 = 3.092.250
```

Ini lebih umum (diskon bertingkat).

Tapi permintaan tidak spesifik.

Saya akan buat dua opsi:

```console
Opsi 1:
Diskon 17 Agustus sebagai diskon tambahan yang dihitung dari total awal, jadi diskon total = diskon otomatis + 5% (dari total awal).

Opsi 2:
Diskon 17 Agustus sebagai diskon kedua yang dihitung setelah diskon otomatis.
```

Namun, untuk kesederhanaan, saya pilih Opsi 1: diskon total = diskon otomatis + 5% (dari total awal).

Tapi, bagaimana jika user memilih diskon manual?
Jika tanggal 17 Agustus, maka diskon manual juga akan ditambah 5%?

Permintaan: "tambahkan diskon kalau tanggal 17 Agustus", artinya di tanggal 17 Agustus, customer selalu dapat tambahan 5%,
terlepas dari diskon yang dipilih (otomatis atau manual).

Jadi, saya akan buat: - Jika tanggal 17 Agustus, maka diskon yang diberikan adalah:

```console
diskon_total = diskon_dipilih (otomatis/manual) + 5% (dari total awal)
```

Tapi, ini berarti diskon total bisa lebih dari 100%?

Alternatif: diskon 17 Agustus adalah diskon wajib yang diberikan setelah diskon yang dipilih.

Saya putuskan: - Jika tanggal 17 Agustus, maka setelah diskon (otomatis/manual) diterapkan, akan diberikan diskon tambahan 5% dari total awal.

Jadi:

```console
total_setelah_diskon1 = total_awal - (diskon1)
total_setelah_diskon2 = total_setelah_diskon1 - (5% \* total_awal)
```

Atau, bisa juga:

```console
total_setelah_diskon2 = total_awal - (diskon1 + 5% \* total_awal)
```

Sama saja.

Tapi, bagaimana jika user memilih diskon manual 50% dan tanggal 17 Agustus?
Maka diskon total = 50% + 5% = 55% dari total awal.

Ini bisa diterima.

Jadi, perubahan: - Jika tanggal 17 Agustus, maka setelah diskon (otomatis/manual) dihitung, kita tambahkan diskon 5% dari total awal.

Tapi, permintaan: "tambahkan jika tanggal hari ini tanggal 17 Agustus, maka di beri diskon 5 %",
dan "jadi pilihan diskon tadi tambah diskon kalau tanggal 17 Agustus".

Artinya, diskon 5% ini adalah tambahan dari diskon yang sudah ada.

Jadi, kita tidak perlu mengubah pilihan, tapi secara otomatis menambahkan diskon 5% di akhir.

```console
Langkah:
1. Hitung diskon sesuai pilihan (otomatis/manual) -> diskon1
2. Jika tanggal 17 Agustus, maka diskon2 = 5% \* total_awal
3. Total diskon = diskon1 + diskon2 4. Total akhir = total_awal - total_diskon
```

Tapi, bagaimana jika diskon1 sudah 100%? maka total akhir bisa negatif?

Kita perlu validasi: total diskon tidak boleh lebih dari total awal.

Jadi, kita tambahkan validasi: jika total_diskon > total_awal, maka total_diskon = total_awal.

Namun, dalam program ini, kita asumsikan diskon tidak akan melebihi 100%.

Tapi, untuk aman, kita tambahkan validasi.

Jadi, rencana:

1.  Tambahkan pengecekan tanggal (untuk sekarang, kita hardcode tanggal 17 Agustus, tapi nanti bisa diubah ke input atau sistem).
2.  Jika tanggal 17 Agustus, maka setelah menghitung diskon sesuai pilihan (otomatis/manual), kita tambahkan diskon 5% dari total awal.
3.  Tampilkan rincian: diskon1 (otomatis/manual) dan diskon2 (5% khusus 17 Agustus).

Tapi, permintaan juga: "berikan dulu list tanggal untuk mendapatkan diskon otomatis"

Artinya, sebelum pilihan diskon, kita tampilkan daftar tanggal yang mendapat diskon otomatis (dalam hal ini hanya 17 Agustus).

Jadi, kita tambahkan:

```console
       cout << "\nDaftar tanggal diskon otomatis:" << endl;
       cout << "- 17 Agustus (diskon 5% tambahan)" << endl;
```

Tapi, diskon otomatis di sini bukan berarti menggantikan, tapi tambahan.

Jadi, kita tampilkan bahwa di tanggal 17 Agustus akan ada diskon tambahan 5%.

Namun, dalam program, diskon otomatis yang pertama (berdasarkan total) tetap ada, dan di 17 Agustus ada tambahan 5%.

Jadi, kita tampilkan:

```console
       cout << "\nDaftar tanggal diskon otomatis:" << endl;
       cout << "1. 17 Agustus -> Tambahan diskon 5%" << endl;
```

Tapi, ini bukan diskon otomatis yang menggantikan, melainkan tambahan.

Saya rasa lebih baik kita tampilkan:

```console
       cout << "\nInformasi Diskon Tambahan:" << endl;
       cout << "Hari ini: 17 Agustus -> Anda akan mendapatkan diskon tambahan 5%" << endl;
```

Tapi, bagaimana jika bukan 17 Agustus? maka tidak ditampilkan.

Jadi, kita cek dulu tanggal hari ini.

Untuk testing, kita hardcode tanggal 17 Agustus.

Implementasi:

```console
       // Untuk testing, kita set tanggal hari ini
       int hari = 17, bulan = 8; // Agustus

       // Jika ingin menggunakan tanggal sistem, bisa menggunakan <ctime>
       // Tapi untuk sederhana, kita hardcode dulu.

       if (hari == 17 && bulan == 8) {
           cout << "\nInformasi Diskon Tambahan:" << endl;
           cout << "Selamat! Hari ini 17 Agustus, Anda mendapatkan diskon tambahan 5%" << endl;
       }
```

Kemudian, setelah menghitung diskon sesuai pilihan, kita tambahkan:

```console
       double diskonTambahan = 0;
       if (hari == 17 && bulan == 8) {
           diskonTambahan = totalHarga * 0.05;
       }

       jumlahDiskon = diskon1 + diskonTambahan; // diskon1 adalah diskon dari pilihan (otomatis/manual)

       // Validasi agar total diskon tidak melebihi totalHarga
       if (jumlahDiskon > totalHarga) {
           jumlahDiskon = totalHarga;
       }

       hargaSetelahDiskon = totalHarga - jumlahDiskon;
```

Dan di tampilan akhir, kita tampilkan dua diskon jika ada.

Tapi, bagaimana dengan pilihan diskon?
Pilihan diskon tetap ada (otomatis/manual) dan di 17 Agustus ada tambahan 5%.

Jadi, kita tidak mengubah pilihan, hanya menambahkan diskon di akhir.

Ini sesuai permintaan: "tambahkan diskon kalau tanggal 17 Agustus".

Jadi, perubahan:

       - Sebelum pilihan diskon, tampilkan informasi jika hari ini 17 Agustus (diskon tambahan 5%).
       - Setelah menghitung diskon sesuai pilihan, tambahkan diskon 5% (jika 17 Agustus).
       - Tampilkan rincian diskon: diskon pilihan dan diskon tambahan (jika ada).

Namun, permintaan juga: "berikan dulu list tanggal untuk mendapatkan diskon otomatis"

Artinya, kita harus tampilkan daftar tanggal yang dapat diskon otomatis (dalam hal ini 17 Agustus) sebelum pilihan diskon.

Jadi, kita tampilkan:

```console
       cout << "\nDaftar tanggal diskon otomatis:" << endl;
       cout << "17 Agustus" << endl;
```

Tapi, ini hanya satu tanggal. Untuk fleksibilitas, kita bisa buat vector, tapi untuk sederhana, kita tampilkan hardcode.

Jadi, langkah:

```console
       1. Setelah menampilkan total pembelian, sebelum pilihan diskon:
           cout << "\nDaftar tanggal diskon otomatis:" << endl;
           cout << "- 17 Agustus" << endl;

       2. Jika hari ini 17 Agustus, tampilkan tambahan informasi.
```

Tapi, daftar tanggal diskon otomatis ini tetap ditampilkan meskipun bukan 17 Agustus?
Ya, sebagai informasi.

Jadi, kita tampilkan selalu.

Tapi, diskon otomatis di sini bukan berarti diskon yang diberikan otomatis tanpa pilihan,
melainkan diskon tambahan yang otomatis diberikan di tanggal tersebut.

Jadi, kita tampilkan:

```console
       cout << "\nDaftar tanggal diskon otomatis (tambahan):" << endl;
       cout << "17 Agustus" << endl;
```

Lalu, jika hari ini 17 Agustus, kita beri tahu bahwa diskon tambahan akan diberikan.

Implementasi:

```console
       // Setelah total pembelian
       cout << "\n======================================" << endl;
       cout << "      INFORMASI DISKON OTOMATIS       " << endl;
       cout << "======================================" << endl;
       cout << "Daftar tanggal diskon otomatis (tambahan):" << endl;
       cout << "- 17 Agustus" << endl;

       // Cek tanggal
       int hari = 17, bulan = 8; // hardcode untuk testing
       bool isTanggalDiskon = (hari == 17 && bulan == 8);

       if (isTanggalDiskon) {
           cout << "\nHari ini 17 Agustus! Anda akan mendapatkan diskon tambahan 5%" << endl;
       }

       cout << "======================================" << endl;

       // Lanjut ke pilihan diskon

```

Kemudian, setelah menghitung diskon1 (dari pilihan), kita hitung diskon tambahan jika isTanggalDiskon.

Di tampilan akhir, kita tampilkan:

```console
       cout << left << setw(25) << "Total Pembelian"
            << right << setw(15) << fixed << setprecision(2) << totalHarga << endl;
       cout << left << setw(25) << "Diskon " << (pilihanDiskon==1?"Otomatis":"Manual")
            << right << setw(15) << diskon1 << endl;
       if (isTanggalDiskon) {
           cout << left << setw(25) << "Diskon Tambahan (17 Agustus)"
                << right << setw(15) << diskonTambahan << endl;
       }
       cout << "--------------------------------------" << endl;
       cout << left << setw(25) << "Total Diskon"
            << right << setw(15) << jumlahDiskon << endl;
       cout << left << setw(25) << "TOTAL YANG HARUS DIBAYAR"
            << right << setw(15) << hargaSetelahDiskon << endl;
```

Tapi, perhatikan: diskon1 adalah diskon yang dihitung dari pilihan (otomatis/manual),
dan diskonTambahan adalah 5% dari totalHarga.

Jadi, total diskon = diskon1 + diskonTambahan.

Namun, jika diskon1 sudah 100%, maka diskonTambahan tidak akan diberikan?
Tidak, kita berikan, tapi kita batasi total diskon tidak melebihi totalHarga.

```console
   Validasi:

       if (jumlahDiskon > totalHarga) {
           jumlahDiskon = totalHarga;
           hargaSetelahDiskon = 0;
       }
```

Tapi, di tampilan, kita tetap tampilkan diskonTambahan meskipun total diskon dibatasi.

Alternatif: kita hitung diskonTambahan setelah diskon1, tapi dari sisa?
Tapi permintaan: diskon 5% dari total awal.

Jadi, kita hitung diskonTambahan = 0.05 \* totalHarga, lalu tambahkan ke diskon1.

Dan batasi total diskon tidak melebihi totalHarga.

Sekarang, kita ubah program.

Catatan: Untuk testing, kita hardcode tanggal 17 Agustus.
Jika ingin menggunakan tanggal sistem, bisa menggunakan <ctime> dan struct tm.

Tapi, untuk kesederhanaan, kita hardcode.

Mari kita implementasikan.

</details>

<details type="reasoning" done="true">
<summary>Hasil Implementasinya </summary>

Berikut adalah program C++ yang telah diperbarui dengan fitur diskon otomatis berdasarkan tanggal 17 Agustus dan sistem diskon ganda:

```cpp
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <ctime> // Untuk mendapatkan tanggal sistem

using namespace std;

int main() {
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
    if (jumlahBarang <= 0) {
        cout << "\nError: Jumlah barang harus lebih dari 0!" << endl;
        return 1;
    }

    // Input detail barang
    cin.ignore(); // Membersihkan buffer input
    for (int i = 0; i < jumlahBarang; ++i) {
        string nama;
        double harga;

        cout << "\nBarang ke-" << i + 1 << ":" << endl;
        cout << "Nama barang: ";
        getline(cin, nama);

        cout << "Harga barang (Rp): ";
        cin >> harga;
        cin.ignore(); // Membersihkan buffer input

        // Validasi harga barang
        if (harga <= 0) {
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

    for (int i = 0; i < jumlahBarang; ++i) {
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
    if (isTanggalDiskon) {
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
    if (pilihanDiskon != 1 && pilihanDiskon != 2) {
        cout << "\nError: Pilihan tidak valid!" << endl;
        return 1;
    }

    double diskonUtama = 0; // Diskon dari pilihan (otomatis/manual)
    string jenisDiskon;

    if (pilihanDiskon == 1) {
        // Diskon otomatis berdasarkan total pembelian
        if (totalHarga >= 3000000) {
            persentaseDiskon = 7;
        } else if (totalHarga >= 2000000) {
            persentaseDiskon = 5;
        } else if (totalHarga >= 1000000) {
            persentaseDiskon = 3;
        } else {
            persentaseDiskon = 0;
        }

        diskonUtama = totalHarga * (persentaseDiskon / 100);
        jenisDiskon = "Otomatis";
        cout << "\nDiskon otomatis diterapkan: " << persentaseDiskon << "%" << endl;
    } else {
        // Diskon manual
        cout << "\nMasukkan persentase diskon (%): ";
        cin >> persentaseDiskon;

        // Validasi diskon manual
        if (persentaseDiskon < 0) {
            cout << "\nError: Diskon tidak boleh negatif!" << endl;
            return 1;
        }

        diskonUtama = totalHarga * (persentaseDiskon / 100);
        jenisDiskon = "Manual";
    }

    // Hitung diskon tambahan jika tanggal 17 Agustus
    double diskonTambahan = 0;
    if (isTanggalDiskon) {
        diskonTambahan = totalHarga * 0.05; // 5% dari total pembelian
    }

    // Total diskon
    jumlahDiskon = diskonUtama + diskonTambahan;

    // Validasi agar total diskon tidak melebihi total pembelian
    if (jumlahDiskon > totalHarga) {
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

    if (isTanggalDiskon) {
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
```

### Cara Kerja Program:

1. **Input Barang**:

   - Pengguna memasukkan jumlah barang yang dibeli
   - Untuk setiap barang, pengguna memasukkan nama dan harga

2. **Tampilan Daftar Pembelian**:

   - Menampilkan tabel berisi daftar barang yang dibeli
   - Menampilkan total pembelian sebelum diskon

3. **Informasi Diskon Otomatis**:

   - Menampilkan daftar tanggal yang mendapat diskon otomatis (17 Agustus)
   - Mengecek apakah hari ini adalah 17 Agustus
   - Jika ya, menampilkan informasi diskon tambahan 5%

4. **Pilihan Jenis Diskon**:

   - **Otomatis**: Diskon berdasarkan total pembelian:
     - Total ≥ Rp 3.000.000 → Diskon 7%
     - Total ≥ Rp 2.000.000 → Diskon 5%
     - Total ≥ Rp 1.000.000 → Diskon 3%
     - Total < Rp 1.000.000 → Diskon 0%
   - **Manual**: Pengguna memasukkan persentase diskon sendiri

5. **Perhitungan Diskon**:

   - Menghitung diskon utama (otomatis/manual)
   - Jika tanggal 17 Agustus, menambahkan diskon 5% dari total pembelian
   - Memastikan total diskon tidak melebihi total pembelian

6. **Tampilan Akhir**:
   - Menampilkan rincian diskon:
     - Total pembelian
     - Diskon utama (otomatis/manual)
     - Diskon tambahan 17 Agustus (jika berlaku)
     - Total diskon
     - Total akhir yang harus dibayar

### Contoh Penggunaan di Tanggal 17 Agustus:

```
======================================
      PROGRAM KASIR DISKON
======================================
Masukkan jumlah barang yang dibeli: 3

Barang ke-1:
Nama barang: Laptop
Harga barang (Rp): 7500000

Barang ke-2:
Nama barang: Mouse
Harga barang (Rp): 300000

Barang ke-3:
Nama barang: Keyboard
Harga barang (Rp): 500000

======================================
          DAFTAR PEMBELIAN
======================================
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Laptop                     7500000.00
2    Mouse                       300000.00
3    Keyboard                    500000.00
--------------------------------------
TOTAL PEMBELIAN                 8300000.00
======================================

======================================
    DAFTAR TANGGAL DISKON OTOMATIS
======================================
1. 17 Agustus -> Diskon 5% tambahan
======================================

INFO: Hari ini 17 Agustus 2023!
Anda akan mendapatkan diskon tambahan 5%

Pilih jenis diskon:
1. Otomatis (berdasarkan total pembelian)
2. Manual (input persentase)
Pilihan (1/2): 1

Diskon otomatis diterapkan: 7%

======================================
             RINCIAN DISKON
======================================
Total Pembelian                8300000.00
Diskon Otomatis                581000.00
Diskon 17 Agustus (5%)         415000.00
--------------------------------------
Total Diskon                  996000.00
TOTAL YANG HARUS DIBAYAR      7304000.00
======================================
```

### Contoh Penggunaan di Tanggal Biasa:

```
======================================
      PROGRAM KASIR DISKON
======================================
Masukkan jumlah barang yang dibeli: 2

Barang ke-1:
Nama barang: TV
Harga barang (Rp): 4500000

Barang ke-2:
Nama barang: Speaker
Harga barang (Rp): 1500000

======================================
          DAFTAR PEMBELIAN
======================================
No   Nama Barang              Harga (Rp)
--------------------------------------
1    TV                        4500000.00
2    Speaker                   1500000.00
--------------------------------------
TOTAL PEMBELIAN                 6000000.00
======================================

======================================
    DAFTAR TANGGAL DISKON OTOMATIS
======================================
1. 17 Agustus -> Diskon 5% tambahan
======================================

Pilih jenis diskon:
1. Otomatis (berdasarkan total pembelian)
2. Manual (input persentase)
Pilihan (1/2): 2

Masukkan persentase diskon (%): 10

======================================
             RINCIAN DISKON
======================================
Total Pembelian                6000000.00
Diskon Manual                  600000.00
--------------------------------------
Total Diskon                  600000.00
TOTAL YANG HARUS DIBAYAR      5400000.00
======================================
```

### Fitur Tambahan:

1. **Deteksi Tanggal Otomatis**:

   - Menggunakan library `<ctime>` untuk mendapatkan tanggal sistem
   - Otomatis mendeteksi apakah hari ini 17 Agustus

2. **Sistem Diskon Ganda**:

   - Diskon utama (otomatis/manual)
   - Diskon tambahan 5% khusus 17 Agustus
   - Total diskon adalah jumlah dari keduanya

3. **Informasi Diskon**:

   - Menampilkan daftar tanggal diskon otomatis
   - Memberi informasi jika diskon tambahan berlaku

4. **Validasi Lengkap**:

   - Validasi input barang
   - Validasi pilihan diskon
   - Validasi total diskon (tidak melebihi total pembelian)

5. **Tampilan Rinci**:
   - Menampilkan semua komponen diskon secara terpisah
   - Format mata uang yang jelas

</details>

### BATALKAN PROSES TRANSAKSI

tambahkan fitur untuk di lanjutkan atau di batalkan proses transaksi.

<details type="reasoning" done="true">
<summary>Mari berlogika dulu: </summary>

Kita akan menambahkan fitur untuk melanjutkan atau membatalkan transaksi setelah semua input dan perubahan data selesai.

Langkah-langkah:

1. Setelah proses perubahan data (jika ada) dan sebelum proses diskon, kita akan tanyakan kepada user apakah ingin melanjutkan transaksi atau membatalkan.
2. Jika user membatalkan, maka program akan berhenti dan menampilkan pesan pembatalan.
3. Jika melanjutkan, maka program akan melanjutkan ke proses diskon.

Kita juga bisa menambahkan konfirmasi sebelum menyelesaikan transaksi setelah diskon dihitung, tetapi sesuai permintaan, kita fokus pada setelah input data.

Perubahan:

- Setelah proses perubahan data (jika user tidak ingin mengubah lagi), kita akan tanyakan: "Apakah Anda ingin melanjutkan transaksi? (y/n): "
- Jika user memilih 'n' atau 'N', maka program akan berhenti dan menampilkan pesan pembatalan.
- Jika user memilih 'y' atau 'Y', maka program akan melanjutkan ke proses diskon.

Kita juga bisa menambahkan konfirmasi di akhir sebelum mencetak struk, tetapi permintaan hanya untuk lanjut/batal setelah input.

Mari kita implementasikan.

</details>

<details type="reasoning" done="true">
<summary>Hasil Implementasinya </summary>
Berikut adalah program C++ yang telah diperbarui dengan fitur konfirmasi untuk melanjutkan atau membatalkan transaksi:

```cpp
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <ctime> // Untuk mendapatkan tanggal sistem

using namespace std;

void tampilkanDaftarBarang(const vector<string>& namaBarang, const vector<double>& hargaBarang) {
    cout << left << setw(5) << "No" << setw(25) << "Nama Barang" << right << setw(15) << "Harga (Rp)" << endl;
    cout << "--------------------------------------" << endl;

    for (size_t i = 0; i < namaBarang.size(); ++i) {
        cout << left << setw(5) << i + 1
             << setw(25) << namaBarang[i]
             << right << setw(15) << fixed << setprecision(2) << hargaBarang[i] << endl;
    }
}

int main() {
    vector<string> namaBarang;
    vector<double> hargaBarang;
    int jumlahBarang;
    double totalHarga = 0, persentaseDiskon, jumlahDiskon, hargaSetelahDiskon;
    int pilihanDiskon;
    char ubahData, lanjutTransaksi;

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
    if (jumlahBarang <= 0) {
        cout << "\nError: Jumlah barang harus lebih dari 0!" << endl;
        return 1;
    }

    // Input detail barang
    cin.ignore(); // Membersihkan buffer input
    for (int i = 0; i < jumlahBarang; ++i) {
        string nama;
        double harga;

        cout << "\nBarang ke-" << i + 1 << ":" << endl;
        cout << "Nama barang: ";
        getline(cin, nama);

        cout << "Harga barang (Rp): ";
        cin >> harga;
        cin.ignore(); // Membersihkan buffer input

        // Validasi harga barang
        if (harga <= 0) {
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

    if (ubahData == 'y' || ubahData == 'Y') {
        int nomorBarang;
        bool lanjutUbah = true;

        while (lanjutUbah) {
            cout << "\nMasukkan nomor barang yang ingin diubah (1-" << jumlahBarang << "): ";
            cin >> nomorBarang;

            // Validasi nomor barang
            if (nomorBarang < 1 || nomorBarang > jumlahBarang) {
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
            if (hargaBaru <= 0) {
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
            if (ubahData != 'y' && ubahData != 'Y') {
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

    if (lanjutTransaksi != 'y' && lanjutTransaksi != 'Y') {
        cout << "\n======================================" << endl;
        cout << "        TRANSAKSI DIBATALKAN         " << endl;
        cout << "======================================" << endl;
        cout << "Terima kasih telah menggunakan program ini." << endl;
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
    if (isTanggalDiskon) {
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
    if (pilihanDiskon != 1 && pilihanDiskon != 2) {
        cout << "\nError: Pilihan tidak valid!" << endl;
        return 1;
    }

    double diskonUtama = 0; // Diskon dari pilihan (otomatis/manual)
    string jenisDiskon;

    if (pilihanDiskon == 1) {
        // Diskon otomatis berdasarkan total pembelian
        if (totalHarga >= 3000000) {
            persentaseDiskon = 7;
        } else if (totalHarga >= 2000000) {
            persentaseDiskon = 5;
        } else if (totalHarga >= 1000000) {
            persentaseDiskon = 3;
        } else {
            persentaseDiskon = 0;
        }

        diskonUtama = totalHarga * (persentaseDiskon / 100);
        jenisDiskon = "Otomatis";
        cout << "\nDiskon otomatis diterapkan: " << persentaseDiskon << "%" << endl;
    } else {
        // Diskon manual
        cout << "\nMasukkan persentase diskon (%): ";
        cin >> persentaseDiskon;

        // Validasi diskon manual
        if (persentaseDiskon < 0) {
            cout << "\nError: Diskon tidak boleh negatif!" << endl;
            return 1;
        }

        diskonUtama = totalHarga * (persentaseDiskon / 100);
        jenisDiskon = "Manual";
    }

    // Hitung diskon tambahan jika tanggal 17 Agustus
    double diskonTambahan = 0;
    if (isTanggalDiskon) {
        diskonTambahan = totalHarga * 0.05; // 5% dari total pembelian
    }

    // Total diskon
    jumlahDiskon = diskonUtama + diskonTambahan;

    // Validasi agar total diskon tidak melebihi total pembelian
    if (jumlahDiskon > totalHarga) {
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

    if (isTanggalDiskon) {
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

    if (lanjutTransaksi != 'y' && lanjutTransaksi != 'Y') {
        cout << "\n======================================" << endl;
        cout << "        TRANSAKSI DIBATALKAN         " << endl;
        cout << "======================================" << endl;
        cout << "Terima kasih telah menggunakan program ini." << endl;
        return 0;
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
```

### Fitur Baru: Konfirmasi Transaksi

Program sekarang memiliki dua titik konfirmasi untuk melanjutkan atau membatalkan transaksi:

1. **Konfirmasi Setelah Input Data**:

   - Setelah semua input dan perubahan data selesai
   - Program menampilkan total pembelian
   - Menanyakan: "Apakah Anda ingin melanjutkan transaksi? (y/n)"
   - Jika user memilih 'n'/'N', transaksi dibatalkan dan program berhenti

2. **Konfirmasi Akhir Sebelum Cetak Struk**:
   - Setelah semua perhitungan diskon selesai
   - Program menampilkan rincian diskon dan total pembayaran
   - Menanyakan: "Apakah Anda ingin menyelesaikan transaksi ini? (y/n)"
   - Jika user memilih 'n'/'N', transaksi dibatalkan dan program berhenti

### Contoh Penggunaan dengan Pembatalan Transaksi:

```
======================================
      PROGRAM KASIR DISKON
======================================
Masukkan jumlah barang yang dibeli: 2

Barang ke-1:
Nama barang: Buku
Harga barang (Rp): 50000

Barang ke-2:
Nama barang: Pensil
Harga barang (Rp): 15000

======================================
          DAFTAR PEMBELIAN
======================================
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Buku                         50000.00
2    Pensil                       15000.00
--------------------------------------
TOTAL PEMBELIAN                  65000.00
======================================

Apakah Anda ingin mengubah data barang? (y/n): n

======================================
        KONFIRMASI TRANSAKSI
======================================
Total pembelian: Rp 65000.00
Apakah Anda ingin melanjutkan transaksi? (y/n): n

======================================
        TRANSAKSI DIBATALKAN
======================================
Terima kasih telah menggunakan program ini.
```

### Contoh Penggunaan dengan Transaksi Berhasil:

```
======================================
      PROGRAM KASIR DISKON
======================================
Masukkan jumlah barang yang dibeli: 3

Barang ke-1:
Nama barang: Laptop
Harga barang (Rp): 7500000

Barang ke-2:
Nama barang: Mouse
Harga barang (Rp): 300000

Barang ke-3:
Nama barang: Keyboard
Harga barang (Rp): 500000

======================================
          DAFTAR PEMBELIAN
======================================
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Laptop                     7500000.00
2    Mouse                       300000.00
3    Keyboard                    500000.00
--------------------------------------
TOTAL PEMBELIAN                 8300000.00
======================================

Apakah Anda ingin mengubah data barang? (y/n): n

======================================
        KONFIRMASI TRANSAKSI
======================================
Total pembelian: Rp 8300000.00
Apakah Anda ingin melanjutkan transaksi? (y/n): y

======================================
    DAFTAR TANGGAL DISKON OTOMATIS
======================================
1. 17 Agustus -> Diskon 5% tambahan
======================================

Pilih jenis diskon:
1. Otomatis (berdasarkan total pembelian)
2. Manual (input persentase)
Pilihan (1/2): 1

Diskon otomatis diterapkan: 7%

======================================
             RINCIAN DISKON
======================================
Total Pembelian                8300000.00
Diskon Otomatis                581000.00
--------------------------------------
Total Diskon                  581000.00
TOTAL YANG HARUS DIBAYAR      7719000.00
======================================

Apakah Anda ingin menyelesaikan transaksi ini? (y/n): y

======================================
           STRUK PEMBAYARAN
======================================
Tanggal: 17/8/2023
--------------------------------------
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Laptop                     7500000.00
2    Mouse                       300000.00
3    Keyboard                    500000.00
--------------------------------------
TOTAL PEMBELIAN                8300000.00
TOTAL DISKON                   581000.00
--------------------------------------
TOTAL BAYAR                   7719000.00
======================================
Terima kasih atas pembelian Anda!
```

### Fitur Tambahan dalam Program:

1. **Dua Titik Konfirmasi**:

   - Konfirmasi awal setelah input data
   - Konfirmasi akhir sebelum cetak struk

2. **Struk Pembayaran**:

   - Menampilkan tanggal transaksi
   - Daftar barang yang dibeli
   - Total pembelian, diskon, dan jumlah bayar
   - Pesan penutup

3. **Penanganan Pembatalan**:

   - Pesan jelas ketika transaksi dibatalkan
   - Program berhenti dengan elegan

4. **Alur Transaksi yang Lengkap**:
   - Input → Ubah Data → Konfirmasi → Diskon → Konfirmasi Akhir → Cetak Struk

Program ini sekarang memiliki alur transaksi yang lengkap dengan kontrol penuh kepada user untuk melanjutkan atau membatalkan transaksi di setiap titik kritis.

</details>

### SIMPAN HASIL TRANSAKSI

Tambahkan fitur jika tidak di batalkan maka apakah data di simpan

<details type="reasoning" done="true">
<summary>Mari berlogika dulu: </summary>

Kita akan menambahkan fitur untuk menyimpan data transaksi jika tidak dibatalkan.
Kita bisa menggunakan file untuk menyimpan data. Data yang akan disimpan meliputi:

- Tanggal transaksi
- Daftar barang (nama dan harga)
- Total pembelian
- Diskon yang diberikan (jenis dan jumlah)
- Total yang harus dibayar

Kita akan menggunakan file teks (misal: transaksi.txt) untuk menyimpan setiap transaksi.

Langkah-langkah:

1. Setelah konfirmasi akhir (setelah user memilih 'y' untuk menyelesaikan transaksi), kita akan menyimpan data ke file.
2. Format penyimpanan bisa berupa:

```console
   Tanggal: dd/mm/yyyy
   Barang:

   1. NamaBarang1 Harga1
   2. NamaBarang2 Harga2
      ...
      Total Pembelian: total
      Diskon: jenisDiskon - jumlahDiskon
      Total Bayar: totalBayar
```

3. Kita juga bisa menambahkan opsi untuk menampilkan riwayat transaksi, tapi untuk sekarang kita fokus pada penyimpanan.

Namun, karena permintaan hanya "apakah data di simpan", kita bisa langsung menyimpan setelah transaksi selesai.

Tapi untuk lebih interaktif, kita bisa tanyakan dulu apakah user ingin menyimpan data transaksi.

Perubahan:

- Setelah konfirmasi akhir (sebelum cetak struk) kita tanyakan: "Apakah Anda ingin menyimpan data transaksi? (y/n)"
- Jika ya, maka simpan ke file, lalu cetak struk.
- Jika tidak, langsung cetak struk.

Kita akan menggunakan ofstream untuk menulis ke file.

Catatan: File akan disimpan di direktori yang sama dengan program, dengan nama "transaksi.txt".

Untuk menghindari penimpaan, kita bisa menambahkan timestamp di nama file, tapi untuk sederhana, kita gunakan append (menambahkan di akhir file).

Format file:

```console
  ====================== TRANSAKSI ======================
  Tanggal: 17/8/2023
  ------------------------------------------------------
  No  Nama Barang               Harga (Rp)
  ------------------------------------------------------
  1   Laptop                    7500000.00
  2   Mouse                      300000.00
  3   Keyboard                   500000.00
  ------------------------------------------------------
  Total Pembelian: 8300000.00
  Diskon: Otomatis - 581000.00
  Total Bayar: 7719000.00
  =====================================================
```

Kita akan menulis dalam format yang mirip dengan tampilan di console.

Implementasi:

- Tambahkan include `<fstream>`
- Setelah konfirmasi akhir (setelah user memilih 'y' untuk menyelesaikan transaksi), tanyakan apakah ingin menyimpan.
- Jika iya, buka file dengan mode append (`ios::app`) dan tulis data.

Mari kita tambahkan fitur ini.

</details>

<details type="reasoning" done="true">
<summary>Hasil Implementasi </summary>
Berikut adalah program C++ yang telah diperbarui dengan fitur penyimpanan data transaksi jika tidak dibatalkan:

```cpp
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <ctime> // Untuk mendapatkan tanggal sistem
#include <fstream> // Untuk menyimpan data ke file

using namespace std;

void tampilkanDaftarBarang(const vector<string>& namaBarang, const vector<double>& hargaBarang) {
    cout << left << setw(5) << "No" << setw(25) << "Nama Barang" << right << setw(15) << "Harga (Rp)" << endl;
    cout << "--------------------------------------" << endl;

    for (size_t i = 0; i < namaBarang.size(); ++i) {
        cout << left << setw(5) << i + 1
             << setw(25) << namaBarang[i]
             << right << setw(15) << fixed << setprecision(2) << hargaBarang[i] << endl;
    }
}

void simpanTransaksi(const vector<string>& namaBarang, const vector<double>& hargaBarang,
                    double totalHarga, double jumlahDiskon, double hargaSetelahDiskon,
                    string jenisDiskon, int hari, int bulan, int tahun) {
    ofstream file("riwayat_transaksi.txt", ios::app); // Membuka file dalam mode append

    if (!file.is_open()) {
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

    for (size_t i = 0; i < namaBarang.size(); ++i) {
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

int main() {
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
    if (jumlahBarang <= 0) {
        cout << "\nError: Jumlah barang harus lebih dari 0!" << endl;
        return 1;
    }

    // Input detail barang
    cin.ignore(); // Membersihkan buffer input
    for (int i = 0; i < jumlahBarang; ++i) {
        string nama;
        double harga;

        cout << "\nBarang ke-" << i + 1 << ":" << endl;
        cout << "Nama barang: ";
        getline(cin, nama);

        cout << "Harga barang (Rp): ";
        cin >> harga;
        cin.ignore(); // Membersihkan buffer input

        // Validasi harga barang
        if (harga <= 0) {
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

    if (ubahData == 'y' || ubahData == 'Y') {
        int nomorBarang;
        bool lanjutUbah = true;

        while (lanjutUbah) {
            cout << "\nMasukkan nomor barang yang ingin diubah (1-" << jumlahBarang << "): ";
            cin >> nomorBarang;

            // Validasi nomor barang
            if (nomorBarang < 1 || nomorBarang > jumlahBarang) {
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
            if (hargaBaru <= 0) {
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
            if (ubahData != 'y' && ubahData != 'Y') {
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

    if (lanjutTransaksi != 'y' && lanjutTransaksi != 'Y') {
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
    if (isTanggalDiskon) {
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
    if (pilihanDiskon != 1 && pilihanDiskon != 2) {
        cout << "\nError: Pilihan tidak valid!" << endl;
        return 1;
    }

    double diskonUtama = 0; // Diskon dari pilihan (otomatis/manual)
    string jenisDiskon;

    if (pilihanDiskon == 1) {
        // Diskon otomatis berdasarkan total pembelian
        if (totalHarga >= 3000000) {
            persentaseDiskon = 7;
        } else if (totalHarga >= 2000000) {
            persentaseDiskon = 5;
        } else if (totalHarga >= 1000000) {
            persentaseDiskon = 3;
        } else {
            persentaseDiskon = 0;
        }

        diskonUtama = totalHarga * (persentaseDiskon / 100);
        jenisDiskon = "Otomatis";
        cout << "\nDiskon otomatis diterapkan: " << persentaseDiskon << "%" << endl;
    } else {
        // Diskon manual
        cout << "\nMasukkan persentase diskon (%): ";
        cin >> persentaseDiskon;

        // Validasi diskon manual
        if (persentaseDiskon < 0) {
            cout << "\nError: Diskon tidak boleh negatif!" << endl;
            return 1;
        }

        diskonUtama = totalHarga * (persentaseDiskon / 100);
        jenisDiskon = "Manual";
    }

    // Hitung diskon tambahan jika tanggal 17 Agustus
    double diskonTambahan = 0;
    if (isTanggalDiskon) {
        diskonTambahan = totalHarga * 0.05; // 5% dari total pembelian
    }

    // Total diskon
    jumlahDiskon = diskonUtama + diskonTambahan;

    // Validasi agar total diskon tidak melebihi total pembelian
    if (jumlahDiskon > totalHarga) {
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

    if (isTanggalDiskon) {
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

    if (lanjutTransaksi != 'y' && lanjutTransaksi != 'Y') {
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

    if (simpanData == 'y' || simpanData == 'Y') {
        simpanTransaksi(namaBarang, hargaBarang, totalHarga, jumlahDiskon, hargaSetelahDiskon,
                       jenisDiskon, hari, bulan, tahun);
        cout << "\nData transaksi berhasil disimpan!" << endl;
    } else {
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
```

### Fitur Baru: Penyimpanan Data Transaksi

Program sekarang memiliki fitur untuk menyimpan data transaksi ke file jika transaksi tidak dibatalkan:

1. **Fungsi simpanTransaksi**:

   - Fungsi khusus untuk menyimpan data transaksi ke file
   - Menyimpan dalam format yang terstruktur dan mudah dibaca
   - File disimpan dengan nama "riwayat_transaksi.txt"

2. **Proses Penyimpanan**:

   - Setelah konfirmasi akhir transaksi, program menanyakan: "Apakah Anda ingin menyimpan data transaksi ini? (y/n)"
   - Jika user memilih 'y'/'Y', data transaksi disimpan ke file
   - Jika user memilih 'n'/'N', data tidak disimpan

3. **Data yang Disimpan**:

   - Tanggal transaksi
   - Daftar barang yang dibeli (nama dan harga)
   - Total pembelian
   - Jenis dan jumlah diskon
   - Total yang harus dibayar

4. **Format File**:
   - Format yang sama dengan tampilan di console
   - Setiap transaksi dipisahkan dengan garis pembatas
   - Mudah dibaca dan dianalisis

### Contoh Isi File "riwayat_transaksi.txt":

```
======================================
           DATA TRANSAKSI
======================================
Tanggal: 17/8/2023
--------------------------------------
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Laptop                     7500000.00
2    Mouse                       300000.00
3    Keyboard                    500000.00
--------------------------------------
TOTAL PEMBELIAN                8300000.00
DISKON (Otomatis)               581000.00
--------------------------------------
TOTAL BAYAR                   7719000.00
======================================

======================================
           DATA TRANSAKSI
======================================
Tanggal: 18/8/2023
--------------------------------------
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Buku                         50000.00
2    Pensil                       15000.00
--------------------------------------
TOTAL PEMBELIAN                  65000.00
DISKON (Manual)                  6500.00
--------------------------------------
TOTAL BAYAR                    58500.00
======================================
```

### Contoh Penggunaan dengan Penyimpanan Data:

```
======================================
      PROGRAM KASIR DISKON
======================================
Masukkan jumlah barang yang dibeli: 2

Barang ke-1:
Nama barang: Buku
Harga barang (Rp): 50000

Barang ke-2:
Nama barang: Pensil
Harga barang (Rp): 15000

======================================
          DAFTAR PEMBELIAN
======================================
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Buku                         50000.00
2    Pensil                       15000.00
--------------------------------------
TOTAL PEMBELIAN                  65000.00
======================================

Apakah Anda ingin mengubah data barang? (y/n): n

======================================
        KONFIRMASI TRANSAKSI
======================================
Total pembelian: Rp 65000.00
Apakah Anda ingin melanjutkan transaksi? (y/n): y

======================================
    DAFTAR TANGGAL DISKON OTOMATIS
======================================
1. 17 Agustus -> Diskon 5% tambahan
======================================

Pilih jenis diskon:
1. Otomatis (berdasarkan total pembelian)
2. Manual (input persentase)
Pilihan (1/2): 2

Masukkan persentase diskon (%): 10

======================================
             RINCIAN DISKON
======================================
Total Pembelian                  65000.00
Diskon Manual                     6500.00
--------------------------------------
Total Diskon                     6500.00
TOTAL YANG HARUS DIBAYAR         58500.00
======================================

Apakah Anda ingin menyelesaikan transaksi ini? (y/n): y

Apakah Anda ingin menyimpan data transaksi ini? (y/n): y

Data transaksi berhasil disimpan!

======================================
           STRUK PEMBAYARAN
======================================
Tanggal: 18/8/2023
--------------------------------------
No   Nama Barang              Harga (Rp)
--------------------------------------
1    Buku                         50000.00
2    Pensil                       15000.00
--------------------------------------
TOTAL PEMBELIAN                  65000.00
TOTAL DISKON                     6500.00
--------------------------------------
TOTAL BAYAR                     58500.00
======================================
Terima kasih atas pembelian Anda!
```

### Fitur Tambahan dalam Program:

1. **Penyimpanan Data Transaksi**:

   - Menggunakan library `<fstream>` untuk operasi file
   - Mode append (ios::app) untuk menambah data tanpa menghapus data sebelumnya
   - Validasi pembukaan file

2. **Konfirmasi Penyimpanan**:

   - User memiliki kontrol penuh apakah data akan disimpan atau tidak
   - Pesan jelas tentang status penyimpanan

3. **Format File yang Konsisten**:

   - Format yang sama dengan tampilan di console
   - Mudah untuk dibaca kembali atau diimpor ke sistem lain

4. **Informasi Lengkap**:
   - Semua detail transaksi tersimpan
   - Termasuk tanggal transaksi untuk keperluan pelacakan

Program ini sekarang memiliki fitur lengkap untuk manajemen transaksi, mulai dari input barang, perubahan data, perhitungan diskon, konfirmasi transaksi, hingga penyimpanan data transaksi untuk keperluan rekam jejak.

</details>
