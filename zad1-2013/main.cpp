#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
using namespace std;

class T
{
    public:
        T() { cout << "Konstruktor T" << endl;}
        T(const T & t) { cout << "Konstruktor kopiujacy T" << endl;}
        ~T() { cout << "Destruktor T" << endl; }
};

int main()
{
    //set<T,T::op> s(10); // nie ma takiego konstuktora
    vector<T> v; //tworzy tylko miejsce pod wskaznik
  //  cout<<"pierwszy termin:"<<endl;
  //  v.reserve(10);
   // cout<<v.size()<<" "<<v.capacity()<<endl;
    cout<<"drugi termin:"<<endl;
    v.resize(10); // tworzy jeden obiekt T i konstruktorem kopiujacym 10 kopii

    T * t[10];
    getchar();
}

// WYNIK:
// Konstruktor T
// Konstruktor kopiujacy T
// Konstruktor kopiujacy T
// Konstruktor kopiujacy T
// Konstruktor kopiujacy T
// Konstruktor kopiujacy T
// Konstruktor kopiujacy T
// Konstruktor kopiujacy T
// Konstruktor kopiujacy T
// Konstruktor kopiujacy T
// Konstruktor kopiujacy T
// Destruktor T
