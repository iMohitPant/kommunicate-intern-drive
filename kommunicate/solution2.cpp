#include<bits/stdc++.h>

using namespace std;

int main () {
    string s ; 
    getline(cin, s); 
    string res="";
    string a="";
    for(auto &x:s) {
        if(x!=' ')
            a += x;
        else {
            reverse(a.begin(), a.end());
            res += a + " ";
            a = "";
        }
    }
    reverse(a.begin(), a.end());
    res += a;
    cout<<res<<"\n";
    
    return 0;
}