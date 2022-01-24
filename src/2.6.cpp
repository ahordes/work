#include <iostream>
using namespace std;
#include <math.h>


int main ()
{
    int a,b,c,d,e;
   cout << "prosze podac liczby" << endl;
   cin >> a >> b >> c >> d >> e;    
    if (a > b)
          {
          cout << a << " > " << b << ", ";
          }
    else if(a == b)
           {
           cout << a << " = " << b << ", ";
           }
    else {
        cout << a << " < " << b;
    }
    if (a > c)
          {
          cout << a << " > " << c << ", ";
          }
    else if(a == c)
           {
           cout << a << " = " << c << ", ";
           }
    else {
        cout << a << " < " << c << ", ";
    } 
    if (a > d)
          {
          cout << a << " > " << d << ", ";
          }
    else if(a == d)
           {
           cout << a << " = " << d << ", ";
           }
    else {
        cout << a << " < " << d << ", "; 
    }
        if (a > e)
          {
          cout << a << " > " << e << ", ";
          }
    else if(a == e)
           {
           cout << a << " = " << e << ", ";
           }
    else {
        cout << a << " < " << e << ", ";
    }
    return 0;
}
