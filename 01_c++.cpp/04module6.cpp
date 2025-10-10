#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows: ";
    cin>>n;
    // int m;
    // cout<<"no of columns: ";
    // cin>>m;
// ***
// ***
// ***
// ***
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<"*";
    //     }cout<<endl;
        
    // }

// 1234
// 1234
// 1234
// 1234
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j;
    //     }cout<<endl;
    // }

// *
// **
// ***
// ****
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }

// ****
// ***
// **
// *
    // for(int i=n;i>0;i--){ //my solution
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }    

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }

// 1
// 12
// 123
// 1234
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
            
    //     }cout<<endl;
    // }

// 1
// 13
// 135
// 1357
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<a;
    //         a+=2;
    //     }a=1;cout<<endl;
    // }

// ABCD
// ABCD
// ABCD
// ABCD
    // char A='A';//mysolution
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<A;
    //         A++;
    //     }A='A';cout<<endl;
    // }

// ABCD
// ABCD
// ABCD
// ABCD
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<(char)(j+64);
    //     }cout<<endl;
    // }

// A
// AB
// ABC
// ABCD
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<(char)(j+64);
    //     }cout<<endl;
    // }

//   *  
//   *
// *****
//   *
//   *
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==((n/2)+1)){
    //             cout<<'*';
    //         }else{
    //         if(j==((n/2)+1)){
    //             cout<<'*';
    //         }else{
    //             cout<<' ';
    //         }}
            
    //     }cout<<endl;
    // }

// *   *
//  * *
//   *
//  * *
// *   *
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==j || ((i+j)==(n+1))){
    //         cout<<'*';
    //         }else{
    //             cout<<' ';
    //         }
    //     }cout<<endl;
    // }

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<a<<' ';
    //         a++;
    //     }cout<<endl;
    // }

// 1
// 01
// 101
// 0101
    // bool flag;
    // for(int i=1;i<=n;i++){
    //     if(i%2==0){
    //             flag=false;
    //         }
    //         else{
    //             flag=true;
    //         }
    //     for(int j=1;j<=i;j++){
    //         cout<<flag;
    //         if(flag){
    //             flag=false;
    //         }else flag=true;
    //     }cout<<endl;
    // }

// ---*
// --**
// -***
// ****
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<'*';
    //     }cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            if((i+j)>=(n+1)){
                cout<<'*';
            }else{cout<<" ";}
        }cout<<endl;
    }
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<k;
            
    //     }cout<<endl;
    // }
}