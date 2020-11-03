#include <iostream>

using namespace std;

template <class T>
void fun(T & a, T & b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int a, b;
    char c, d;
    string e, f;

    cout << "podaj dwie liczby calkowite" << endl;
    cin >> a >> b;
    cout << "przed zamiana " << a << "  " << b << endl;
    fun(a, b);
    cout << "po zamianie " << a << "  " << b << endl;

     cout << "podaj dwa znaki" << endl;
    cin >> c >> d;
    cout << "przed zamiana " << c << "  " << d << endl;
    fun(c, d);
    cout << "po zamianie " << c << "  " << d << endl;

     cout << "podaj dwa slowa" << endl;
    cin >> e >> f;
    cout << "przed zamiana " << e << "  " << f << endl;
    fun(e, f);
    cout << "po zamianie " << e << "  " << f << endl;

    return 0;
}