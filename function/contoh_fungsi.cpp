#include <iostream>

using namespace std;

void hitung_kecepatan()
{
    int s, t, h;
    cout << "Masukan jarak = ";
    cin >> s;
    cout << "Masukan waktu = ";
    cin >> t;
    h = s / t;
    cout << "V = " << h << "m/s2^" << endl;
}

void hitung_jarak()
{
    float v, t, h;
    cout << "Masukan kecepatan = ";
    cin >> v;
    cout << "Masukan waktu = ";
    cin >> t;
    h = v * t;
    cout << "S = " << h << "m" << endl;
}

void hitung_waktu()
{
    float s, v, h;
    cout << "Masukan jarak = ";
    cin >> s;
    cout << "Masukan kecepatan = ";
    cin >> v;
    h = s / v;
    cout << "T = " << h << "s" << endl;
}

int main()
{
    string pilihan;
    cout << "Masukan pilihan = ";
    cin >> pilihan;

    if (pilihan == "v")
    {
        hitung_kecepatan();
    }
    else if (pilihan == "s")
    {
        hitung_waktu();
    }
    else if (pilihan == "t")
    {
        hitung_jarak();
    }
    else
    {
        cout << "Masukan inputan yang valid" << endl;
    }

    return 0;
}