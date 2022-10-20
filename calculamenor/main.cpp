#include<iostream>

using std::cin;
using std::cout;

int calculaMenor(int[], int);

int main( )
{
    bool op;
    int vetor[]= {5, 4, 1, 2, 3}, vetor2[]= {50, 15, 20, 39, 27}, v;
    cin>> op;
    (op)? v = calculaMenor(vetor, 5) : v = calculaMenor(vetor2, 5);
    cout<<v<<'\n';
    return 0;
}

int calculaMenor(int A[], int n)
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