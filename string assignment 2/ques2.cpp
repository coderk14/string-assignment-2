#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <climits>

using namespace std;

int main() {

    string str;

    cout << "enter a string" << endl;
    getline(cin,str);
    cout << endl;

    int n=str.length();
    int x=stoi(str);

    vector <int> v(n,0);
    for(int i=n-1;i>=0;i--) {
        int y=x%10;
        v[i]=y;
        x=x/10;
    }

    for(int i=0;i<n;i++) {
        cout << v[i];
    }

    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0;i<n;i++) {
        if(v[i]>max){
        smax=max;
        max=v[i];
        }
        
    }

    cout << endl; 

    cout << "second max number in the string is " << smax;

    return 0;
}

