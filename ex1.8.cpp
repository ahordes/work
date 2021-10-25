#include <iostream>
using namespace std;
#include <math.h>



void prosze_o_cos()
{
    int a,b,c;

    cout << "Prosze podac liczby "<< endl;
    cin >> a >> b >> c ;
    if (a<b && a>c)
    {
   cout << b << " Jest najwieksza liczba " << endl;
    }
else if(a<c && c>b)
    {
    cout << c << " Jest najwieksza liczba " << endl;
    }
else
    {
    cout << a << " Jest najwieksza liczba " << endl;
    }


}

int main ()
{
prosze_o_cos();
return 0;
}
