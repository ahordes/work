using namespace std;
#include <iostream>
#include <string>

int main(){
    string name;
    string scdname;

    cout << "prosze podac imie" << endl;
    cin >> name;

    cout << "prosze podac drugie imie" << endl;
    cin >> scdname;

    if(name.size() > scdname.size()){
        cout << "pierwsze podane imie jest dluzsze" << endl;
    }
    if(name.size() < scdname.size()){
        cout << "drugie podane imie jest dluzsze" << endl;

    }
    if(name.size() == scdname.size()){
        cout << "imiona sa jednakowej dlugosci 0_0 " << endl;
    }
}