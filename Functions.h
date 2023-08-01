#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_
#include <iostream>
#include <cstring>

class PointerFuncts
{
    public:
        PointerFuncts();

        ~PointerFuncts(void);

        void Add(int a, int b, int &result);
        //Add two numbers and return the result through a reference pointer

        void Factorial(int a, int &result);
        //Find factorial of a number and return that through a reference parameter

        void Swap(int &a, int &b);
        //swap two numbers through reference arguments
};

#endif

