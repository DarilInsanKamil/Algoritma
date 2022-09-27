#include <iostream>
using namespace std;

int main()
{

    int Nilai=90;
    if (Nilai >= 80)
    {
        cout << "A (lulus)" << endl;
    }
    else if (Nilai >= 70)
    {
        cout << "B (lulus)" << endl;
    }
    else if (Nilai >= 60)
    {
        cout << "C (lulus)" << endl;
    }
    else if (Nilai >= 55)
    {
        cout << "D (tidak lulus)"<<endl;
    }else {
    	cout<<"E (tidak lulus)"<<endl;
	}

    return 0;
}
