#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size  of array:";
    cin >> n;
    int arr[n];
    cout << "enter the element of array:";
  // gettting input of the array
    for (int i = 0; i < n; i++)
    {
          cin >> arr[i];
         
        
    }
// displaying the element of the array
    for (int i = 0; i < n; i++)
    {
         cout << arr[i]<<endl;
        
    }

}
