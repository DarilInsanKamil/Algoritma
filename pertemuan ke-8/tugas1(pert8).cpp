// Buat diagram tree dengan 5 kesimpulan
// Jelaskan permasalahannya
// Jelaskan isi variabelnya
// Buatlah pengertiannya
// Tampilkan semua output kesimpulan

#include <iostream>

using namespace std;

main()
{
    char order, sugar, cup, cold;
    string z = "tidak pesan", a = "Es kopi susu large", b = "Kopi hitam panas large", c="Kopi susu large", d="Es Kopi Hitam medium", e="Es Kopi susu medium", f="Kopi hitam large", g="Es Kopi hitam large", h="Kopi susu medium";
    cout << "Ngopi gak: ";
    cin >> order;

    cout << "pake gula?: ";
    cin >> sugar;
    cout << "Ukurannya medium: ";
    cin >> cup;
    cout << "mau yang dingin: ";
    cin >> cold;

    switch (order)
    {
    case 'y':
        if (sugar && cup && cold == 'y')
        {
            cout << a << endl;
        }
        else if (sugar && cup && cold == 't')
        {
            cout << b << endl;
        }
        else if (sugar && cup == 'y' && cold == 't')
        {
            cout << c << endl;
        }
        else if (sugar && cup == 't' && cold == 'y')
        {
            cout << d << endl;
        }
        else if (sugar && cold == 'y' && cup == 't')
        {
            cout << e << endl;
        }
        else if (sugar && cold == 't' && cup == 'y')
        {
            cout << f << endl;
        }
        else if (cold && cup == 'y' && sugar == 't')
        {
            cout << g << endl;
        }
        else if (cold && cup == 't' && sugar == 'y')
        {
            cout << h << endl;
        }
        break;

    case 't':
        cout << z << endl;
        break;

    default:
        break;
    }
}