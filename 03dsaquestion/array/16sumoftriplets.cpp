#include<bits/stdc++.h>
using namespace std;

int main(){
//     Q1. Count the number of triplets whose sum is equal to the given value x.
   
   vector<int>a={1, 4, 6, 2, 3, 8};
   int count=0;
   int target=9;
  for(int i=0;i<a.size()-2;i++){
    for(int j=i+1;j<a.size()-1;j++){
        for(int k=j+1;k<a.size();k++){
            if(a[i]+a[j]+a[k]==target){
                count++;
            }
        }
    }
  }cout<<count;
}