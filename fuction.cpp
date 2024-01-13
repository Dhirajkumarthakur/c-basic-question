#include<iostream>
using namespace std;
// int fact(int n){ //delare
//     int ans=1;
//     for(int i=1;i<=n;i++){
//         ans=ans*i;
//         }
//         return ans;

// }
// int main(){
//    // fuction definition
//     int a;
//     cout<<"enter the value of a:";
//     cin>>a;
//     cout<<fact(a); //fuction call
//}



//prime or not
bool prime(int n){
    if(n<2)
    return 0; //0-->this  represent prime nahi hai
    for(int i=2;i<n;i++){
        if(n%2==0 &&  n%3==0 && n%5==0 && n%7==0)
        return 0;
    }
    return 1; //1-->this is reprsent prime hai
}



int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    cout<<prime(a);

}


