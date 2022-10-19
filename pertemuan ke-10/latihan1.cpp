// artinya comment
// if akan menjalankan statement apabila kondisinya bernilai benar begitu juga denga switch

#include <iostream>
using namespace std;
main()
{
    // Initial Variabel
    int a, pensil = 1500, buku = 2500, uang, kembalian;

    // Input variabel a untuk pilihan 1 dan 2
    cout << "Masukan Pilihan" << endl;
    cout << "1 untuk buku dan 2 untuk pensil" << endl;
    // Menyimpan Nilai ke variabel a
    cin >> a;

    // cara 3
    switch (a)
    {
    // pada case 1 (user menginput 1 ke variabel a) maka ia memilih buku
    case 1:
        cout << "Anda memilih buku" << endl;
        // Input nilai uang ke variabel uang
        cout << "Masukan uang anda ";
        cin >> uang;
        // pada percabangan ini mempunyai kondisi jika buku lebih dari uang yang dimiliki maka
        // menceteak uang anda kurang.
        if (buku > uang)
        {
            cout << "uang anda kurang" << endl;
        }
        // pada percabangan ini mempunyai kondisi jika harga buku kurang dari uang yang dipunya maka
        // mengubah nilai kembalian menjadi uang dikurang harga buku.
        else if (buku <= uang)
        {
            // mengubah nilai kembalian menjadi uang dikurang dengan harga buku
            kembalian = uang - buku;
            // Mencetak variabel kembalian
            cout << "Kamu memmilih Buku sisa uang kamu " << kembalian << endl;
        }
        break;
    // pada case 1 (user menginput 1 ke variabel (a) maka ia memilih buku
    case 2:
        cout << "Anda memilih pensil" << endl;
        // Input nilai uang ke variabel uang
        cout << "Masukan uang anda ";
        cin >> uang;
        // pada percabangan ini mempunyai kondisi jika harga pensil lebih dari uang yang dimiliki maka
        // menceteak uang anda kurang.
        if (pensil > uang)
        {
            cout << "uang anda kurang" << endl;
        }
        // pada percabangan ini mempunyai kondisi jika harga pensil kurang dari uang yang dipunya maka
        // mengubah nilai kembalian menjadi uang dikurang harga pensil.
        else if (pensil <= uang)
        {
            // mengubah nilai kembakian menjadi uang dikurang dengan harga pensil
            kembalian = uang - pensil;
            // Mencetak variabel kembalian
            cout << "Kamu memmilih Pensil sisa uang kamu " << kembalian << endl;
        }
        break;
    default:
        // Jika semua case tidak sama maka akan mencetak ini
        cout << "Inputan tidak valid" << endl;
        break;
    }

    // Cara 1 menggunakan switch
    // switch (a)
    // {
    // // pada case 1 (user menginput 1 ke variabel a) maka ia memilih buku
    // case 1:
    //     cout << "Anda memilih buku" << endl;
    //     // Input nilai uang ke variabel uang
    //     cout << "Masukan uang anda ";
    //     cin >> uang;
    //     // pada percabangan ini mempunyai kondisi jika uang lebih atau sama dengan harga buku maka
    //     // mengubah nilai variabel kembalian menjadi uang dikurang dengan harga buku.
    //     if (uang >= buku)
    //     {
    //         // mengubah nilai kembakian menjadi uang dikurang dengan harga buku
    //         kembalian = uang - buku;
    //         // Mencetak variabel kembalian
    //         cout << "Kamu memmilih Buku sisa uang kamu " << kembalian << endl;
    //     }
    //     // pada percabangan ini mempunyai kondisi jika uang kurang dari harga buku maka
    //     // mencetak uang anda kurang.
    //     else if (uang < buku)
    //     {
    //         cout << "uang anda kurang" << endl;
    //     }
    //     break;
    // // pada case 1 (user menginput 1 ke variabel (a) maka ia memilih buku
    // case 2:
    //     cout << "Anda memilih pensil" << endl;
    //     // Input nilai uang ke variabel uang
    //     cout << "Masukan uang anda ";
    //     cin >> uang;
    //     // pada percabangan ini mempunyai kondisi jika uang lebih atau sama dengan harga pensil maka
    //     // mengubah nilai variabel kembalian menjadi uang dikurang dengan harga pensil.
    //     if (uang >= pensil)
    //     {
    //         // mengubah nilai kembakian menjadi uang dikurang dengan harga pensil
    //         kembalian = uang - pensil;
    //         // Mencetak variabel kembalian
    //         cout << "Kamu memmilih Pensil sisa uang kamu " << kembalian << endl;
    //     }
    //     // pada percabangan ini mempunyai kondisi jika uang kurang dari harga pensil maka
    //     // mencetak uang anda kurang.
    //     else if (uang < pensil)
    //     {
    //         cout << "uang anda kurang" << endl;
    //     }
    // break;
    // default:
    //     // Jika semua case tidak sama maka akan mencetak ini
    //     cout << "Inputan tidak valid" << endl;
    //     break;
    // }

    // Cara 2
    // Jika a sama dengan 1 maka akan mencetak anda memilih buku dan input value uang
    //  if (a == 1)
    //  {
    //      cout << "Anda memilih buku" << endl;
    // Menginput value uang
    //      cout << "Masukan uang anda ";
    //      cin >> uang;
    // Jika uang lebih dari atau sama dengan harga buku maka akan mengubah nilai kembalian menjadi uang dikurang harga buku dan mencetak value kembalian
    //      if (uang >= buku)
    //      {
    //          kembalian = uang - buku;
    //          cout << "Kamu memmilih Buku sisa uang kamu " << kembalian << endl;
    //      }
    // Jika uang kurang dari harga buku maka akan mencetak uang anda kurang
    //      else if (uang < buku)
    //      {
    //          cout << "uang anda kurang" << endl;
    //      }
    //  }
    // Jika a sama dengan 1 maka akan mencetak anda memilih buku dan input value uang
    //  else if (a == 2)
    //  {
    //      cout << "Anda memilih pensil" << endl;
    // Menginput value uang
    //      cout << "Masukan uang anda ";
    //      cin >> uang;
    // Jika uang lebih dari atau sama dengan harga pensil maka akan mengubah nilai kembalian menjadi uang dikurang harga buku dan mencetak value kembalian
    //      if (uang >= pensil)
    //      {
    //          kembalian = uang - pensil;
    //          cout << "Kamu memmilih Pensil sisa uang kamu " << kembalian << endl;
    //      }
    // Jika uang kurang dari harga pensil maka akan mencetak uang anda kurang
    //      else if (uang < pensil)
    //      {
    //          cout << "uang anda kurang" << endl;
    //      }
    //  }
    // Jika semua kondisi tidak terpenuhi maka akan mencetak inputan tidak valid
    //  else
    //  {
    //      cout << "Inputan anda tidak valid" << endl;
    //  }
}