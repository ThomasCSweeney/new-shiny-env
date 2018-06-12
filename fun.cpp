//#include <cstdio>
#include <iostream>
#include <functional>
#include <cstddef>

using namespace std;

void static_var_test()
{
    static long val = 0;
    val++;
    printf("%u", val);
}

struct A {
    int val;
};

A arr[2];

int main(int argc, char* argv[])
{
    const A * const p1 = [&](int x){
        if(x > 0){
            return &arr[0];
        }else{
            return (A*) nullptr; // maybe use static cast?
        }
    }(0);

    const A * const p2 = [&](int x){
        if(x > 0){
            return &arr[0];
        }else{
            return (A*) nullptr; // maybe use static cast?
        }
    }(1);

    if(p1 != nullptr)
        cout << "Error -- Not Null!!\n";
    else
        cout << "Successfully null!!\n";

    if(p2 != nullptr)
        cout << "Success -- Not Null!!\n";
    else
        cout << "Error -- null!!\n";
    //int b = 1;
    //int i = b = 2;
    //printf("%u\n", i); // prints 2
    // for(size_t i = 0; i < 2; ++i)
    // {
    //     static_var_test(); // prints 1 for first loop, then prints 2 for second loop
    // }
}