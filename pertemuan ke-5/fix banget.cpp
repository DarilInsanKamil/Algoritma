#include <iostream>

using namespace std;

int main()
{
    float v, s, t, hasil;
    string pilihan;

    cout << "=====Study Kasus 2 (pertemuan ke 5)=====" << endl;
    cout << "Pilihlah diantara v,s,t" << endl;
    cout << "Masukan pilihan = ";
    cin >> pilihan;

    if (pilihan == "v")
    {
        cout << "Masukan jarak = ";
        cin >> s;
        cout << "Masukan waktu = ";
        cin >> t;
        v = s / t;
        cout << "========================================\n";
        cout << "V = " << v << "m/s2^" << endl;
        cout << "S = " << s << "m" << endl;
        cout << "T = " << t << "s" << endl;
    }
    else if (pilihan == "s")
    {
        cout << "Masukan kecepatan = ";
        cin >> v;
        cout << "Masukan waktu = ";
        cin >> t;
        s = v * t;
        cout << "========================================\n";
        cout << "V = " << v << "m/s2^" << endl;
        cout << "S = " << s << "m" << endl;
        cout << "T = " << t << "s" << endl;
    }
    else if (pilihan == "t")
    {
        cout << "Masukan jarak = ";
        cin >> s;
        cout << "Masukan kecepatan = ";
        cin >> v;
        t = s / v;
        cout << "========================================\n";
        cout << "V = " << v << "m/s2^" << endl;
        cout << "S = " << s << "m" << endl;
        cout << "T = " << t << "s" << endl;
    }
    else
    {
        cout << "Masukan inputan yang valid" << endl;
    }
    return 0;
}