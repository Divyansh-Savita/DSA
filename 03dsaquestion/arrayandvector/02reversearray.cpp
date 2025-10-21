#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }cout<<endl;
}
int main(){
    //taking extra vector
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(7);
    // display(v1);
    // vector<int> v2(v1.size());
    // for(int i=0;i<v2.size();i++){
    //     v2[v1.size()-1-i]=v1[i];
    // }
    // display(v2);

    //without taking extra vector (by pointer)
    // int i=0;
    // int j=v1.size()-1;
    // int temp=0;
    display(v1);
    // while(i<j){
    //     temp=v1[i];
    //     v1[i]=v1[j];
    //     v1[j]=temp;
    //     i++;
    //     j--;
    // }
    // display(v1);

    // without taking extra vector (by pointer)
    for(int i=0, j =v1.size() - 1; i <= j; i++, j--){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
    }
    display(v1);
}