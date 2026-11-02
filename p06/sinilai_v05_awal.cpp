// SiNilai v0.5: laporan kelas
// Materi: iomanip, switch, nilai tertinggi, dan perulangan bersarang.
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS = 0.25;
    const double BOBOT_UAS = 0.20;

    int jumlah_mahasiswa = 0;
    cout << "=== SiNilai v0.5 ===\n";
    do {
        cout << "Jumlah mahasiswa (paling sedikit 1): ";
        cin >> jumlah_mahasiswa;
    } while (jumlah_mahasiswa < 1);

    // TODO 1: mengatur angka pecahan menjadi dua angka di belakang koma.
    cout << fixed << setprecision(2);

    double total_nilai = 0;
    int jumlah_lulus = 0;

    // TODO 2: penghitung huruf mutu, dimulai dari 0.
    int jumlah_a = 0;
    int jumlah_b = 0;
    int jumlah_c = 0;
    int jumlah_d = 0;
    int jumlah_e = 0;

    // TODO 3: menyimpan nilai dan nama mahasiswa dengan nilai tertinggi.
    double nilai_tertinggi = -1;
    string nama_tertinggi;

    for (int i = 1; i <= jumlah_mahasiswa; i++) {
        string nama, npm;
        double kehadiran = 0, mingguan = 0, uts = 0, uas = 0;

        cout << "\n--- Mahasiswa ke-" << i << " dari " << jumlah_mahasiswa << " ---\n";
        cout << "Nama      : ";
        getline(cin >> ws, nama);
        cout << "NPM       : ";
        cin >> npm;
        cout << "Kehadiran : ";
        cin >> kehadiran;
        cout << "Mingguan  : ";
        cin >> mingguan;
        cout << "UTS       : ";
        cin >> uts;
        cout << "UAS       : ";
        cin >> uas;

        double nilai_akhir = kehadiran * BOBOT_KEHADIRAN
                           + mingguan * BOBOT_MINGGUAN
                           + uts * BOBOT_UTS
                           + uas * BOBOT_UAS;

        string huruf_mutu;
        if (nilai_akhir >= 80) {
            huruf_mutu = "A";
        } else if (nilai_akhir >= 75) {
            huruf_mutu = "B+";
        } else if (nilai_akhir >= 70) {
            huruf_mutu = "B";
        } else if (nilai_akhir >= 65) {
            huruf_mutu = "C+";
        } else if (nilai_akhir >= 60) {
            huruf_mutu = "C";
        } else if (nilai_akhir >= 40) {
            huruf_mutu = "D";
        } else {
            huruf_mutu = "E";
        }

        bool lulus = nilai_akhir >= 60;

        // TODO 4: cetak data mahasiswa dalam satu baris berkolom.
        cout << "  " << left << setw(20) << nama
             << right << setw(7) << nilai_akhir
             << "  " << left << setw(3) << huruf_mutu
             << (lulus ? "Lulus" : "Belum lulus") << "\n";

        total_nilai += nilai_akhir;
        if (lulus) {
            jumlah_lulus++;
        }

        // TODO 5: tambah penghitung huruf mutu. B+ dihitung B, C+ dihitung C.
        switch (huruf_mutu[0]) {
            case 'A':
                jumlah_a++;
                break;
            case 'B':
                jumlah_b++;
                break;
            case 'C':
                jumlah_c++;
                break;
            case 'D':
                jumlah_d++;
                break;
            default:
                jumlah_e++;
                break;
        }

        // TODO 6: simpan nama dan nilai jika nilai sekarang lebih tinggi.
        if (nilai_akhir > nilai_tertinggi) {
            nilai_tertinggi = nilai_akhir;
            nama_tertinggi = nama;
        }
    }

    cout << "\n=== Laporan Kelas ===\n";
    cout << "Jumlah mahasiswa : " << jumlah_mahasiswa << "\n";
    cout << "Lulus            : " << jumlah_lulus << "\n";
    cout << "Belum lulus      : " << jumlah_mahasiswa - jumlah_lulus << "\n";
    cout << "Rata-rata kelas  : " << total_nilai / jumlah_mahasiswa << "\n";

    // TODO 7: tampilkan mahasiswa dengan nilai tertinggi.
    cout << "Tertinggi        : " << nama_tertinggi
         << " (" << nilai_tertinggi << ")\n";

    cout << "\nSebaran huruf mutu:\n";
    for (char huruf = 'A'; huruf <= 'E'; huruf++) {
        int banyak = 0;

        // TODO 8: ambil jumlah berdasarkan huruf yang sedang diproses.
        if (huruf == 'A') {
            banyak = jumlah_a;
        } else if (huruf == 'B') {
            banyak = jumlah_b;
        } else if (huruf == 'C') {
            banyak = jumlah_c;
        } else if (huruf == 'D') {
            banyak = jumlah_d;
        } else {
            banyak = jumlah_e;
        }

        cout << huruf << " | ";

        // TODO 9: perulangan bersarang untuk mencetak batang #.
        for (int j = 0; j < banyak; j++) {
            cout << "#";
        }
        cout << " " << banyak << "\n";
    }

    return 0;
}
