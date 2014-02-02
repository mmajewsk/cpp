
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
namespace test{
template <typename T = double> struct conv{
	conv(){

	}
	static T from(std::string in){
		T re;
		stringstream ss;
		ss<<in;
		ss>>re;
		return re;
	}
	static std::string to(T in){
		stringstream ss;
		ss<<in;
		return ss.str();
	}
};
}
int main() {
    std::string pi =
        test::conv<>::to(test::conv<int>::from("-1") + test::conv<>::from("4.14159"));
    std::cout << pi;
}
//Wynik dzia³ania programu (tylko linia poni¿ej):
//<3.14159>
