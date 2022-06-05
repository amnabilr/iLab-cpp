#include <iostream>

using namespace std;


/*buatlah struct dengan nama kelompok_bilangan_s yang memiliki

2 anggota dengan ketentuan :

    - bertipe float dengan nama pecahan_s

    - bertipe integer dengan namabulat_s

struct memiliki object dengan nama bilangan_s*/

struct kelompok_bilangan_s {
    float pecahan_s;
    int bulat_s;
}bilangan_s;


/*buatlah unions dengan nama kelompok_bilangan_u yang memiliki

2 anggota dengan ketentuan :

    - bertipe float dengan nama pecahan_u

    - bertipe integer dengan nama bulat_u

unions memiliki object dengan nama bilangan_u*/

union kelompok_bilangan_u {
    float pecahan_u;
    int bulat_u;
}bilangan_u;


int main(){

    bilangan_s.bulat_s=7;

    bilangan_s.pecahan_s=7;

    bilangan_u.bulat_u=7;

    bilangan_u.pecahan_u=7;


    cout << "Nilai awal bilangan bulat (struct) = " << bilangan_s.bulat_s /*mengakses elemen bulat_s*/ << endl;

    cout << "Nilai awal bilangan pecahan (struct) = " << bilangan_s.pecahan_s /*mengakses elemen pecahan_s*/ << endl;

    cout << "Nilai awal bilangan bulat (union) = " << bilangan_u.bulat_u /*mengakses elemen bulat_u*/ << endl;

    cout << "Nilai awal bilangan pecahan (union) = " << bilangan_u.pecahan_u /*mengakses elemen pecahan_u*/ << endl;


    bilangan_s.bulat_s/=2;

    bilangan_s.pecahan_s/=2;

    bilangan_u.bulat_u/=2;

    bilangan_u.pecahan_u/=2;


    cout << endl;

    cout << "===============================================================" << endl;

    cout << endl;


    cout << "Nilai bilangan bulat setelah dibagi 2 (struct) = " << bilangan_s.bulat_s  /*mengakses elemen bulat_s*/ << endl;

    cout << "Nilai bilangan pecahan setelah dibagi 2 (struct) = " << bilangan_s.pecahan_s /*mengakses elemen pecahan_s*/ << endl;

    cout << "Nilai bilangan bulat setelah dibagi 2 (union) = " << bilangan_u.bulat_u /*mengakses elemen bulat_u*/ << endl;

    cout << "Nilai bilangan pecahan setelah dibagi 2 (union) = 1.01644e-019 " /*mengakses elemen pecahan_u*/ << endl;


    return 0;

}
