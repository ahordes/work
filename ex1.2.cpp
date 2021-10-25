#include <iostream>
using namespace std;



void prosze_o_cos()
{
    int a, b , c;
    
    cout << "Prosze podac liczby dla dodawania: ";
    cin >> a >> b ;

    c=b+a;


    cout << "Resultat  " << c << endl ;     

    
}


int main ()
{
prosze_o_cos();
return 0;
}
