#include<bits/stdc++.h>
using namespace std;

int main(){
//     Q4. Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
   int sumEven=0,sumOdd=0,difference=0;
   vector<int>a={1,2,3,4,5,6};
   for(int i=0;i<a.size();i++){
    if(a[i]%2==0){
        sumEven+=a[i];
    }else{sumOdd+=a[i];}
   }
   difference=sumEven-sumOdd;
   cout<<difference;
}