#include<iostream>
using namespace std;
void fun(int*p){
    p++;
}




int main(){
    // int n=10;
    // int *p=&n; //single pointer 
    // int **p2=&p; //doble pointer
    // int ***p3=&p2;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<p2<<endl;
    // cout<<&p2<<endl;
    // cout<<p3<<endl;
    //value ko modifiy karna ho jo mai rakhi hai

    // *p=*p+5;
    // cout<<n;

//with the help of fuction
int n=10;
int *p=&n;
int **p2=&p;
cout<<p<<endl;
fun(p);
cout<<p<<endl;


}