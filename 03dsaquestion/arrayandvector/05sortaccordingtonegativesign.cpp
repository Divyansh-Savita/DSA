#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void sortArrayaccordingtosign(vector<int>&v1){
    int left=0;
    int right=v1.size()-1;
    while(left<right){
        if(v1[left]>0 &&v1[right]<0){
            int temp=v1[left];
            v1[left]=v1[right];
            v1[right]=temp;
            left++;
            right--;
        }
        if(v1[left]<0)left++;
        if(v1[right]>0)right--;
    }
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(-2);
    v1.push_back(3);
    v1.push_back(-4);
    v1.push_back(-5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(-8);
    display(v1);
    
    sortArrayaccordingtosign(v1);
    display(v1);
    
}