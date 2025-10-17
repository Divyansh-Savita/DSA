#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(int a[],int size){
for(int i=0;i<=4;i++){
    a[i]+=5;
    cout<<a[i]<<" ";
}cout<<endl;
}
void change(int *b,int size){
    b[0]=100;
}
void changee(vector <int>& a){
    a[0]=100;
}
int main(){
    int arr[]={1,4,7,8,90};
    // int size=sizeof(arr)/sizeof(arr[0]);
//     display(arr,size);
//     change(arr,size);
//     for(int i=0;i<=4;i++){
    
//     cout<<arr[i]<<" ";
// }

// array and pointers
// int *ptr=arr;
// int *ptr1=&arr[0];//both are same

// cout<<ptr<<endl;
// ptr[0]=8;
// *ptr=8;//both same

// ptr++;
// *ptr=9;
// ptr--;
// for(int i=0;i<=4;i++){
//     // cout<<ptr[i]<<" ";
//     cout<<*ptr<<" ";
//     ptr++;

// }
// ptr=arr;

//vectors
vector<int> v;
v.push_back(6);
cout<<v.capacity()<<endl;
cout<<"Size : "<<v.size()<<endl;
v.push_back(1);
cout<<v.capacity()<<endl;
cout<<"Size : "<<v.size()<<endl;
v.push_back(9);
cout<<v.capacity()<<endl;
cout<<"Size : "<<v.size()<<endl;
v.push_back(0);
cout<<v.capacity()<<endl;
cout<<"Size : "<<v.size()<<endl;
v.push_back(5);
cout<<v.capacity()<<endl;
cout<<"Size : "<<v.size()<<endl;
for (size_t i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
}
cout << endl;
v.pop_back();
cout<<v.capacity()<<endl;
cout<<"Size : "<<v.size()<<endl;
for (size_t i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
}
cout << endl;

//vector with size
// vector<int> v1(5);
// vector<int> v1(5,7);
// cout<<v1[4];

//taking input
// for(int i=0;i<5;i++){
//     cin>>v1[i];
// }for(int i=0;i<5;i++){
//     cout<<v1[i]<<" ";
// v1.at(2)=90;
// cout<<v1.at(2);
// sort(v.begin(),v.end());
// for(int i=0;i<v.size();i++){
//     cout<<v.at(i)<<" ";
// }

//passing vectors to function
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}cout<<endl;
changee(v);//vector by default passed by value .YOu can pass by reference by using & in params.
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}cout<<endl;

//looping for vectors
vector <int>lastindex ;
lastindex.push_back(9);
lastindex.push_back(10);
lastindex.push_back(6);
lastindex.push_back(12);
lastindex.push_back(11);
lastindex.push_back(6);
lastindex.push_back(0);
// cout<<lastindex.size();
int indez=6;
int count=-1;
for(int i=(lastindex.size()-1);i>=0;i--){
if(lastindex[i]==indez){count=i;break;}
}

cout<<count;
return 0;
}