#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int>a={4,5,9,7,3};
   vector<int>largest;
   
   
   for(int i=0;i<a.size();i++){
    for(int j=i+1;j<a.size();j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
   }
   for(int i=a.size()-3;i<a.size();i++){
    largest.push_back(a[i]);
   }
   for(int i=0;i<largest.size();i++){
    cout<<largest[i];
   }
   
}