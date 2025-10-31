#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // int arr[3][3]={1,2,3,4,5,6,7,8,9}; both are same
    // cout<<arr[1][2];
    
    // array<array<int, 3>, 3> arr ;
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr.size();j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // for(int i=0;i<=2;i++){
    //     for(int j=0;j<=2;j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }

    //taking input
    
    // int m;cout<<"gimme no of rows";
    // cin>>m;
    // int n;cout<<"gimme no of columns";
    // cin>>n;
    // int arr[m][n];
    // for(int i=0;i<=m-1;i++){
    //     for(int j=0;j<=n-1;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i=0;i<=m-1;i++){
    //     for(int j=0;j<=n-1;j++){
    //         cout<<arr[i][j]<< " ";
    //     }cout<<endl;
    // }

    //roll number,marks
    // int arr[2][4];
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<4;j++){
    //         if(i==0){
    //             cout<<"first gimme roll number";
    //             cin>>arr[i][j];
    //         }else{cout<<"now gimme marks";cin>>arr[i][j];}
    //     }
    // }
    // for(int i=0;i<2;i++){
    //     if(i==0){cout<<"Roll number: ";}
    //         else{cout<<"Marks: ";}
    //     for(int j=0;j<4;j++){
            
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }

    //largest element
    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // int maximum=INT_MIN;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(arr[i][j]>maximum){maximum=arr[i][j];}
    //     }
    // }
    // cout<<maximum;

    //sum of all elements
    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // int sum=0;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         sum+=arr[i][j];
    //     }
    // }
    // cout<<sum;

    //addition in matrices
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // int brr[3][3]={1,2,3,4,5,6,7,8,9};
    // int crr[3][3];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         crr[i][j]=arr[i][j]+brr[i][j];
    //     }
    // }

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]+brr[i][j]<<" ";
    //     }cout<<endl;
    // }

    //if wanna store sum of both in one array
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         brr[i][j]=arr[i][j]+brr[i][j];
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<brr[i][j]<<" ";
    //     }cout<<endl;
    // }

    //transpose of a matrix
    int brr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            brr[i][j]=arr[j][i];
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }
}