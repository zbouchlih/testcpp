#include <iostream>

using namespace std;


int main()
{

    int b = 85;
    int a = 6;

    int somme = a + b;

    cout << a << " + " << b << " = "  << somme  << endl;


    cout << "adresse de a dans la mémoire : " << &a << endl;
    cout << "adresse de b dans la mémoire : " << &b << endl;

    return 0;
}