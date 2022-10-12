#include<iostream>

using std::cout;

int calculamenor(int[], int);

int main( )
{
    int vetor[]= {5, 4, 1, 2, 3};
    cout<< calculamenor(vetor, 5);
    return 0;
}

int calculamenor(int A[], int n)
{
    int i, menor;
    menor = A[0];
    for (i=1; i<n; i++)
    {
        if (A[i] < menor)
            menor = A[i];
    }
    return menor;
}