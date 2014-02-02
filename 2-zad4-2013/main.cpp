#include <list>
#include <iostream>
#include <algorithm>
using namespace std;
/**
 * Nieco hackerskie, ogólniejsze rozwiazanie porzadane
 */
 void op( int el){
	std::cout<<(int)el<<std::endl;
}

template <typename T> string print_stl_container(T a,  T b){
	for_each(a,b,op);
	return " ";
}

typedef int el_type;
int main()
{
	list<el_type> v;

	std::ostream& o = std::cout;// tutaj musi byc referencja, nie wiem czemu
	fill_n(front_inserter(v), 10, el_type()); // uzupelnia zerami front_inserter - poczytac w 12 wykladzie jest
	o << print_stl_container(v.begin(), v.end());  //tutaj brakowalo nawiasow

	// wynik programu: 0,0,0,0,0,0,0,0,0,0
}
