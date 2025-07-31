// linear search using vector
#include<iostream>
#include<vector>
using namespace std;
vector<int> Linear_searchvector(int n,vector<int>&v,int key){
 vector<int>index;
for(int i=0;i<n;i++){
    if(v[i]==key){
        index.push_back(i);
    }
}
return index;
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
    cout<<"Enter target:";
    cin>>key;
   vector<int>ans= Linear_searchvector(inum,array,key);
   if(ans.empty()) {
    cout << "Element not found.\n";
} else {
    cout << "Element found at index/indices: ";
    for(int idx : ans) {
        cout << idx << " ";
    }
    cout << endl;
}

}