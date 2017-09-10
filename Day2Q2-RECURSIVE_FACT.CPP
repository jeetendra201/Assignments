// Program to find FACTORIAL of n numbers recursively
#include <cstdlib>
#include <conio.h>
#include <iostream>

using namespace std;


int recursiveFACT(int n){
    if(n==0 or n==1)
        return 1;
    return n*recursiveFACT(n-1);
}
int main()
{
    int n;
    cout << "Hello! Enter a natural number N to find it's Factorial" << endl;
    cin>>n;
    int result= recursiveFACT(n);
    cout << "Factorial of N is " << result << endl;

    getch();
    return 0;
}

