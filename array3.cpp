#include<iostream>
using namespace std;
int main(){
    int n;//this is size of array
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n]; //this is element of array
    cout<<"enter the element:";
    //this is display for your array 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   //this satement for your reverse process
    int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        //move to each other
        start++;
        end--;
    };
    //this statement for your reverse array
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }





    return 0;
}