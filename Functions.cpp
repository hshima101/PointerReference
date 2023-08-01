#include <iostream>
#include <cstring>
#include "Functions.h"

PointerFuncts::PointerFuncts()
{
    int a = 10;
    int b = 5;
    int result = 0;

    Add(a, b, result);
    std::cout<<"Add result:"<<result<<std::endl;

    Factorial(a, result);
    std::cout<<"Factorial result"<<result<<std::endl;

    Swap(a, b);
};

PointerFuncts::~PointerFuncts(void)
{

};

void PointerFuncts::Add(int a, int b, int &result)
{
    result = a + b;
    std::cout<<result<<std::endl;
};

void PointerFuncts::Factorial(int a, int &result)
{
    int answer = result;
    int loop = 1;

    for(int i = 1; i < a; i++)
    {
        loop *= i;
        std::cout<<loop<<std::endl;
    }

    result = loop;
};

void PointerFuncts::Swap(int &a, int &b)
{
    std::cout<< a << " " << b <<std::endl;

    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    std::cout<< a << " " << b <<std::endl;
};