#include <iostream>
using namespace std;

int main()
{
    string nama, jurusan, tema, nim;
    int semester, pilihan;
    cout << "Masukan Nama: ";
    getline(cin, nama);
    cout << "Masukan Jurusan: ";
    getline(cin, jurusan);
    cout << "Masukan Nim: ";
    cin >> nim;
    cout << "1. Pemrograman" << endl;
    cout << "2. Desain Poster" << endl;
    cout << "Pilih Lomba yang mau kamu ikuti ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "Semester berapa kamu sekarang: ";
        cin >> semester;
        if (semester > 4)
        {
            tema = "Mengerjakan Poster Bertema Webinar/seminar";
        }
        else
        {
            tema = "Mengerjakan Poster Tentang Masyarakat";
        }
        break;
    case 2:
        cout << "Semester berapa kamu sekarang: ";
        cin >> semester;
        if (semester < 4)
        {
            tema = "Lomba Pemrograman Dasar";
        }
        else
        {
            tema = "Lomba Pemrograman Lanjutan";
        }
    default:
        break;
    }
    
    cout << "==========================" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Nim: " << nim << endl;
    cout << "Jurusan: " << jurusan << endl;
    cout << "Tema lomba: " << tema << endl;

    return 0;
}