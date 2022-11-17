#include <iostream>
using namespace std;
int main()
{
    string str, strrev;
    cout << "Masukan kata: ";
    cin >> str;
    cout << "Cek kata palindrome\n";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        strrev += str[i];
    }
    if (strrev == str)
    {
        cout << "==================" << endl;
        cout << str << " merupakan palindrome" << endl;
    }
    else
    {
        cout << "==================" << endl;
        cout << str << " bukan palindrome" << endl;
    }
}