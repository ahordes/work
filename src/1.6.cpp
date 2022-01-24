#include <iostream>
using namespace std;
#include <math.h>


void prosze_o_cos()
{
    int a,b;
   cout << "prosze podac liczby" << endl;
   cin >> a >> b ; 
   if (a > b)
          {
          cout << a << " > " << b << endl;
          }
    else if(a < b)
           {
           cout << a << " < " << b << endl;
           }

else
      {
        cout << a << " == " << b << endl;
      }
}

int main ()
{
prosze_o_cos();
return 0;
}
