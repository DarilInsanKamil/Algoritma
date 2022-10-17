#include <iostream>
using namespace std;
main()
{

    int a, pensil = 1500, buku = 2500, uang, kembalian;

    cout << "Masukan Pilihan" << endl;
    cout << "1 untuk buku dan 2 untuk pensil" << endl;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "Anda memilih buku" << endl;
        cout << "Masukan uang anda ";
        cin >> uang;
        if (uang >= buku)
        {
            kembalian = uang - buku;
            cout << "Kamu memmilih Buku sisa uang kamu " << kembalian << endl;
        }
        else if (uang < buku)
        {
            cout << "uang anda kurang" << endl;
        }
        break;
    case 2:
        cout << "Anda memilih pensil" << endl;
        cout << "Masukan uang anda ";
        cin >> uang;
        if (uang >= pensil)
        {
            kembalian = uang - pensil;
            cout << "Kamu memmilih Pensil sisa uang kamu " << kembalian << endl;
        }
        else if (uang < pensil)
        {
            cout << "uang anda kurang" << endl;
        }
    default:
        cout << "Inputan tidak valid" << endl;
        break;
    }

    // if (a == 1)
    // {
    //     cout << "Anda memilih buku" << endl;
    //     cout << "Masukan uang anda ";
    //     cin >> uang;
    //     if (uang >= buku)
    //     {
    //         kembalian = uang - buku;
    //         cout << "Kamu memmilih Buku sisa uang kamu " << kembalian << endl;
    //     }
    //     else if (uang < buku)
    //     {
    //         cout << "uang anda kurang" << endl;
    //     }
    // }
    // else if (a == 2)
    // {
    //     cout << "Anda memilih pensil" << endl;
    //     cout << "Masukan uang anda ";
    //     cin >> uang;
    //     if (uang >= pensil)
    //     {
    //         kembalian = uang - pensil;
    //         cout << "Kamu memmilih Pensil sisa uang kamu " << kembalian << endl;
    //     }
    //     else if (uang < pensil)
    //     {
    //         cout << "uang anda kurang" << endl;
    //     }
    // }
    // else
    // {
    //     cout << "Inputan anda tidak valid" << endl;
    // }
}