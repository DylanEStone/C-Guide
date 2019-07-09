#include<iostream>

int main()
{
    int a = 12, b = 14, *c;
    c = &a;
    std::cout << *c << std::endl;
    c = &b;
    std::cout << *c << std::endl;

    // 2.20
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << *p1 << std::endl;

    // 2.21
    int bla = 0;
    double* dp = &bla;
    int *ip = bla;
    int *p = &bla;
}