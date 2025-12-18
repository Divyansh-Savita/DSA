#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}

vector<int> nextgreatestelement(vector<int>&v1){
    vector<int>v2;
    
    for(int i=0;i<v1.size();i++){
        int max=INT_MIN;
        
        for(int j=i+1;j<=v1.size()-1;j++){
            if(v1[j]>max){max=v1[j];}
            
        }if (max == INT_MIN) v2.push_back(-1);
        else v2.push_back(max);
    }return v2;
}
int main(){
    vector<int> v1={7,5,4,8};
    
    vector <int>v2=nextgreatestelement(v1);
    display(v2);
    
    
}