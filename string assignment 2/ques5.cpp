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

    stringstream ss(s);
   
    string word;

    vector<string> v;

    while(ss>>word) {
        v.push_back(word);
    }

    
    int n=v.size();

    sort(v.begin(),v.end());

    cout << "word that is lexicographically maximum is " << v[n-1];


    

    

    return 0;
}

