#include<iostream>
using namespace std;
int main(){
    //this method is brute force rule
     //int arr[5]={6,4,5,3,2};
     //int arr[5]={0};
    
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;

//with the help of for loop
// for(int i=0;i<=4;i++){
//     cout<<arr[i]<<endl;
// }

//input from user



int n;
cout<<"enter the size  of array:";
cin>>n;
  int arr[n];
cout<<"enter the element of array";
cin>>arr[n];
for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
}




}