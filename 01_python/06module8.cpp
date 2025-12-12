#include<iostream>
using namespace std;

void swap(int *x,int *y){
int temp = *x;
*x = *y;
*y = temp;
return;
}
void swap2(int &x,int &y){
int temp =x;
x = y;
y = temp;
return;
}
void firstAndLastDigit(int &x){
    int lastdigit=x%10;
    int dupli=x;
    while(x>9){
    
         x=x/10;
    }
    cout<<lastdigit<<endl;
    cout<<x<<endl;;
}
void find(int n,int *ptr1,int *ptr2){
    *ptr2=n%10;
    while(n>9){
        n/=10;
    }
    *ptr1=n;
    
}
int main(){

    // cout<<sizeof(float);

    // int x=4;
    // int* p=&x;
    // cout<<&x<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // *p=6;
    // cout<<x<<endl;

    //deference operator-*
    //sum using deference operator
    // int x=6;
    // int y=7;
    // int *p=&x;
    // int *p1=&y;
    // int sum=*p+*p1;
    // cout<<sum;
    
    //taking input with pointer
    // int x,y;
    // int*p1=&x;
    // int*p2=&y;
    // cout<<"enter first number";
    // cin>>*p1;
    // cout<<"enter 2nd number";
    // cin>>*p2;
    // cout<<*p1<<" "<<*p2<<endl;
    // cout<<x+y;

    // int a=8,b=6;
    // swap(&a,&b);
    // cout<<a<<" "<<b;

    //pass by reference using alias
    // int a=8,b=6;
    // swap2(a,b);
    // cout<<a<<" "<<b;

    //pointer arithmetic
    // int x=7;
    // int *ptr=&x;
    // cout<<ptr<<endl;
    // ptr=ptr+1;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<x<<endl;

    // cout<<*ptr<<" "<<x<<endl;
    // *ptr=*ptr+1;
    // (*ptr)++;
    // cout<<*ptr<<" "<<x<<endl;

    //find first and last digit of a number without returning
    // int n;
    // cin>>n;
    // firstAndLastDigit(n);my way

    // int n;cin>>n;
    // int firstdigit,lastdigit;
    // int *ptr1=&firstdigit;
    // int *ptr2=&lastdigit;
    // find(n,ptr1,ptr2);
    // cout<<firstdigit<<" "<<lastdigit;

    //null pointer -->important
    // int *ptr=NULL; //reserved address
    // int *ptr2=0; 
    // // int *ptr3='\0';//not allowed
    // int *ptr4=nullptr; 
    // cout<<ptr<<ptr2<<ptr4;
    //\0->null character

    //double pointer-used to store address of a single pointer
    int x=5;
    int *ptr=&x;
    int **p=&ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;
    cout<<*p<<endl;//address of x


}