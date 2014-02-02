#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;

struct gen{
	static int n;
	gen(){

	}
	static int next(){
		return ++n;
	}
};

int gen::n=0;

 bool op(int elem){
	if(elem%2) return false;
	else return true;
}

int main()
{
	deque<int> c;

	generate_n(front_inserter(c), 10, gen::next), gen(); // uzupe³nia 1,2,...,10
	c.erase(remove_if(c.begin(), c.end(), op), c.end()); 	// usuwa parzyste, zostaje 1, 3, 5, 7, 9
// w /* uzupe³nij 3 */ u¿ywamy TYLKO obiektów funkcyjnych z STL!
}
