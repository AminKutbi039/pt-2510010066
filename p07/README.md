# P07 — String dan Validasi

**Mata Kuliah:** Pemrograman Terstruktur  
**Materi:** `std::string` dan validasi masukan

## Deskripsi

Pertemuan ini membahas pengolahan string dan validasi input pada program C++. Program SiNilai v0.6 dikembangkan dari SiNilai v0.5 dengan penambahan validasi nama, perapian format nama, serta pemeriksaan input numerik agar masukan yang tidak sesuai ditolak dan diminta kembali.

## Daftar Berkas

| Berkas | Keterangan |
|---|---|
| `gabung_banding.cpp` | Contoh penggabungan dan perbandingan string, `.length()`, serta akses karakter. |
| `huruf_per_huruf.cpp` | Contoh pengolahan string menggunakan perulangan karakter. |
| `rapikan_nama.cpp` | Contoh mengubah nama menjadi huruf kapital di awal setiap kata. |
| `getline_campur.cpp` | Contoh penggunaan `getline()` bersama `cin >>`. |
| `input_aman.cpp` | Contoh validasi input angka menggunakan `cin.fail()`, `cin.clear()`, dan `cin.ignore()`. |
| `validasi_nama.cpp` | Contoh validasi nama agar tidak kosong, tidak hanya spasi, dan tidak mengandung angka. |
| `sinilai_v06.cpp` | Program SiNilai v0.6 yang telah dilengkapi validasi input dan perapian nama. |
| `contoh_masukan.txt` | Data uji berisi input valid dan beberapa input jebakan untuk menguji validasi. |
| `.vscode/` | Konfigurasi VS Code untuk kompilasi dan debugging. |

## SiNilai v0.6

Nilai akhir dihitung menggunakan bobot berikut:

| Komponen | Bobot |
|---|---:|
| Kehadiran | 10% |
| Mingguan | 45% |
| UTS | 25% |
| UAS | 20% |
| **Total** | **100%** |

Rumus:

`Nilai Akhir = (Kehadiran × 0.10) + (Mingguan × 0.45) + (UTS × 0.25) + (UAS × 0.20)`

Huruf mutu: A (>=80), B+ (>=75), B (>=70), C+ (>=65), C (>=60), D (>=40), dan E (<40). Mahasiswa lulus apabila nilai akhir minimal 60. Sebaran B mencakup B+, dan sebaran C mencakup C+.

### Validasi Masukan

Program melakukan pemeriksaan berikut:
- Jumlah mahasiswa harus berupa bilangan bulat minimal 1.
- Nama tidak boleh kosong atau hanya berisi spasi.
- Nama tidak boleh mengandung angka.
- Nama dirapikan menjadi huruf kapital pada awal setiap kata dan huruf kecil pada karakter lainnya.
- Kehadiran, nilai mingguan, UTS, dan UAS harus berupa angka dalam rentang 0–100.
- Jika masukan tidak valid, program menampilkan pesan peringatan dan meminta masukan kembali.

## Cara Kompilasi dan Menjalankan

Pastikan compiler `g++` tersedia. Buka terminal di folder proyek.

### Linux

```bash
g++ -std=c++17 -Wall -Wextra sinilai_v06.cpp -o sinilai_v06
./sinilai_v06 < contoh_masukan.txt
```

### Windows (MinGW)

```powershell
g++ -std=c++17 -Wall -Wextra sinilai_v06.cpp -o sinilai_v06.exe
.\sinilai_v06.exe < contoh_masukan.txt
```

Untuk memasukkan data secara langsung, jalankan executable tanpa `< contoh_masukan.txt`.

## Hasil Pengujian

Program diuji menggunakan `contoh_masukan.txt`. Masukan jebakan yang ditolak termasuk nama kosong, nama berisi angka (`r2d2`), nilai nonangka (`abc`), dan nilai di luar rentang (`120`). Program kemudian menerima masukan ulang yang valid.

Laporan hasil uji dibandingkan dengan SiNilai v0.5:

| Mahasiswa | Nilai Akhir | Huruf | Status |
|---|---:|---|---|
| Siti Aminah | 83.97 | A | Lulus |
| Budi Santoso | 67.75 | C+ | Lulus |
| Rina Wati | 49.50 | D | Belum lulus |
| Dewi Lestari | 90.00 | A | Lulus |
| Eko Prasetyo | 71.00 | B | Lulus |
| Fajar Nugroho | 25.75 | E | Belum lulus |

Ringkasan: 6 mahasiswa, 4 lulus, 2 belum lulus, rata-rata kelas 64.66, nilai tertinggi Dewi Lestari (90.00). Hasil laporan tersebut sama dengan versi v0.5.

Program juga dikompilasi dengan opsi `-Wall -Wextra -Werror` dan tidak menghasilkan error maupun warning.

## Pengumpulan

Repository proyek menggunakan folder `p07` pada repository `pt-NPM`. Berkas yang dikumpulkan sesuai instruksi tugas:
- `p07/sinilai_v06.cpp`
- `README.md` yang berisi deklarasi penggunaan AI

## Deklarasi AI — Label AI 1

**Alat:** ChatGPT (OpenAI)  
**Digunakan untuk:** Membantu meninjau dan melengkapi validasi masukan, perapian nama, penanganan input yang salah, serta penyusunan penjelasan README.

**Prompt yang digunakan:** “Perbaiki program SiNilai v0.6 agar input jebakan ditolak dengan pesan peringatan, nama divalidasi dan dirapikan, dan hasil laporan sama dengan v0.5. Perbaiki juga README.md sesuai instruksi tugas.”

**Cara memeriksa hasil:** Program dikompilasi menggunakan `g++ -std=c++17 -Wall -Wextra -Werror`, lalu dijalankan dengan `contoh_masukan.txt`. Output laporan diperiksa dan dibandingkan dengan hasil SiNilai v0.5, termasuk jumlah lulus, rata-rata kelas, nilai tertinggi, dan sebaran huruf mutu. Masukan invalid juga dicoba untuk memastikan program meminta input ulang.

AI digunakan sebagai alat bantu. Hasil akhir ditinjau dan diuji kembali sebelum dikumpulkan.
