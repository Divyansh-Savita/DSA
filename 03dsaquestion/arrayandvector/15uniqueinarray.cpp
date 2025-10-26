#include<bits/stdc++.h>
using namespace std;

int main(){
//     Q6. Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
   
   vector<int>a={2,2,1,3,1,20,20};
  int unique;
  for(int i=0;i<a.size();i++){
    for(int j=i+1;j<a.size();j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
   }
   for(int i=0;i<a.size()-1;i++){
    if(a[i]!=a[i+1] && a[i]!=a[i-1]){cout<<a[i]<<" ";}
   }

}