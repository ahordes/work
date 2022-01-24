#include <iostream>
#include <vector>

using namespace std; 

auto contain_all(vector<int> wektor, vector<int> vektorr) -> bool
{
    int kornioszon;
    for (int i=0; i<wektor.size(); i++)
    {
        for(int j=0; j<vektorr.size(); j++)
        {
            if(wektor[i]==vektorr[j])
            {
                kornioszon++;
            }
        }
    }
    if (kornioszon == vektorr.size())
        return true;
    else
        return false;
}

auto main() ->int
{
    vector<int> wektor = {1,2,3};
    vector<int> vektorr = {2,3};
    
    if(contain_all(wektor,vektorr) == true)
        cout << "drugi jest pozbiorem pierwszego" << "\n";
    else
        cout << "ni jest :c" << "\n";
        
    return 0;
}