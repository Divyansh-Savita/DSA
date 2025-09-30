#include <bits/stdc++.h>
using namespace std;
// int c=0;
// int num;
// void printName(string n){
//     if(c==num){
//         return ;
//     }
//     c++;
//     cout<<n<<"\n";
//     printName("Anshul");
// }

void printNum(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<"\n";
    i++;
    printNum(i,n);
}

int main (){
    
    // cout<<"Enter how many times you need to print name: ";
    // cin>>num;
    // printName("Anshul");

    
    printNum(1,10);
    return 0;
}