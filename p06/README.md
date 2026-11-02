# P06 Perulangan Lanjutan
**Pemrograman Terstruktur — Pertemuan 6**

Folder ini berisi contoh program materi perulangan lanjutan: perulangan bersarang, `break`, `continue`, debugger, dan pengaturan keluaran menggunakan `iomanip`.

## Daftar berkas

| Berkas | Kegunaan |
|---|---|
| `bersarang_tabel.cpp` | Perulangan `for` di dalam `for` untuk membuat tabel perkalian dengan kolom rapi (`setw`). |
| `break_tebak.cpp` | Menggunakan `break` untuk menghentikan permainan ketika tebakan benar (maksimal 5 kesempatan). |
| `continue_remediasi.cpp` | Menggunakan `continue` untuk melewati mahasiswa yang tidak perlu remediasi. |
| `rapi_iomanip.cpp` | Contoh `fixed`, `setprecision`, `setw`, `left`, dan `right`. |
| `debug_rerata.cpp` | Program dengan kesalahan logika untuk latihan menemukan kesalahan memakai debugger. |
| `masukan_debug.txt` | Data masukan untuk `debug_rerata.cpp` (3 nilai: 80, 70, 90). |
| `sinilai_v05_awal.cpp` | SiNilai v0.5 lengkap; TODO 1–9 sudah dilengkapi. |
| `contoh_masukan.txt` | Data uji untuk SiNilai v0.5 (6 mahasiswa). |

## SiNilai v0.5

Program menghitung nilai akhir dengan bobot:
- Kehadiran: 10%
- Nilai mingguan: 45%
- UTS: 25%
- UAS: 20%

Huruf mutu: A (>=80), B+ (>=75), B (>=70), C+ (>=65), C (>=60), D (>=40), dan E (<40). Status lulus diberikan jika nilai akhir minimal 60. B+ dimasukkan ke sebaran B, sedangkan C+ dimasukkan ke sebaran C.

Program menampilkan:
1. Baris hasil mahasiswa dalam kolom rapi.
2. Jumlah lulus dan belum lulus.
3. Rata-rata kelas.
4. Nama dan nilai mahasiswa dengan nilai tertinggi.
5. Sebaran huruf mutu berbentuk batang `#` menggunakan perulangan bersarang.

### Kompilasi dan menjalankan

Dari terminal pada folder ini:

```bash
g++ -std=c++17 -Wall -Wextra sinilai_v05_awal.cpp -o sinilai_v05
./sinilai_v05 < contoh_masukan.txt
```

Di Windows (MinGW g++) jalankan:

```powershell
g++ -std=c++17 -Wall -Wextra sinilai_v05_awal.cpp -o sinilai_v05.exe
.\sinilai_v05.exe < contoh_masukan.txt
```

### Hasil uji yang diharapkan

Dengan `contoh_masukan.txt`:
- Jumlah mahasiswa: 6
- Lulus: 4
- Belum lulus: 2
- Rata-rata kelas: 64.66
- Nilai tertinggi: Dewi Lestari (90.00)
- Sebaran huruf: A = 2, B = 1, C = 1, D = 1, E = 1

Catatan: angka pecahan ditampilkan dengan dua angka di belakang koma. Nilai 83.975 bisa ditampilkan 83.97 karena representasi floating-point komputer.

## Debugger VS Code

Konfigurasi `.vscode/launch.json` menggunakan GDB MSYS2 di `C:/msys64/ucrt64/bin/gdb.exe`. Buka berkas `.cpp`, lalu tekan `F5`.
- Pada Linux: sesuaikan `miDebuggerPath` ke `/usr/bin/gdb` dan nama executable tanpa `.exe`.
- Pada macOS: gunakan LLDB dan sesuaikan konfigurasi debugger.

Untuk latihan `debug_rerata.cpp`, masukan disediakan melalui `masukan_debug.txt`.

## Yang dikumpulkan

Ikuti instruksi modul Pertemuan 6. Pastikan program SiNilai telah dikompilasi dan diuji dengan `contoh_masukan.txt`.

## Deklarasi penggunaan AI

Jika menggunakan AI untuk membantu pengerjaan, cantumkan nama AI, prompt yang digunakan, serta bagian masukan/umpan balik yang diterapkan sesuai ketentuan dosen.
