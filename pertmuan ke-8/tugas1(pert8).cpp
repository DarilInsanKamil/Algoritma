// Buat diagram tree dengan 5 kesimpulan
// Jelaskan permasalahannya
// Jelaskan isi variabelnya
// Buatlah pengertiannya
// Tampilkan semua output kesimpulan

#include <iostream>

using namespace std;

main()
{
    char jenis, kaki, makan, lari, hewan;
    string a = "iya hewan", b = "sayang sekali kamu salah", c = "berkaki 4", e = "makan daging", f = "Iya larinya cepat", g = "Iya Benar!!!";

    cout << "===== Tebak-Tebakan =====" << endl;
    cout << "jawab dengan y atau t" << endl;

    cout << "Apakah dia hewan: ";
    cin >> jenis;

    if (jenis == 'y')
    {
        cout << a << endl;

        cout << "Apakah dia berkaki 4: ";
        cin >> kaki;
        switch (kaki)
        {
        case 'y':
            cout << c << endl;
            break;

        case 't':
            cout << b << endl;
            break;
        default:
            break;
        }

        cout << "Apakah dia makan daging: ";
        cin >> makan;
        switch (makan)
        {
        case 'y':
            cout << e << endl;
            break;

        case 't':
            cout << b << endl;
            break;
        default:
            break;
        }

        cout << "Apakah dia berlari cepat: ";
        cin >> lari;
        switch (lari)
        {
        case 'y':
            cout << f << endl;
            break;

        case 't':
            cout << b << endl;
            break;
        default:
            break;
        }

        cout << "Apakah dia Macan: ";
        cin >> hewan;
        switch (hewan)
        {
        case 'y':
            cout << g << endl;
            break;

        case 't':
            cout << b << endl;
            break;
        default:
            break;
        }
        }
    else
    {
        cout << b << endl;
    }
}