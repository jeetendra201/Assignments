#include <cstdlib>
#include <conio.h>
#include <iostream>

using namespace std;

int main3()
{
    int m,n;
    cout << "Enter dimensions of array"<< endl;
    cin>> m >> n;
    
    int arr[m][n],trans[n][m],i,j;
    cout << "Enter all following elements of array"<< endl;
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
             cin>> arr[i][j];       
        }  
        cout<<endl;        
    }
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            trans[j][i] = arr[i][j];
        }  
        
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
         cout << trans[i][j]<< " ";
         }
         cout<<endl;
    }
    getch();
    return 0;
}
