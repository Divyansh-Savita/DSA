#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }cout<<endl;
}
void reversePart(int i ,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;j--;
    }

}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(7);
    display(v1);
    // reversePart(2,4,v1);
    int n=v1.size();
    int k;
    cin>>k;cout<<endl;
    k=k%n;
    display(v1);
    reversePart(0,n-k-1,v1);
    reversePart(n-k,n-1,v1);
    reversePart(0,n-1,v1);
    display(v1);

}