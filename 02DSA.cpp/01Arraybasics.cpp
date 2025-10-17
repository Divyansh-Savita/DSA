#include<iostream>
using namespace std;
int main(){
    // int arr[7]={1,3,7,4,9,87,23};
    // for(int i=0;i<=6;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<=6;i++){
    //     cout<<arr[i]<<' ';
    // }
    
    //marks less than 35
    // int arr[5];
    // for(int i=0;i<=4;i++){
    //     cin>>arr[i];
    // }for(int i=0;i<=4;i++){
    //     if(arr[i]<35)cout<<arr[i]<<endl;
    // }

    //size and sizeof
    // int arr[]={1,2,3,4,5};
    // cout<<size(arr);
    // int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n;

    //memory allocation in arrays-important
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;

    //sum of elements
    // int sum=0;
    // for(int i=0;i<=(size(arr)-1);i++){
    //     sum+=arr[i];
    // }
    // cout<<sum;

    //linear search--find the element x
    // int n;cin>>n;
    // int arr[n];
    // int x;
    // cout<<"gimme the arrays";
    // for(int i=0;i<=n-1;i++){
    //     cin>>arr[i];
    // }
    // cout<<"now gimme which value i need to find";
    // cin>>x;
    // //search
    // //check mark
    // bool flag=false;
    // for(int i=0;i<n;i++){
    //     // if(x==arr[i]){cout<<"present";
    //     // break;}
    //     if(arr[i]==x)flag=true;
    // }
    // if(flag)cout<<"element found";
    // else cout<<"404 error";

    //find max value in array
    // int arr[5]={99,100,100000,5354,53400};
    // int maxx=arr[0];
    // int minn=arr[0];
    // for(int i=0;i<=size(arr)-1;i++){
    //     if(maxx<arr[i])maxx=arr[i];
    //     if(minn>arr[i])minn=arr[i];
    // }
    // cout<<maxx<< " "<<minn;

    //find the 2nd largest in the array
    int arr[5]={100,101,102,103,104};
    int maxx=arr[0];
    int minn=arr[0];
    for(int i=0;i<=size(arr)-1;i++){
        if(maxx<arr[i])maxx=arr[i];
        
    }
    // cout<<maxx;
    int secondmax=arr[0];
    for(int i=0;i<=size(arr)-1;i++){
        if(maxx==arr[i])continue;
        if(secondmax<arr[i])secondmax=arr[i];
    }
    cout<<secondmax;
}