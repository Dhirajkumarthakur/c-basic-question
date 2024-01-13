#include<iostream>
using namespace std;
int main(){
    
//     char name='a';
// char *ptr1=&name;
// cout<<(void*)&name<<endl;
// cout<<(void*)ptr1;

// string name="dhirajkumar";
// string*ptr=&name;
// cout<<&name;

//this is a arr type problem of pointer type;
int arr[5]={1,2,3,4,5};
int *ptr=&arr[4];
for(int i=4;i>=0;--i){
    cout<<arr[i];
}

}