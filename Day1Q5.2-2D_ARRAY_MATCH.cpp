// 2D ARRAY MATCH//
// WAP to find occurance of a given no. in  2D array

#include <cstdlib>
#include <conio.h>
#include <iostream>

using namespace std;


int main(){
int n;
    cout << "Enter dimension of  2d square array"<< endl;
    cin>> n;

    int a[n][n],i,j,match,count=0;

    cout << "Enter all following elements of array"<< endl;
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
             cin>> a[i][j];
        }
        cout<<endl;
    }

    cout << "Enter number you want to match and count its occurance"<< endl;
     cin>> match;

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
            if(a[i][j]==match){
            count++;
            }
        }
    }
      cout << "tThe occurance of given no. is "<< count << endl;

}
