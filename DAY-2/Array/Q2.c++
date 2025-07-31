// find max and min 
#include<iostream>
#include<climits>
using namespace std;
int MaxElement(int n,int arr[]){
   int ans=INT_MIN;
   for(int i=0;i<n;i++){
      if(arr[i]>ans){
         ans=arr[i];
      }
   }
   return ans;
}
int MinElement(int n,int arr[]){
   int ans=INT_MAX;
   for(int i=0;i<n;i++){
      if(arr[i]<ans){
         ans=arr[i];
      }
   }
   return ans;
}
 int main()
 {
    int num;
    cout<<"Enter number:";
    cin>>num;
 int array[20];

 for(int i=0;i<num;i++){
    cout<<"Enter "<<i+1<<" element:";
    cin>>array[i];

 }
 cout<<"Maximum Element: "<<MaxElement(num,array);
 cout<<"\nMinimum Element: "<<MinElement(num,array);
}