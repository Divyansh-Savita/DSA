#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int>p={1,3};
    cout<<p.first<<" " <<p.second<<"\n";
    pair<int , pair<int,int>>rich={1,{3,4}};
    cout<<rich.first<<" "<<rich.second.second<< " " <<rich.second.first<<"\n";

    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[0].second;
}

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    // vector<int> v(5,100);
    // vector<int> v(5);
    vector<int> v1(5,20);
    vector<int> v2(v1);

    // vector<int>::iterator it=v.begin();
    // it++;
    // cout<<*(it)<<" ";

    // it+=2;
    // cout<<*(it)<<" ";
    // vector<int>::iterator it=v.end();
    // cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it:v){
        cout<< it<<" ";
    }

}

int main(){
// explainPair();
explainVector();
}