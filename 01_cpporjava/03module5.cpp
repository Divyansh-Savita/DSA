#include<iostream>
using namespace std;
int main(){
    //print num from 1 to 100
    // for(int i=1;i<=100;i++){
    //     cout<<i<<endl;
    // }

    //even
    // for(int i=1;i<=100;i++){
    //     if(i%2==0)
    //     cout<<i<<endl;
    // }

    //table of 19
    // for(int i=1;i<=10;i++){
    //     cout<<19*i<<endl;
    // }

    //ap- 1 3 5 7 9...
    // int n;
    // cin>>n;
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a+2;
    // }

    //ap- 4 7 10 13 17
    // int n;
    // cin>>n;
    // int a=4;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a+3;
    // }

    // gp-1 2 4 8 16...
    // int n;
    // cin>>n;
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a*2;
    // }

    // gp-2 6 18 54...
    // int n;
    // cin>>n;
    // int a=2;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a*3;
    // }

    // ap-100,97,94
    // for(int i=100;i>=1;i-=3){
    //     cout<<i<<endl;

    // }

    //using extra variable
    // int a=100;
    // for(int i=1;i<=34;i++){
    //     cout<<a<<endl;
    //     a=a-3;
    // }

    //using extra variable with different conditions
    int a=100;
    // for(int i=1;a>0;i++){
    //     cout<<a<<endl;
    //     a=a-3;
    // }
    // for(;a>0;){
    //     cout<<a<<endl;
    //     a=a-3;
    // }
    // for(int a=100;a>0;a=a-3){
    //     cout<<a<<endl;
    // }

    //print capital aplhabet with ascii value
    // for(int i=65;i<=90;i++){
    //     cout<<(char)i<<" "<<i<<endl;
    // }

    //prime or not
    // int prime=2;
    // for(int i=2;i<=prime;i++){
    //     if(i!=prime && prime%i==0){
    //         cout<<"not prime";
    //         break;
    //     }else if(i==prime && prime%i==0){
    //         cout<<"prime";
    //     }
    // }

    //print odd
    // for(int i=0;i<=10;i++){
    //     if(i%2==0)continue;
    //     cout<<i<<endl;
    // }

    //infinite loop
    // while('a'<'b')cout<<"hello"<<endl;//segmentation fault

    // //infinite loop
    // int i;
    // while(i=10){
    //     cout<<i<<endl;
    //     i=i+1;
    // }

    //count digits of a given number
    // int n=0;
    // int count=0;
    // while(n>0){
    //     // int last_digit=n%10;
    //     n=n/10;
    //     count++;

    // }
    // if(count==0)count++;
    // cout<<count;

    //sum of digits
    // int digit=1;
    // int sum=0;
    // while(digit>0){
    //     int last_digit=digit%10;
    //     sum+=last_digit;
    //     digit=digit/10;
        
    // }
    // cout<<sum;

    //reverse of a num;
    // int n=987,rev_num=0;
    // while(n>0){
    //     int last_digit=n%10;
    //     rev_num=(rev_num*10)+last_digit;
    //     n=n/10;
    // }
    // cout<<rev_num;

    //print sum of series -> 1-2+3-4+5-6 upto n
    // int sum=0;
    // int n=5;
    // for(int i=1;i<=n;i++){
    //     if(i%2==0){
    //         sum-=i;
    //     }else{
    //         sum+=i;
    //     }
    // }
    // cout<<sum;

    //for n=even, sum=-n/2
    // for n=odd, sum=(-(n)/2)+n
    // if(n%2==0) sum=-n/2;
    // else sum=(-(n)/2)+n;
    // cout<<sum;

    //factorial
    // int facto=5;
    // int factorial=1;
    // for(int i=1;i<=facto;i++){
    //     factorial*=i;
    //     cout<<"factorial of "<<i<<" is " <<factorial<<endl;
    // }
    
    //nth fibonacci number- 1 1 2 3 5 8 13 21 34
                        //  1 2 3 4 5 6 7  8  9
    // int n=8;
    // int fib;
    // int prev=1,prev2nd=0;
    // for(int i=1;i<n;i++){
    //     fib=prev+prev2nd;
    //     prev2nd=prev;
    //     prev=fib;

    // }
    // if(n==1){
    //     fib=1;
    // }
    // cout<<fib;

    // float base,power;
    // cout<<"enter base";
    // cin>>base;
    // cout<<"enter exponent";
    // cin>>power;
    // float num=1.0;
    // if(power>0){
    // for(int i=1;i<=power;i++){
    //     num*=base;
    // }}else if(power<0){
    //     for(int i=1;i<=abs(power);i++){
    //     num*=base;
    // }
    // num=1/num;
    // }else if(power==0 && base==0){cout<<"not defined";}
    // else num==1;
    // cout<<num;

    int base,power;
    cout<<"enter base";
    cin>>base;
    cout<<"enter exponent";
    cin>>power;
    bool flag=true;
    if(base<0){
        flag=false;
        power=-power;
    }
    float result=1;
    for(int i=1;i<=power;i++){
        result=result*a;
    }
    if(flag==false){
        result=1/result;
    }
    cout<<result;


}