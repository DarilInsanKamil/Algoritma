#include <iostream>
using namespace std;
int main()
{
    char order, temp, taste;
    string a = "Udah minum kopi", b = "Es Kopi susu", c = "Es kopi hitam ", d = " Kopi susu panas ", e = " Kopi hitam panas ";
    cout << "Jawab dengan y dan t" << endl;
    cout << "Mau pesan kopi? ";
    cin >> order;
    switch (order)
    {
    case 'y':
        cout << "Mau yang dingin? ";
        cin >> temp;
        cout << "Mau yang manis? ";
        cin >> taste;
        if (temp == 'y')
        {
            if (taste == 'y')
            {
                cout << b << endl;
            }
            else if (taste == 't')
            {
                cout << c << endl;
            }
        }
        else if (temp == 't')
        {
            if (taste == 'y')
            {
                cout << d << endl;
            }
            else if (temp == 't')
            {
                cout << e << endl;
            }
        }
        break;
    case 't':
        cout << a << endl;
        break;
    default:
        break;
    }
}