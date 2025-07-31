// linear search using vector
#include<iostream>
#include<vector>
using namespace std;
 int Linear_searchvector(int n,vector<int>&v,int key){
 int index=-1;
for(int i=0;i<n;i++){
    if(v[i]==key){
// if only one u wan then just return i;
       index= i;
    }
}
return index;     //         here return -1
}
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
    int key;
    cout<<"\nEnter target:";
    cin>>key;
   int ans= Linear_searchvector(num,v,key);
   if(ans==-1) {
    cout << "Element not found.\n";
} else {
    cout << "Element found at index/indices: "<<ans;
   
}

}