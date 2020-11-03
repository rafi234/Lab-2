#include <iostream>

using namespace std;

int* fun(int *tab, int a, int b)
{
    tab[0] = a * b;
    tab[1] = a + b;

    return tab;
}

int main(void)
{
    int tab[2], a, b;
    cout << "podaj dwie liczby calkowite" << endl;
    cin >> a >> b;
    fun(tab, a, b);
    cout << "\nIloczyn dwoch podanych liczb wynosi: " << tab[0] <<"\nSuma dwoch podanych liczb wynosi: " << tab[1] << endl;
    return 0;
}