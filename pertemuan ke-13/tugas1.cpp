#include <iostream>
using namespace std;

int main()
{
    string nama, jurusan, skema, hasil;
    int semester, pilihan, j1, j2, j3, nim, nilai;
    cout << "Masukan Nama ";
    cin >> nama;
    cout << "Masukan Nim ";
    cin >> nim;
    cout << "Masukan Jurusan ";
    cin >> jurusan;
    cout << "1. Pemrograman" << endl;
    cout << "2. Desain Poster" << endl;
    cout << "Pilih Lomba yang mau kamu ikuti ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "Semester berapa kamu sekarang ";
        cin >> semester;
        if (semester > 4)
        {
            skema = "Mengerjakan Poster Bertema Webinar/seminar";
        }
        else
        {
            skema = "Mengerjakan Poster Tentang Masyarakat";
        }
        break;
    case 2:
        cout << "Semester berapa kamu sekarang ";
        cin >> semester;
        if (semester < 4)
        {
            skema = "Lomba Pemrograman Dasar";
        }
        else
        {
            skema = "Lomba Pemrograman Lanjutan";
        }
    default:
        cout << "Lomba tidak valid";
        break;
    }
    cout << "Nilai Juri 1 ";
    cin >> j1;
    cout << "Nilai Juri 2 ";
    cin >> j2;
    cout << "Nilai Juri 3 ";
    cin >> j3;

    // if (j1 > 100)
    // {
    //     j1 = 100;
    // }
    // else
    // {
    //     j1 = j1;
    // }
    // if (j2 > 100)
    // {
    //     j2 = 100;
    // }
    // else
    // {
    //     j2 = j2;
    // }
    // if (j3 > 100)
    // {
    //     j3 = 100;
    // }
    // else
    // {
    //     j3 = j3;
    // }
    nilai = j1 + j2 + j3;
    nilai = nilai / 3;
    if (nilai > 100)
    {
        nilai = 100;
    }
    else
    {
        nilai = nilai;
    }

    if (nilai > 80)
    {
        hasil = "Masuk Semifinal";
    }
    else if (nilai > 60)
    {
        hasil = "Juara Harapan";
    }
    else
    {
        hasil = "Kamu gugur";
    }
    cout << "\n==========================" << endl;
    cout << nama << endl;
    cout << jurusan << endl;
    cout << skema << endl;
    cout << "==========================" << endl;
    cout << "Nilai Juri ke-1 " << j1 << endl;
    cout << "Nilai Juri ke-2 " << j2 << endl;
    cout << "Nilai Juri ke-3 " << j3 << endl;
    cout << "Total Nilai " << nilai << endl;
    cout << "==========================" << endl;
    cout << hasil << endl;

    return 0;
}

// DOKUMENTASI
// SUBMIT TTS 14