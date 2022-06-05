#include <iostream>

using namespace std;

int main()
{
char nilai; /*deklarasikan variabel nilai yang bertipe characte*/
string nama; /*deklarasikan variabel nama yang bertipe string*/

/*Lengkapi bagian yang masih kosong*/
  cout << "Input Nama Anda : "; cin >> nama;
  cout << "Input Nilai Anda (A - E) : "; cin >> nilai;
 switch (nilai) {
  case 'A':
    cout << "Nama = " << nama << endl;
    cout << "Pertahankan Nilai Anda" << endl;
    break;
  case 'B':
    cout << "Nama = " << nama << endl;
    cout << "Nilai yang Bagus" << endl;
    break;
  case 'C':
      cout << "Nama = " << nama << endl;
    cout << "Nilai Cukup Tidak Perlu Mengulang" << endl;
    break;
  case 'D':
      cout << "Nama = " << nama << endl;
    cout << "Sebaiknya Ulang Kelas" << endl;
    break;
  case 'E':
      cout << "Nama = " << nama << endl;
    cout << "Mengulang Kelas" << endl;
    break;
  default:
      cout << "Nama = " << nama << endl;
    cout << "Maaf, format nilai tidak sesuai" << endl;
  }

  return 0;
}