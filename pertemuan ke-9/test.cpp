//Pemanggilan Library C++
#include <iostream>
using namespace std;

//Sturktur Main
main()
{
    //Initial variabel
    int a, b, c;
    cout << "Masukan Nilai ke-1: ";
    //Input Nilai
    cin >> a;
    cout << "Masukan Nilai ke-2: ";
    //Input Nilai
    cin >> b;
    cout << "Masukan Nilai ke-3: ";
    //Input Nilai
    cin >> c;

    //Jika a kurang dari b
    if (a < b)
    {   
        //Jika b kurang dari c maka urutannya a < b < c
        if (b < c)
        {
            cout << "\n Urutan Nilai dari yang Terkecil: " << a << " " << b << " " << c << " ";
        }
        //Jika c kurang dari c maka urutannya a < c
        else if (a < c)
        {
            cout << "\n Urutan Nilai dari yang Terkecil: " << a << " " << c << " ";
        }
        //Jika semua kondisi tidak terpenuhi maka urutannya c << a << b
        else
        {
            cout << "\n Urutan Nilai dari yang Terkecil: " << c << " " << a << " " << b << " ";
        }
    }
    //Jika a < c maka urutan nilainya b < a < c
    else if (a < c)
    {
        cout << "\n Urutan Nilai dari yang Terkecil: " << b << " " << a << " " << c << " ";
    }
    //Jika b < c maka urutan nilainya b < c < 
    else if (b < c)
    {
        cout << "\n Urutan Nilai dari yang Terkecil: " << b << " " << c << " ";
    }
    //Jika semua kondisi tidak terpenuhi maka urutannya c < b < a 
    else
    {
        cout << "\n Urutan Nilai dari yang Terkecil: " << c << " " << b << " " << a << " ";
    }
}