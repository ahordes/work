#include <iostream>
using namespace std;
auto amax(int a[], int n) -> int
{
    int max =0;
    for (int i =0; i<n; i++)
    {
    if(max<a[i])
    {
     max = a[i];
    }
    }
    return max;
}

int main()
{
    int a[] = { 14 , 88 , 13 , 22 , 79 , 69 , 70 , 31 , 82 , 47 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << "index najwiekszej liczby " << amax(a, n);
    return 0;
}
