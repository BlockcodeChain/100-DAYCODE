// single number using vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int num;
    cout<<"Enter numbers:";
    cin>>num;
    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Array:" ;
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<"\nSingle Number:";
    int ans=0;
    for(int val:v){
        ans^=val;
    }
    cout<<ans;

}