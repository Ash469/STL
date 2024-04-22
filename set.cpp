/*Contain unique elements
Implemented using BST
Elements are in sorted order
Random Access is not possible
we have use itetror for this.*/
#include <iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
set<int> s;
//Custom Comparator
//set<int,greater<int>>s;//descending order
s.insert(1);
s.insert(2);
s.insert(2);
s.insert(3);
for(auto it:s){
    cout<<it<<" ";
}
cout<<endl;
//print in reverse order
for(auto i=s.rbegin();i!= s.rend();i++){
    cout<<*i<<" ";
}
cout<<endl;
cout<<*s.lower_bound(2)<<endl;
cout<<*s.upper_bound(2)<<endl;//greater than 
s.erase(3);

s.erase(s.begin());
for(auto it:s){
    cout<<it<<" ";
}

}