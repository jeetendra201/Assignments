#include <cstdlib>
#include <iostream>

using namespace std;




void selectionSort(int arr[], int n)
{
   int i,j;
   for (i = 0; i < n-1; i++)
   {
       int minindex=i;
       for(j=i;j<n;j++){
           
           if(arr[j]<arr[minindex])
               minindex=j;
         }
              int temp=arr[minindex];
               arr[minindex]=arr[i];
               arr[i]=temp;
       }
   }


void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}


int main(int argc, char *argv[])
{
    
    
    int n;
    cout<< "Enter size of array" <<endl;
    cin >> n;
    int arr[n];
    cout<< "Enter all "<<n<< " elements of array" <<endl;
    for(int i=0;i<n;i++){
            cin>> arr[i];
            }
    
    selectionSort(arr, n);
    printArray(arr, n);
    system("PAUSE");
  
    return EXIT_SUCCESS;
}
