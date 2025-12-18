#include<bits/stdc++.h>
using namespace std;

int main(){
//     Q3. Find the first non-repeating element in the array .
   vector<int>a={1, 4, 6, 2, 3, 8};
   int element;
   for(int i=0;i<=a.size()-1;i++){
    bool flag=true;
    for(int j=i+1;j<a.size();j++){
        if(a[i]==a[j]){flag=false;break;}
    }if(flag){element=a[i];break;}
   }
   cout<<element;
}