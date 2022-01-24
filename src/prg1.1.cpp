  
#include <iostream> 
using namespace std;

bool czy_pierwsza(int n)
{
        if(n <= 1)
                return false; 

        for(int i=2;i<n;i++) 
                if(n%i==0)
                        return false;   
        
        return true;
        
}

void f_rysowanie(int n)
{
    for (int l = 0; l < 2; ++l)
    {

        for (int i = 2; i <= n; ++i)
        {
            if(czy_pierwsza(i))
                cout << i << " ";
        }
        cout << endl;
    }
}


int main() {
    
        int n =20;
        f_rysowanie(n);
        

    return 0;
}
