#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void sortArraythrough2pass(vector<int>&v){
    int no0=0;
    int no1=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0)no0++;
        else no1++;
    }
    // for(int i=0;i<no0;i++){
    //     v[i]=0;
    // }for(int i=no0;i<v.size();i++){
    //     v[i]=1;
    // }
    for(int i=0;i<v.size();i++){
        if(i<no0)v[i]=0;
        else v[i]=1;
    }
}
void sortArraythrough1pass(vector<int>&v){
    int left=0,right=v.size()-1;
    while(left<right){
        if(v[left]==0){left++;}
        if(v[right]==1){right--;}
        if(v[right]!=1){
            v[right]=1;
            right--;
        }
        if(v[left]!=0 ){
            v[left]=0;
            left++;
            
        }
        
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
    // sortArraythrough2pass(v1);
    sortArraythrough1pass(v1);
    display(v1);
    
}