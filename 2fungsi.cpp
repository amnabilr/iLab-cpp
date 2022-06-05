#include <iostream>
using namespace std;

void anotherFunction();  /* deklarasikan function prototype dengan nama anotherFunction
dengan tipe data void */

int main() { /* deklarasikan fungsi dengan nama main dengan tipe data integer
*/

    int num=1; /* deklarasi variabel num bertipe integer dan bernilai 1 */

    cout << "In main, num is " <<num<< endl;

    anotherFunction(); /* memanggil fungsi yang bernama anotherFuncftion */

    return 0;

}

void anotherFunction() {/* deklarasikan fungsi dengan nama anotherFunction
dengan tipe data void */

    int num = 20; // nilai variabel 2

    cout << "In anotherFunction, num is " << num << endl;

}
