#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <climits>

using namespace std;

int main() {

    string s;

    cout << "enter a string" << endl;
    getline(cin,s);
    string t;
    cout << "enter another string" << endl;
    getline(cin,t);

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) {
        cout << "yes";
    }
    else cout << "no";


    

    

    return 0;
}

