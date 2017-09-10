// Array creation & finding Max and Min in Array

#include <cstdlib>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter size of array"<< endl;
    cin>> n;
    int arr[n],i,max=INT_MIN,min=INT_MAX;
    cout << "Enter all "<<n<<" elements of array"<< endl;
    for(i=0;i<n;i++){
    cin>> arr[i];
    }
    for(i=0;i<n;i++){
      if(arr[i]<min){
         min=arr[i];
      }
      if(arr[i]>max){
         max=arr[i];
      }
    }
    cout<<"Maximum element of array is "<<max<<endl;
    cout<<"Minimum element of array is "<<min<<endl;
    getch();
    return 0;
}
