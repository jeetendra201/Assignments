// reverse of array

#include <cstdlib>
#include <conio.h>
#include <iostream>

using namespace std;

int main1()
{
    int n;
    cout << "Enter size of array"<< endl;
    cin>> n;
    int arr[n],i;
    cout << "Enter all 10 elements of array"<< endl;
    for(i=0;i<n;i++){
    cin>> arr[i];                 
    }
    for(i=0;i<=n/2;i++){
      int temp;
      temp=arr[i];
      arr[i]=arr[n-1-i];
      arr[n-1-i]=temp;                       
    }
    cout<<"Reverse of array is "<<endl;
    for(i=0;i<n;i++){
      cout<<arr[i]<<" ";
      }   
    getch();
    return 0;
}
