// linear search 
#include<iostream>
using namespace std;
int  Linear_Search(int n,int arr[],int key){
   int index=-1;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
  
        }
    }
   return index;

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
 int key ;
 cout<<"Enter target :";
 cin>>key ;

 int result = Linear_Search(num, array, key);
if(result != -1){
    cout << "Element found at index: " << result;
} else {
    cout << "Element not found in the array.";
}

}