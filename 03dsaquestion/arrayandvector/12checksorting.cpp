#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int>a={4,5,6,7,8};
   bool flag=true;
   for(int i=0;i<a.size()-1;i++){
    if(a[i]>a[i+1]){flag=false;break;}
   }
   cout<<flag;
}