#include<iostream>
using namespace std;
int main(){
//int arr[5]={3,2,4,5,6};
//cout<<sizeof(arr[0])<<endl;
// int ans=INT16_MAX;
// for(int i=0;i<5;i++){
//     if(arr[i]<ans){
//         ans=arr[i];
//     }
//     cout<<ans;
// }

//linear search 


/*int x=6;
int index;

for(int i=0;i<5;i++){
    if(arr[i]==x){
     // cout<<"my index is:"<<i<<endl;
      index=i;
    }
        
    
    
}
cout<<index;*/


//reverse the array
int arr[5]={1,2,3,4,5};
int start=0,end=4; //this is a intiale index and end index

while (start<=end)
{
  swap(arr[start],arr[end]);
  
  //move to each other
  start++;//increase the pointer
  end--;//decrese the pointer
};
//this is used for array printing
for(int i=0;i<5;i++){
  cout<<arr[i]<<" ";//
  
}
return 0;


}

