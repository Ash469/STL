/*Can contain duplicates
Implemented using balanced BST
Elements are in sorted order
Random Acess not possible*/
#include <iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    multiset<int>::iterator it;
    it=s.find(3);// return size when digit is not present
    cout<<*it<<endl;
    cout<<*it<<endl;
    //s.erase(s.find(3)) //to delete only one
    s.erase(3);
    // s.erase(*s.begin());
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    //s.erase(*s.begin());
   cout<<*s.end()<<endl;
//    if(*s.begin()==1){
//     cout<<1;
//    }
}
/*Time Complexity:-
Insertion->0(logn)
Deletion->0(logn)
Lower/Uper_Bound->0(logn)
Print->0(nlogn)*/