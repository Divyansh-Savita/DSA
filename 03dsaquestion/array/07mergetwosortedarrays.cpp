#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
vector<int> mergetwoarrays(vector<int>&a,vector<int>&b){
    vector<int>c(a.size()+b.size());
  int ath=0,bth=0;
  for(int i=0;i<c.size();i++){if(ath<a.size() && bth<b.size()){
    if(a[ath]<b[bth]){c[i]=a[ath];ath++;}
    else if(b[bth]<a[ath]){c[i]=b[bth];bth++;}}
    else if(ath<a.size()){c[i]=a[ath];ath++;}
    else if(bth<b.size()){c[i]=b[bth];bth++;}
  }
  return c;
    
}
vector<int> mergetwoarraysnotmine(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
            
        }else{
            res[k]=arr2[j];
            j++;
        }k++;
    }
    if(i==n){
        while(j<=m-1){
            res[k]=arr2[j];
            k++;j++;
        }
    }if(j==m){
        while(i<=n-1){
            res[k]=arr1[i];
            k++;i++;
        }
    }
    return res;
    
}
vector<int> mergeTwoArraysbychatgpt(vector<int>& a, vector<int>& b) {
    int n = a.size(), m = b.size();
    vector<int> c;
    c.reserve(n + m);  // pre-allocate space (efficient)

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }

    while (i < n) c.push_back(a[i++]);
    while (j < m) c.push_back(b[j++]);

    return c;
}
int main(){
    vector<int> v1={1,4,5,8};
    vector<int> v2={2,3,6,7,10};
    // vector<int> v3(v1.size()+v2.size());
    // display(v3);
    
    
    // display(v1);
    
    // vector<int>v3=mergetwoarrays(v1,v2);
    // vector<int>v3=mergetwoarraysnotmine(v1,v2);
    vector<int>v3=mergeTwoArraysbychatgpt(v1,v2);
    display(v3);
    
}