/*
 * main.cpp
 *
 *  Created on: 2 lut 2014
 *      Author: hawker
 */




#include <iostream>

using namespace std;

template <typename T=double>
class box
{
        private:
                T value;

        public:
                box(T v): value(v) {}

                void print()
                {
                        cout << (double)value << "\n";
                }
};

template <>
class box<char>
{
        private:
                char value;

        public:
                explicit box(char v): value(v) {}

                void print()
                {
                        cout << (double)value << "\n";
                }
};


box<> a = 2.2;
box<int> b = 3;
box<char> c = box<char>('A');
//box<char> d = 'A';
//odkomentowanie tej linijki powoduje blad kompilacji

int main()
{
        a.print();              // Wypisuje obiekt T: 2.2
        b.print();              // Wypisuje obiekt T: 3
        c.print();              // Wypisuje obiekt char: 65
}
