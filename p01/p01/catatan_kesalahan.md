# Catatan Kesalahan Praktikum 5

## Tabel Hasil Praktikum 5

| No | File | Kategori Kesalahan | Pesan/Error | Penyebab | Perbaikan |
|---|---|---|---|---|---|
| 1 | `k1_sintaks.cpp` | Kesalahan Sintaks | `uexpected ‘,’ or ‘;’ before ‘std’`, `unused variable ‘nilai’` | Variabel `nilai` telah dibuat tetapi belum dipakai. Selain itu, penulisan `nilai = 80` belum diakhiri dengan tanda `;`. | Pakai variabel tersebut dalam proses program atau hapus jika tidak dibutuhkan. Kemudian tambahkan `;` pada deklarasi `int nilai = 80`. |
| 2 | `k2_nama.cpp` | Kesalahan Nama Variabel | `Nilai’ was not declared in this scope; did you mean ‘nilai’`, `‘bonus’ was not declared in this scope` | Terdapat ketidaksesuaian penulisan nama variabel. Program menggunakan `Nilai`, sedangkan variabel yang dibuat adalah `nilai`. Variabel `bonus` juga belum dibuat. | Samakan penulisan `Nilai` menjadi `nilai`, lalu buat deklarasi untuk variabel `bonus` sebelum digunakan. |
| 3 | `k3_runtime.cpp` | Kesalahan Logika | Program menghasilkan pembagian dengan angka 0 saat jumlah mahasiswa yang dimasukkan bernilai 0. | Program belum menangani kondisi ketika `jumlah_mahasiswa` sama dengan 0 sebelum operasi pembagian dilakukan. | Tambahkan pengecekan `jumlah_mahasiswa == 0` terlebih dahulu agar pembagian dengan nol tidak terjadi. |
| 4 | `k4_logika.cpp` | Kesalahan Logika | Hasil program menjadi `81`, sedangkan nilai yang diharapkan adalah `81.67` karena hasil dibagi `3`. | Pembagian menggunakan bilangan bulat sehingga bagian desimal tidak ditampilkan. | Gunakan `3.0` sebagai pembagi agar proses menghasilkan nilai pecahan, yaitu `81.67`. |

## Kesimpulan

Berdasarkan hasil praktikum, kesalahan pada logika program perlu diperhatikan dengan baik karena program masih dapat berjalan meskipun hasil yang diperoleh tidak sesuai. Karena itu, pemeriksaan tidak cukup hanya pada proses kompilasi dan eksekusi. Perhitungan, kondisi, serta alur logika program juga perlu diuji menggunakan beberapa kondisi agar hasil akhirnya dapat dipastikan benar.
