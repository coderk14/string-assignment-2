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
    int answer=0;
    int count =0;
    for(int i=0;i<n;i++) {
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            count ++;
        }
        else{
            answer=count*(count+1)/2;
            count=0;
        }
    }
    answer=count*(count+1)/2;

    cout << answer;

    return 0;
}

