# P05 Perulangan: for, while, do-while

Folder kode Pertemuan 5 Pemrograman Terstruktur. Setiap program punya flowchart pasangannya
di modul (Gambar 1 sampai 5); perhatikan panah yang kembali ke atas, itulah perulangan.

## Isi

| Berkas                   | Kegunaan                                                                                  |
| ------------------------ | ----------------------------------------------------------------------------------------- |
| `for_hitung.cpp`         | for dengan jumlah putaran yang diketahui; coba ubah `<=` menjadi `<`                      |
| `for_jumlah.cpp`         | Pola akumulator: total dan rata-rata dari n nilai; coba masukkan 0                        |
| `while_sentinel.cpp`     | while dengan angka negatif sebagai tanda berhenti; jumlah putaran tidak diketahui         |
| `do_while_menu.cpp`      | do-while untuk menu yang diulang sampai pengguna memilih keluar; switch dari Pertemuan 4  |
| `sinilai_v04_awal.cpp`   | Starter SiNilai v0.4: badan v0.3 sudah ada, lengkapi do-while, for, akumulator, dan rekap |
| `contoh_masukan.txt`     | Tiga mahasiswa untuk menguji v0.4                                                         |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya                                                          |

## Kasus uji SiNilai v0.4 (`./sinilai_v04 < contoh_masukan.txt`)

| Mahasiswa    | Komponen          | Nilai akhir | Huruf | Status      |
| ------------ | ----------------- | ----------- | ----- | ----------- |
| Siti Aminah  | 100, 85.5, 78, 80 | 83.975      | A     | Lulus       |
| Budi Santoso | 80, 70, 65, 60    | 67.75       | C+    | Lulus       |
| Rina Wati    | 60, 50, 40, 55    | 49.5        | D     | Belum lulus |

Rekap kelas: 3 mahasiswa, 2 lulus, 1 belum lulus, rata-rata kelas 67.075.
Jumlah mahasiswa 0 atau negatif harus ditanya ulang (do-while).

## Kalau program berputar tanpa henti

Tekan `Ctrl+C` di terminal. Penyebab yang paling sering: lupa langkah (`i++`), syarat yang tidak
pernah salah, atau mengetik huruf saat program meminta angka (`cin` gagal dan nilai variabelnya
menjadi 0; obatnya dibahas di Pertemuan 7).

## Yang dikumpulkan mahasiswa

Folder `p05` di repository `pt-NPM` berisi `sinilai_v04.cpp`. Lihat Modul Pertemuan 5 bagian E.

## Deklarasi AI

AI yang digunakan: GitHub Copilot.

Prompt:

```text
Cek program C++ SiNilai v0.4 ini. Apakah logika program sudah benar dan sudah sesuai dengan TODO 1 sampai 5? Jika ada yang belum sesuai, jelaskan bagian yang salah dan beri saran perbaikannya.
```

Response:

```text
Program sudah benar dan sudah sesuai dengan TODO 1 sampai 5.

- TODO 1: do-while digunakan untuk memastikan jumlah mahasiswa minimal 1.
- TODO 2: variabel total_nilai dan jumlah_lulus dideklarasikan sebelum loop, sehingga hasil rekap kelas dapat dihitung dengan benar.
- TODO 3: perulangan for untuk setiap mahasiswa sudah dibuat dengan indeks i dari 1 sampai jumlah_mahasiswa.
- TODO 4: nilai_akhir ditambahkan ke total_nilai dan jumlah_lulus bertambah saat mahasiswa lulus.
- TODO 5: rekap kelas ditampilkan dengan jumlah mahasiswa, jumlah lulus, jumlah belum lulus, dan rata-rata kelas.

Kesimpulan: tidak ada kesalahan logika yang perlu diperbaiki. Kode sudah sesuai dengan tugas.
```
