#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {

    string str;

    cout << "enter a string" << endl;
    getline(cin,str);
    cout << endl;

    string t;
    t=str;
    reverse(t.begin(),t.end());
   

    str=str+t;

    cout << str << endl;

    return 0;
}

