//for the outer loop count the number of lines
//for the inner loop focus on the columns and connect them somehow to the rows
//print them inside the inner for loop
// observe symmetry(optional)
#include <iostream>
using namespace std;
int main(){
// ****
// ****
// ****
// ****
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<"*";
//         }cout<<"\n";
//     }

// *
// **
// ***
// ****
// *****
// for (int i=0;i<5;i++){
//     for (int j=0;j<=i;j++){
//         cout<<"*";
//     }cout<<"\n";
// }
// }

// 1
// 12
// 123
// 1234
// 12345
// for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }cout<<"\n";
// }

// 1
// 22
// 333
// 4444
// 55555
// for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i;
//     }cout<<"\n";
// }

// *****
// ****
// ***
// **
// *
// for(int i=0;i<5;i++){
//     for(int j=5;j>i;j--){
//         cout<<"*";
//     }cout<<"\n";
// }

// 12345
// 1234
// 123
// 12
// 1
// for(int i=5;i>0;i--){
//     for (int j=1;j<=i;j++){
//         cout<<j;
//     }cout<<"\n";
// }

//     *
//    ***
//   *****
//  *******
// *********
// for(int i=1;i<=5;i++){
//     for(int j=4;j>=i;j--){
//         cout<<" ";
//     }
//     for(int k=0;k<2*i-1;k++){cout<<"*";}cout<<"\n";
// }

// *********
//  *******
//   *****
//    ***
//     *
// for(int i=5;i>=1;i--){
//     for(int j=5;j>i;j--){
//         cout<<" ";}
//     for(int k=0;k<2*i-1;k++){cout<<"*";}
    
//     cout<<"\n";
// }

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
// for(int i=1;i<=5;i++){
//     for(int j=4;j>=i;j--){
//         cout<<" ";
//     }
//     for(int k=0;k<2*i-1;k++){cout<<"*";}cout<<"\n";
// }
// for(int i=5;i>=1;i--){
//     for(int j=5;j>i;j--){
//         cout<<" ";}
//     for(int k=0;k<2*i-1;k++){cout<<"*";}
    
//     cout<<"\n";
// }

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// for (int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }cout<<"\n";
// }
// for(int i=0;i<4;i++){
//     for(int j=4;j>i;j--){
//         cout<<"*";
//     }cout<<"\n";
// }

// 1
// 01
// 101
// 0101
// 10101
int num=1;
for(int i=1;i<=5;i++){
    if(i%2==0){
            num=0;
        }
    else{
        num=1;
    }
    for(int j=0;j<i;j++){
        
        
        if(num==1){
            cout<<num;
            num=0;

        }else{
            cout<<num;
            num=1;
        }
    }cout<<"\n";
}

}