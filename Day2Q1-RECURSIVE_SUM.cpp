// Program to find sum of n numbers recursively
#include <cstdlib>
#include <conio.h>
#include <iostream>

using namespace std;


int recursiveSum(int n){
    if(n==1)
        return 1;
    return n+recursiveSum(n-1);
}
int main()
{
    int n;
    cout << "Hello! Enter a natural number N to find sum of N natural numbers" << endl;
    cin>>n;
    int result= recursiveSum(n);
    cout << "Sum of N natural numbers is " << result << endl;

    getch();
    return 0;
}
