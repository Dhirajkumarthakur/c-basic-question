#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enter the elemnt of size:";
    cin>>n;
    int arr[n];
    cout<<"enter the elemnt of array:";
     for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }


    return 0;
}