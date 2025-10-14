#include<bits/stdc++.h>
using namespace std;
void starTriangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<'*';
        }cout<<endl;
    }
}
int facto(int x){
    if(x==0 || x==1)return 1;
    return x*facto(x-1);
}
int permutations(int n,int r){
    int result= (facto(n))/(facto(n-r));
    return result;
}
int combinations(int n,int r){
    int result= (facto(n))/(facto(r)*facto(n-r));
    return result;
}
void fun(){
    cout<<"good morning"<<endl;
    cout<<"Have a nice day"<<endl;
}
void swap(int &a, int &b){
    // int temp = a;
    // a = b;
    // b = temp;
    
    a=a+b;
    b=a-b;
    a=a-b;
}
int main(){
    // fun();
    // fun();
    // fun();

    // starTriangle(3);
    // starTriangle(4);
    // starTriangle(5);

    // cout<<sqrt(9);

    //permutation->(n!)/((n-r)!)
    //combination-> (n!)/((r!)*(n-r)!)
    // cout<<permutations(7,2)<<endl;
    // cout<<combinations(7,2);

    //pascal triangle
    // int n; cin>>n;
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<combinations(i,j);
    //     }cout << endl; 
    // }

    //swap 2 numbers
    int a=5,b=7;
    swap(a,b);
    cout << "a = " << a << ", b = " << b << endl;
}