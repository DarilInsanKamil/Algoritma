// Susunlah program untuk menginput empat buah bilangan bulat
// kemudian mencetak salah satu bilangan yang nilainya terbesar, serta buat flowchatnya!


//Pemanggilan Library C++
#include <iostream>
using namespace std;

//Struktur Main
main()
{
    //Initial Variabel
    int bil1, bil2, bil3, bil4;
    cout << "Masukan Bilangan ke-1: ";
    //Menyimpan inputan ke variabel bil1
    cin >> bil1;
    cout << "Masukan Bilangan ke-2: ";
    //Menyimpan inputan ke variabel bil2
    cin >> bil2;
    cout << "Masukan Bilangan ke-3: ";
    //Menyimpan inputan ke variabel bil3
    cin >> bil3;
    cout << "Masukan Bilangan ke-4: ";
    //Menyimpan inputan ke variabel bil4
    cin >> bil4;

    //Jika bil 1 lebih besar dari bill 2 dan bil 1 lebih besar dari bil 3 dan bil lebih besar dari bil4 maka cetak bil 1
    if (bil1 > bil2 && bil1 > bil3 && bil1 > bil4)
    {
        cout << "nilai terbesar : " << bil1 << endl;
    }
    //Jika bil 2 lebih besar dari bill 1 dan bil 2 lebih besar dari bil 3 dan bil 2 lebih besar dari bil4 maka cetak bil 2
    else if (bil2 > bil1 && bil2 > bil3 && bil2 > bil4)
    {
        cout << "nilai terbesar : " << bil2 << endl;
    }
    //Jika bil 3 lebih besar dari bill 1 dan bil 3 lebih besar dari bil 2 dan bil 3 lebih besar dari bil4 maka cetak bil 3
    else if (bil3 > bil1 && bil3 > bil2 && bil3 > bil4)
    {
        cout << "nilai terbesar : " << bil3 << endl;
    }
    //Jika semua kondisi tidak terpenuhi / salah maka cetak bil 4
    else
    {
        cout << "nilai terbersar : " << bil4 << endl;
    }
}