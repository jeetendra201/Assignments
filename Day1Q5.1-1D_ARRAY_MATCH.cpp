// 2D ARRAY ADJOINT AND INVERSE//
// WAP to find adjoint and inverse of a 2d array
// C++ program to find adjoint and inverse of a matrix
#include <cstdlib>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter size of array"<< endl;
    cin>> n;
    int arr[n],i,match,count=0;
    cout << "Enter all "<<n<<" elements of array"<< endl;
    for(i=0;i<n;i++){
    cin>> arr[i];
    }
    cout << "Enter number you want to match and count its occurance"<< endl;
     cin>> match;
    for(i=0;i<n;i++){
      if(arr[i]==match){
         count++;
      }
    }
    cout << "The occurance of given no. is "<< count << endl;
}
