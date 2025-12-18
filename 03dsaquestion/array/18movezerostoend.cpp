#include<bits/stdc++.h>
using namespace std;

int main(){
//     Q3. Find the first non-repeating element in the array .
   vector<int>a={0, 6, 0, 7, 6, 0, 9, 1};
   int j=0;
   for(int i=0;i<=a.size()-1;i++){
    if(a[i]!=0 ){
        int temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        j++;
    }
}
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
}