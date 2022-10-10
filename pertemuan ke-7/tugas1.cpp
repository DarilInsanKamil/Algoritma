// Buat alogritmay

#include <iostream>
using namespace std;

main()
{
    char jatuh, luka;
    string a = "jatuh dari sepeda", b = "tidak jatuh", c = "luka", d = "tidak luka";
    cout << "Apakah kamu terjatuh: ";
    cin >> jatuh;
    if (jatuh == 'y')
    {
        cout << a << endl;
        cout << "Apakah kamu teluka: ";
        cin >> luka;
        switch (luka)
        {
        case 'y':
            cout << c << endl;
            break;
        case 't':
            cout << d << endl;
        default:
            break;
        }
    }
    else if(jatuh == 't')
    {
        cout << b << endl;
    } else {
        cout<<"Inputan tidak valid"<<endl;
    }
}