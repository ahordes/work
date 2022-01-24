#include <iostream>
using namespace std;
auto amin(int a[], int n) -> int
{
  int min = 999;
  for (int i = 0; i < n; ++i)
{
  if(min > a[i])
{
  min = a[i];
}
}
  return min;
}

int main()
{
   int a[] = { 4 , 1 , 8 , 8 , 3 , 2 , 7 , 96 , 69 , 38 };
   int n = sizeof(a) / sizeof(a[0]);
   cout << "najmnijesza " << amin(a, n);
   return 0;
}
