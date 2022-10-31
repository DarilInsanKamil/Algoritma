// Cetak bilangan bulat
// Cetak bilangan positif
// Cetak bilangan negatif
// Cetak bilangan genap dan ganjil
#include <iostream>
using namespace std;

int main()
{
    // Bilangan Bulat Positif dan Negatif
     int b = -5;
     cout << "Bilangan Bulat positif" << endl;
     for (int i = 1; i <= 5; i++)
     {
         cout << i << endl;
     }
     cout << "Bilangan Bulat negatif" << endl;
     for (int a = 1; a >= b; a--)
     {
         cout << a << endl;
     }

    // Bilangan genap dan ganjil
    for (int i = 1; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " genap" << endl;
        }
        else if (i % 2 == 1)
        {
            cout << i << " ganjil" << endl;
        }
    }
}