#include <iostream>
using namespace std;
#include <math.h>


void prosze_o_cos()
{
    int a;
    
    cout << "Prosze podac liczbe: "<< endl;
    cin >> a;
if (a>0) 
{
    cout << 1  << endl;
}
if(a==0)
{
    cout << 0 << endl;
}
if (a<0)
{
   cout << -1 << endl;
}
}


int main ()
{
prosze_o_cos();
return 0;
}
