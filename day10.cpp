#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter the n:";
    // cin>>n;
    // for(int row=1;row<=n;row++){
    //     //cout<<row;
    //     for(int col=1;col<=n;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;

    // }
// number printing like
// int n;
// cout<<"enter the n :";
// cin>>n;
// for(int row=1;row<=n;row++){
//     for(int col=1;col<=row;col++){
//         cout<<row<<" ";
//     }
//     cout<<endl;
// }

int n;
cout<<"enter the n";
cin>>n;
for(int row=1;row<=n;row++){
    for(int col=1;col<=n;col++){
        cout<<col<<" ";
    }
    cout<<endl;
}


}