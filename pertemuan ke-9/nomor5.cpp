// Susunlah program untuk menginput empat buah bilangan bulat
// kemudian mencetak salah satu bilangan yang nilainya terbesar,
// serta buat flowchatnya!

#include <iostream>

using namespace std;

main()
{
    int bil1, bil2, bil3, bil4;
    cout << "Masukan Bilangan ke-1: ";
    cin >> bil1;
    cout << "Masukan Bilangan ke-2: ";
    cin >> bil2;
    cout << "Masukan Bilangan ke-3: ";
    cin >> bil3;
    cout << "Masukan Bilangan ke-4: ";
    cin >> bil4;

    if (bil1 > bil2 && bil1 > bil3 && bil1 > bil4)
    {
        cout << "nilai terbesar : " << bil1 << endl;
    }
    else if (bil2 > bil1 && bil2 > bil3 && bil2 > bil4)
    {
        cout << "nilai terbesar : " << bil2 << endl;
    }
    else if (bil3 > bil1 && bil3 > bil2 && bil3 > bil4)
    {
        cout << "nilai terbesar : " << bil3 << endl;
    }
    else
    {
        cout << "nilai terbersar : " << bil4 << endl;
    }
}