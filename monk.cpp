#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    multiset<long long> bags;
    for (int  i = 0; i < n; i++)
    {
       long long temp;
        cin>>temp;
        bags.insert(temp);
    }
 long long total=0;
    for(int i=0;i<k;++i){
       auto temp=*(--bags.end());
    
        total+=temp;
        bags.insert(temp/2);
        bags.erase(temp);
      
        
    }
    cout<<total<<endl;
    return 0;
}