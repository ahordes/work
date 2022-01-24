#include <iostream>
#include <vector>
using namespace std; 

auto srd(vector<float> dermo_ebuchee) -> float
{
    float suma = 0;
    
    for (int i=0; dermo_ebuchee.size()>i; i++)
    {
        suma+=dermo_ebuchee[i];
    }
    
    float average = suma/dermo_ebuchee.size();
    return average;
}

int main()
{
    vector<float> dermo_ebuchee{ 1, 2, 4, 7,3};
    
    cout << srd(dermo_ebuchee);
    return 0;
}