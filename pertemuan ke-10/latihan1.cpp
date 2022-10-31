// artinya comment
// if akan menjalankan statement apabila kondisinya bernilai benar begitu juga denga switch

#include <iostream>
using namespace std;
main()
{
    // Initial Variabel
    // variabel jumlah hanya untuk cara ke 4 (advance mode)
    int a, pensil = 1500, buku = 2500, uang, kembalian, jumlah;

    // Input variabel a untuk pilihan 1 dan 2
    cout << "Masukan Pilihan" << endl;
    cout << "1 untuk buku dan 2 untuk pensil" << endl;
    // Menyimpan Nilai ke variabel a
    cin >> a;

    // Jika a sama dengan 1 maka akan mencetak anda memilih buku dan input value uang
     if (a == 1)
     {
         cout << "Anda memilih buku" << endl;
    // Menginput value uang
         cout << "Masukan uang anda ";
         cin >> uang;
    // Jika uang lebih dari atau sama dengan harga buku maka akan mengubah nilai kembalian menjadi uang dikurang harga buku dan mencetak value kembalian
         if (uang >= buku)
         {
             kembalian = uang - buku;
             cout << "Kamu memmilih Buku sisa uang kamu " << kembalian << endl;
         }
    // Jika uang kurang dari harga buku maka akan mencetak uang anda kurang
         else if (uang < buku)
         {
             cout << "uang anda kurang" << endl;
         }
     }
    // Jika a sama dengan 1 maka akan mencetak anda memilih buku dan input value uang
     else if (a == 2)
     {
         cout << "Anda memilih pensil" << endl;
    // Menginput value uang
         cout << "Masukan uang anda ";
         cin >> uang;
    // Jika uang lebih dari atau sama dengan harga pensil maka akan mengubah nilai kembalian menjadi uang dikurang harga buku dan mencetak value kembalian
         if (uang >= pensil)
         {
             kembalian = uang - pensil;
             cout << "Kamu memmilih Pensil sisa uang kamu " << kembalian << endl;
         }
    // Jika uang kurang dari harga pensil maka akan mencetak uang anda kurang
         else if (uang < pensil)
         {
             cout << "uang anda kurang" << endl;
         }
     }
    // Jika semua kondisi tidak terpenuhi maka akan mencetak inputan tidak valid
     else
     {
         cout << "Inputan anda tidak valid" << endl;
     }
}