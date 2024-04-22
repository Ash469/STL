//Question:-Give N strings ,print unique strings in lexicographically order with their frequency
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}