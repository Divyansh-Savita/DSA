#include<iostream>
using namespace std;
#include<vector>
int main(){
    int m;cin>>m;
    int n;cin>>n;
    int p;cin>>p;
    int q;cin>>q;
    if(n==p){
    vector<vector<int>> a(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<int>> b(p, vector<int>(q));
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }

    vector<vector<int>> resultant(m,vector<int>(q));
    
    for(int i=0;i<m;i++){
        
        for(int j=0;j<q;j++){

            resultant[i][j]=0;
            for(int k=0;k<n;k++){
            resultant[i][j]+=a[i][k]*b[k][j];}
        }
    }cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<resultant[i][j]<<" ";
        }
    }cout<<endl;
}else{
    cout<<"mutiplication not happened";
}return 0;
}