template<typename T>
class is_ptr{
public:
    static const bool value = false;
};

template<typename T>
class is_ptr<T*>{
public:
    static const bool value = true;
};

template<typename T>
class remove_ptr{
public:
    typedef T value_type ;
};

template<typename T>
class remove_ptr<T*>{
public:
    typedef T value_type ;
};

template <bool v>
struct static_assert_test;

template<>
struct static_assert_test<true>
{
    enum {value = 1};
};

#define STATIC_ASSERT(T) static_assert_test<T>::value

struct A {};

int main() {
    STATIC_ASSERT(is_ptr<A*>::value);
    STATIC_ASSERT(is_ptr<remove_ptr<A*>::value_type*>::value);
    //STATIC_ASSERT(is_ptr<remove_ptr<A*>::value_type>::value);
}
