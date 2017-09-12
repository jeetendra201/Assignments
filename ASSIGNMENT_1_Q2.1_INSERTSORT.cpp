#include <cstdlib>
#include <iostream>

using namespace std;




void bubbleSort(int arr[], int n)
{
   int i,j;
   for (i = 0; i < n-1; i++)
   {
       for(j=0;j<n-i-1;j++){
                         
           if(arr[j]>arr[j+1]){
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
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
    
    bubbleSort(arr, n);
    printArray(arr, n);
    system("PAUSE");
  
    return EXIT_SUCCESS;
}
