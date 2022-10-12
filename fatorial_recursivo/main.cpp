#include<iostream>
using std::cout;

int fatorial(int n);

int main()
{
    int num = 5;
    cout<< fatorial(num);
    return 0;
}

int fatorial(int n)
{
    int result;
    if (n == 0 || n == 1)
        result = 1;
    else
        result = n * fatorial(n-1);
    return result;
}