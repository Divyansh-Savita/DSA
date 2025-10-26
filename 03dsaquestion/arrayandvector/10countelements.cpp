#include<bits/stdc++.h>
using namespace std;




int main(){
   int num;cin>>num;
   int count=0;
   vector<int>a={4,5,6,7,8};
   for(int i=0;i<a.size();i++){
    if(num<a[i]){count++;}
   }
   cout<<count;
}