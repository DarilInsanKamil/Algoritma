//Pemamggilan Library C++
#include <iostream>
using namespace std;

//Struktur Main
main()
{
    //Initial variabel bilangan bulat(int)
    int nilai;
    cout << "Masukan Nilai: ";
    //Menyimpan value dari inputan
    cin >> nilai;

    //Jika Nilai lebih dari 69 maka LULUS
    if (nilai > 69)
    {
        cout << "LULUS" << endl;
    }
    //Jika semua kondisi tidak terpenuhi maka dia TIDAK LULUS
    else
    {
        cout << "TIDAK LULUS" << endl;
    }
    return 0;
}