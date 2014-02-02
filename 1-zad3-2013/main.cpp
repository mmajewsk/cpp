#include <vector>
#include <iostream>
using namespace std;

template <typename T=int> struct box{
        T val;
        box(){

        }
        box(T a){
                        val=a;
                }
                operator T() const {
                        return val;
                }
};

template <typename T, int S=2> struct array{
        vector<T> v;
        array( const array<T,2> &in){
                v=in.v;
        }
        array(){
                v = vector<T>(S);
        }
        T &operator[](int i )const{
        	T temp = v[i];
        	return temp;
        }
        T &operator[](int i){
                return v[i];
        }
        operator const array<T>(){

        }
};



int main(){
        array<box<>,2> a;
        double i = a[0]=a[1]=1;
        const array<box<int> > b= a;
        b[0] = b[1] = 2;
        std::cout<<b[0]<<std::endl;
}
