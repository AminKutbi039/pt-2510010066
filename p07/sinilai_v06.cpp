// SiNilai v0.6: laporan kelas dengan validasi masukan dan perapian nama.
#include <cctype>
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
    cout << "=== SiNilai v0.6 ===\n";
    cout << "Jumlah mahasiswa (paling sedikit 1): ";
    cin >> jumlah_mahasiswa;

    while (cin.fail() || jumlah_mahasiswa < 1) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Peringatan: masukan harus berupa angka bulat. ";
        } else {
            cin.ignore(1000, '\n');
            cout << "Peringatan: jumlah mahasiswa minimal 1. ";
        }
        cout << "Masukkan kembali: ";
        cin >> jumlah_mahasiswa;
    }
    cin.ignore(1000, '\n');

    cout << fixed << setprecision(2);

    double total_nilai = 0;
    int jumlah_lulus = 0;
    int jumlah_a = 0;
    int jumlah_b = 0;
    int jumlah_c = 0;
    int jumlah_d = 0;
    int jumlah_e = 0;
    double nilai_tertinggi = -1;
    string nama_tertinggi;

    for (int nomor_mahasiswa = 1; nomor_mahasiswa <= jumlah_mahasiswa; nomor_mahasiswa++) {
        string nama;
        string npm;
        double kehadiran = 0;
        double mingguan = 0;
        double uts = 0;
        double uas = 0;

        cout << "\n--- Mahasiswa ke-" << nomor_mahasiswa
             << " dari " << jumlah_mahasiswa << " ---\n";

        bool nama_valid = false;
        do {
            cout << "Nama      : ";
            getline(cin, nama);

            bool ada_huruf = false;
            bool ada_angka = false;
            bool ada_karakter_bukan_spasi = false;

            for (int posisi = 0; posisi < static_cast<int>(nama.length()); posisi++) {
                unsigned char karakter = static_cast<unsigned char>(nama[posisi]);
                if (isalpha(karakter)) {
                    ada_huruf = true;
                }
                if (isdigit(karakter)) {
                    ada_angka = true;
                }
                if (!isspace(karakter)) {
                    ada_karakter_bukan_spasi = true;
                }
            }

            if (!ada_karakter_bukan_spasi || !ada_huruf) {
                cout << "Peringatan: nama tidak boleh kosong atau hanya spasi.\n";
            } else if (ada_angka) {
                cout << "Peringatan: nama tidak boleh mengandung angka.\n";
            } else {
                nama_valid = true;
            }
        } while (!nama_valid);

        // Rapikan spasi dan ubah huruf menjadi format awal kata kapital.
        string nama_rapi;
        bool awal_kata = true;
        for (int posisi = 0; posisi < static_cast<int>(nama.length()); posisi++) {
            unsigned char karakter = static_cast<unsigned char>(nama[posisi]);

            if (isspace(karakter)) {
                if (!nama_rapi.empty() && nama_rapi.back() != ' ') {
                    nama_rapi += ' ';
                }
                awal_kata = true;
            } else {
                if (awal_kata) {
                    nama_rapi += static_cast<char>(toupper(karakter));
                } else {
                    nama_rapi += static_cast<char>(tolower(karakter));
                }
                awal_kata = false;
            }
        }

        // Hapus spasi di ujung nama (jika ada).
        while (!nama_rapi.empty() && nama_rapi.back() == ' ') {
            nama_rapi.pop_back();
        }
        nama = nama_rapi;

        cout << "NPM       : ";
        getline(cin, npm);

        cout << "Kehadiran (0-100): ";
        cin >> kehadiran;
        while (cin.fail() || kehadiran < 0 || kehadiran > 100) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Peringatan: kehadiran harus berupa angka. ";
            } else {
                cin.ignore(1000, '\n');
                cout << "Peringatan: kehadiran harus berada pada 0 sampai 100. ";
            }
            cout << "Masukkan kembali kehadiran: ";
            cin >> kehadiran;
        }

        cout << "Mingguan (0-100): ";
        cin >> mingguan;
        while (cin.fail() || mingguan < 0 || mingguan > 100) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Peringatan: nilai mingguan harus berupa angka. ";
            } else {
                cin.ignore(1000, '\n');
                cout << "Peringatan: nilai mingguan harus berada pada 0 sampai 100. ";
            }
            cout << "Masukkan kembali nilai mingguan: ";
            cin >> mingguan;
        }

        cout << "UTS (0-100): ";
        cin >> uts;
        while (cin.fail() || uts < 0 || uts > 100) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Peringatan: nilai UTS harus berupa angka. ";
            } else {
                cin.ignore(1000, '\n');
                cout << "Peringatan: nilai UTS harus berada pada 0 sampai 100. ";
            }
            cout << "Masukkan kembali nilai UTS: ";
            cin >> uts;
        }

        cout << "UAS (0-100): ";
        cin >> uas;
        while (cin.fail() || uas < 0 || uas > 100) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Peringatan: nilai UAS harus berupa angka. ";
            } else {
                cin.ignore(1000, '\n');
                cout << "Peringatan: nilai UAS harus berada pada 0 sampai 100. ";
            }
            cout << "Masukkan kembali nilai UAS: ";
            cin >> uas;
        }
        cin.ignore(1000, '\n');

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
        cout << "  " << left << setw(20) << nama << right << setw(7) << nilai_akhir
             << "  " << left << setw(3) << huruf_mutu
             << (lulus ? "Lulus\n" : "Belum lulus\n");

        total_nilai += nilai_akhir;
        if (lulus) {
            jumlah_lulus++;
        }

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
    cout << "Tertinggi        : " << nama_tertinggi << " (" << nilai_tertinggi << ")\n";

    cout << "\nSebaran huruf mutu:\n";
    for (char huruf = 'A'; huruf <= 'E'; huruf++) {
        int jumlah_huruf = 0;
        if (huruf == 'A') {
            jumlah_huruf = jumlah_a;
        } else if (huruf == 'B') {
            jumlah_huruf = jumlah_b;
        } else if (huruf == 'C') {
            jumlah_huruf = jumlah_c;
        } else if (huruf == 'D') {
            jumlah_huruf = jumlah_d;
        } else {
            jumlah_huruf = jumlah_e;
        }

        cout << huruf << " | ";
        for (int indeks = 0; indeks < jumlah_huruf; indeks++) {
            cout << "#";
        }
        cout << " " << jumlah_huruf << "\n";
    }

    return 0;
}
