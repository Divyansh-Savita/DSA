#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;cin>>m;
    int n;cin>>n;
    vector<vector<int>>arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //2d wave patter 1 =>123654789
    // for(int i=0;i<m;i++){
    //     if(i%2==0){
    //         for(int j=0;j<n;j++){
    //             cout<<arr[i][j];
    //         }
    //     }else{for(int j=n-1;j>=0;j--){
    //             cout<<arr[i][j];
    //         }
    //     }
    // }

    // 2d wave patter 2 =>789654123
    // for(int i=m-1;i>=0;i--){
    //     if(i%2==0){
    //         for(int j=0;j<n;j++){
    //             cout<<arr[i][j];
    //         }
    //     }else{
    //         for(int j=n-1;j>=0;j--){
    //             cout<<arr[i][j];
    //         }
    //     }
    // }

    // 2d wave patter 2 =>147852369
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[j][i];
            
        }}else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[j][i];
            }}
        
    }}