#include<iostream>
using namespace std;

// int Arithemetic(int a,int b){
//     int result=a+b;
//     return result;
// }
int fibonaci(int n){
    if(n<=1)
    return n;
    else 
    return fibonaci(n-1) +fibonaci(n-2);
}




int main(){



int n;
cin>>n;
cout<<fibonaci(n);













// int a;
// cin>>a;
// int b;
// cin>>b;
//  cout<<Arithemetic(a,b);

}