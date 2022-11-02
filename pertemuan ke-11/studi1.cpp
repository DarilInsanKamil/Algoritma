#include <iostream>
using namespace std;

int main()
{
    float t, uas, uts, k, total, kkm = 60, nilai_tambahan;
    cout << "Masukan nilai tugas ";
    cin >> t;
    cout << "Masukan nilai uas ";
    cin >> uas;
    cout << "Masukan nilai uts ";
    cin >> uts;
    cout << "Masukan nilai kehadiran ";
    cin >> k;
    k = k / 21 * 10;
    t = t * 20 / 100;
    uts = uts * 30 / 100;
    uas = uas * 40 / 100;
    total = k + t + uts + uas;

    for (int x; total < kkm;)
    {
        cout << "Nilai Sekarang: " << total << endl;
        cout << "Nilai tambahan setidaknya: " << kkm - total << endl;
        cout << "Masukan Nilai tambahan ";
        cin >> nilai_tambahan;
        total = total + nilai_tambahan;
    }
    if (total >= kkm)
    {
        cout << "=====================" << endl;
        cout << "Selamat Kamu Lulus" << endl;
    }
    cout << "Nilai Tugas: " << t << endl;
    cout << "Nilai Kehadiran: " << k << endl;
    cout << "Nilai UTS: " << uts << endl;
    cout << "Nilai UAS: " << uas << endl;
    cout << "Nilai Total: " << total << endl;
}