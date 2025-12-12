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

    // for(int i=1;i<=n;i++){
        
    //     for(int j=1;j<=n;j++){
    //         if((i+j)>=(n+1)){
    //             cout<<'*';
    //         }else{cout<<" ";}
    //     }cout<<endl;
    // }
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<k;
            
    //     }cout<<endl;
    // }

//    ****
//   ****
//  ****
// ****
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<' ';
    //     }for(int k=1;k<=n;k++){
    //         cout<<'*';
    //     }cout<<endl;
    // }

//    *
//   ***
//  *****
// *******
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }for(int k=1;k<=2*i-1;k++){
    //         cout<<'*';
    //     }cout<<endl;
    // }

    //method 2-no of stars in each line and no of spaces in each line
    // int no_of_stars=1;
    // int no_of_spaces=n-1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=no_of_spaces;j++){
    //         cout<<" ";
    //     }no_of_spaces--;
    //     for(int k=1;k<=no_of_stars;k++){
    //     cout<<"*";
    // }no_of_stars+=2;cout<<endl;
    // }

//    1
//   121
//  12321
// 1234321
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }for(int k=1;k<=(2*i)/2;k++){
    //         cout<<k;
    //     }for(int l=i-1;l>=1;l--){
    //         cout<<l;
    //     }cout<<endl;
    // }

    // for(int i=1;i<=2*n-1;i++){//incomplete code
    //     if(i<=n){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         cout<<'*';
    //     }cout<<endl;}else{
    //         for(int j=1;j<=i-n;j++){
    //         cout<<" ";
    //     }
    //     for(int k=(2*i)-1-2;k<=1;k--){
    //         cout<<'*';
    //     }cout<<endl;
    //     }
            
    // }


//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
    // int nst=1;
    // int nsp=n-1;
    // for(int i=1;i<=2*n-1;i++){
        
    //     for(int j=1;j<=nsp;j++){
    //         cout<<' ';
    //     }if(i<=n-1){
    //         nsp--;
    //     }else{nsp++;}
    //     for(int k=1;k<=nst;k++){
    //         cout<<"*";
    //     }if(i<=n-1){nst+=2;}
    //     else{nst-=2;}cout<<endl;
    // }


// *******
// *** ***
// **   **
// *     *
    // for(int i=1;i<=2*n-1;i++){
    //     cout<<'*';
    // }cout<<endl;
    // int m=n-1;
    // for(int i=1;i<=m;i++){
    //     for(int j=1;j<=m+1-i;j++){
    //         cout<<'*';
    //     }for(int k=1;k<=2*i-1;k++){
    //         cout<<' ';
    //     }for(int j=1;j<=m+1-i;j++){
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }

// 1234567
// 123 567
// 12   67
// 1     7
    // for(int i=1;i<=2*n-1;i++){
    //     cout<<i;
    // }cout<<endl;int m=n-1;
    // for(int i=1;i<=m;i++){
    //     int a=1;
    //     for(int j=1;j<=m+1-i;j++){
    //         cout<<a;
    //         a++;
    //     }for(int k=1;k<=2*i-1;k++){
    //         cout<<' ';
    //         a++;
    //     }for(int l=1;l<=m+1-i;l++){
    //         cout<<a;
    //         a++;
    //     }cout<<endl;
    // }


    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        //    if(i<=j) cout<<i;
        //    else cout<<j; or
        cout<<min(i,j);
        }cout<<endl;
    }
}