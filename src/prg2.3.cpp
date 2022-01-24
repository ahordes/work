#include <bits/stdc++.h>
#define n 3

using namespace std; 

int idc(int vect_a[], int vect_b[])
{
    int a = 0;
    
    for (int i = 0; i < n; i++)
 
        a = a + vect_a[i] * vect_b[i];
    return a;
}

int main()
{
    int vect_a[] = { 3, -5, 4 };
    int vect_b[] = { 2, 6, 5 };
    cout << "iloczyn skalarny ";
    cout << idc(vect_a, vect_b) << endl;
    
    return 0;
}
//nixya ne ponyatno no ochen` interesno