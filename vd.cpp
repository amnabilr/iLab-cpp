#include <iostream>
using namespace std;



 // Animal is a base class.
class Animal
{

     public:

// Constructor

    Animal()

    {  cout << "Animal constructor executing.\n"; }

// Destructor

    ~Animal()

    { cout << "Animal destructor executing.\n"; }

};

// Buat Kelas dog diturunkan dari hewan.

class Dog :  public Animal

{

    public:

// Constructor

   Dog()

    { cout << "Dog constructor executing.\n"; }

// Destructor

   ~Dog()

    { cout << "Dog destructor executing.\n"; }

};

// fungsi utama*

int main()

{

// Buat objek dog, direferensikan oleh pointer animal.

    Animal *myAnimal = new Dog;

// Hapus objek dog

    delete myAnimal;

    return 0;

}

