#include <iostream>

using namespace std;

int zamiana(int* a, int* b)
{
    if (*a > *b)
    {
        int c = *a;
        *a = *b;
        *b = c;
        return 0;
    }
    else {
        cout << "druga zmienna jest wieksza" << endl;
        return -1;
    }
}

int main(void)
{
    int a, b;
    cout << "podaj dwie liczby calkowite" << endl;
    cin >> a >> b;
    
    cout << "Przed  zamiana:\n" << "a = " << a << endl << "b = " << b << endl << endl;
    if(zamiana(&a, &b) == 0)
        cout << "Po  zamianie:\n" << "a = " << a << endl << "b = " << b << endl;
    else return 0;

    return  0;
}