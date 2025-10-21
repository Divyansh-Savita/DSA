#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void sortArrayof0s1s(vector<int>&v){
    int no0=0;
    int no1=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0)no0++;
        else no1++;
    }
    for(int i=0;i<no0;i++){
        v[i]=0;
    }for(int i=no0;i<v.size();i++){
        v[i]=1;
    }
}
int main(){
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(0);
    display(v1);
    sortArrayof0s1s(v1);
    display(v1);
    
}