#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

auto main() -> int
{
    string mpt;
    
    cout << "dej mi dwi licbzy " << "\n";
    while ( getline(cin, mpt) && mpt != "stop")
    {
        vector<string> elements;
        string item;
        stringstream ss(mpt);
        
        while (getline(ss, item, ' '))
        {
            elements.push_back(item);
        }
        
        sort(elements.begin(),  elements.end());
        if (elements.size() >1)

        {
            char start = elements[0][0];
            char stop = elements[1][0];
            
            while (start <= stop)
            
            {
                cout << start; 
                start++;
            }
        }
        
        else if (elements.size() == 1)
        
        {
            cout << elements[0];
        }


        cout << endl;
    }
    
    return 0;
}
//eto pizdec ~(^_0)~