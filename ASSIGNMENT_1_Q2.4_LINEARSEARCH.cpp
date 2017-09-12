#include <cstdlib>
#include <iostream>

using namespace std;




int linearSearchSort(int arr[], int n, int x)
{
   int res=INT_MAX,i,j;
   for (i = 0; i < n; i++)
   {
      if(x==arr[i])
        res=i;
   }
   return res;
}

   int betterlinearSearchSort(int arr[], int n,int x)
{
  int res=INT_MAX,i,j;
   for (i = 0; i < n; i++)
   {
      if(x==arr[i]){
        res=i;
        return res;
      }
   }
       return INT_MAX;
   }


void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
        cout << arr[i];
    cout<<" ";
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
    int x;
    cout<< "Enter the element you want to search" <<endl;
    cin >> x;
    int ls=linearSearchSort(arr, n,x);
    if(ls!=INT_MAX)
          cout << ls << endl;
    else
          cout << "NOT FOUND" << endl;

    int bls=betterlinearSearchSort(arr, n,x);
    if(bls!=INT_MAX)
          cout << bls << endl;
    else
          cout << "NOT FOUND" << endl;
    printArray(arr, n);
    system("PAUSE");

    return EXIT_SUCCESS;
}
