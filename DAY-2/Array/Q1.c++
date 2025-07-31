//wap to calculate sum and product of all number 
#include<iostream>
using namespace std;
 int main()
 {
    int num;
    cout<<"Enter number:";
    cin>>num;
 int array[20];
 int sum=0,mul=1;
 for(int i=0;i<num;i++){
    cout<<"Enter "<<i+1<<" element:";
    cin>>array[i];

 }
 for(int i=0;i<num;i++){
    sum+=array[i];
    mul*=array[i];
 }
 cout<<"Sum of "<<num<<" Elements :"<<sum;
 cout<<"\nMultiply of "<<num<<" Elements: "<<mul;
 }