// Program to find GCD of two numbers n and m
#include <cstdlib>
#include <conio.h>
#include <iostream>

using namespace std;


int recursiveGCD(int n, int m){
    if(n==0)
        return m;
    else
        return recursiveGCD(m%n,n);
}
int main()
{
    int n,m;
    cout << "Hello! Enter 2 natural numbers N and M to find their Greatest Common Divisor" << endl;
    cin>>n >> m;

     if(n>m){
        int temp;
        temp=n;
        n=m;
        m=temp;
     }
    int result= recursiveGCD(n,m);

    cout << "GCD of N and M is " << result << endl;

    getch();
    return 0;
}
