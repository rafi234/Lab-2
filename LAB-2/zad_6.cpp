#include <iostream>

using namespace std;

template <class T>
void swap(T **a, T **b)
{
  T *temp = *a;
  *a = *b;
  *b = temp;
}

int main(void)
{
  long tab1[4], tab2[4];
  for (long i = 0, j = 4; i < 4; ++i, --j)
    for (int k = 0; k < 4; ++k)
    {
      tab1[i] = i;
      tab2[i] = j;
    }
  for (int i = 0; i < 4; ++i)
    cout << i << " = " << tab1[i] << "  " << i << " = " << tab2[i] << endl;

  cout << endl;
  long *wsk_a = tab1;
  long *wsk_b = tab2;
  swap(&wsk_b, &wsk_a);

  for (int i = 0; i < 4; ++i)
    cout << i << " = " << wsk_a[i] << "  " << i << " = " << wsk_b[i] << endl;
  return 0;
}