// reverse number in array
#include<iostream>
using namespace std;
int Reverse(int n,int arr[]){
  int  s=0,e=n-1;
    while(e>s){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
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
cout<<"Original Array: ";
for(int i=0;i<num;i++){
    cout<<array[i]<<" ";
}
Reverse(num,array);
cout<<endl;
cout<<"Reversed Array:";
for(int i=0;i<num;i++){
    cout<<array[i]<<" ";
}
}