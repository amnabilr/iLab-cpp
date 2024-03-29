#include <iostream>

using namespace std;

int binarySearch(const int [], int, int);
const int SIZE = 20;

int main()
{
    int idNums[SIZE] = {101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600};
    int results;
    int empID;

    cout << "Masukkan ID karyawan yang ingin Anda cari : ";
    cin >> empID;

    results = binarySearch(idNums, SIZE, empID);

    if (results == -1)
        cout << "ID tersebut tidak ada dalam Array. \n";
    else{
        cout << "ID tersebut ditemukan di elemen " << results;
        cout << " dalam Array.\n";
        }
    return 0;
}

int binarySearch(const int array[], int size, int value)
{
   int first = 0,
       last = size - 1,
       middle,
       position = -1;

   bool found = false;

   while (!found && first <= last)
   {
      middle = (first + last) / 2;
      if (array[middle] == value)
      {
         found = true;
         position = middle;
      }
      else if (array[middle] > value)
         last = middle - 1;
      else
         first = middle + 1;
   }
   return position;
}
