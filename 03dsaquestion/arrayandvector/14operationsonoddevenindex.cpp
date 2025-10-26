#include<bits/stdc++.h>
using namespace std;

int main(){
//     Q5. Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
   vector<int>a={1,2,3,4,5,6};
   for(int i=0;i<a.size();i++){
    if(a[i]%2==0){
        a[i]+=10;
    }else{a[i]*=2;}
   }
   for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
   }
}