#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " bilangan genap" << endl;
        }
        else if (i % 2 == 1)
        {
            cout << i << " bilangan ganjil" << endl;
        }
    }
    return 0;
}