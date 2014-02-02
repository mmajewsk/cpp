#include <iostream>

using namespace std;

struct A {  };

template <typename T>
struct is_ptr
{
        static const bool value=false;
};

template <typename T>
struct is_ptr<T*>
{
        static const bool value=true;
};


template <typename T>
struct remove_ptr
{
        typedef T value_type;
};

template <typename T>
struct remove_ptr<T*>
{
        typedef T value_type;
};



template <bool v>
struct static_assert_test;

template<>
struct static_assert_test<true>
{
        static const bool value=true;
};

#define STATIC_ASSERT(T) static_assert_test<T>::value

int main()
{
    STATIC_ASSERT(is_ptr<A*>::value); // OK
    STATIC_ASSERT(is_ptr<remove_ptr<A*>::value_type*>::value); //OK
  //  STATIC_ASSERT(is_ptr<remove_ptr<A*>::value_type>::value); //B≥πd, bo value_type to nie wskaünik tylko obiekt (?)
}
