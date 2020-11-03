#include <iostream>

using namespace std;

void zamiana(int &a, int *b)
{
        int c = a;
        a = *b;
        *b = c;
}

int main(void)
{
    int a ,b;
    cout << "podaj dwie liczby calkowite" << endl;
    cin >> a >> b;

    cout << "Przed  zamiana:\n" << "a = " << a << endl << "b = " << b << endl << endl;
    zamiana(a, &b);
    cout << "Po  zamianie:\n" << "a = " << a << endl << "b = " << b << endl;
    
    return  0;
}