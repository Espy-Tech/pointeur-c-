#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "SIZE: ";
    cin >> size;

    int *tab = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "A[" << i << "] : ";
        cin >> tab[i];
    }

    cout << "Hello World";

    delete [] tab;
    return 0;
}
