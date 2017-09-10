// 2D ARRAY ADJOINT AND INVERSE//
// WAP to find adjoint and inverse of a 2d array
// C++ program to find adjoint and inverse of a matrix
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

//function to find cofactor matrix of a given matrix
void getCofactor(int A[n][n],int temp[n][n], int p, int q, int n){


	// traversing every element of the 2d array
	int i=0, j=0;
	for(int row =0; row < n; row++ ){
		for(int col=0; col<n; col++){
			//coping into temporary matrix only those element which are not in given row and column
			if(row !=p && col!=q){
				temp[i][j++]=A[row][col];
				//if row is filled, reset the column index and increase rw index
				if(j==n-1){
					j=0;
					i++;
				}
			}
		}
	}


}

// function to find determinant of matrix
int determinant(int A[n][n], int n){
	int d=0;

	if(n==1)
		return A[n][n];
	int temp[n][n];
	int sign=1;

	for(int f=0;f<n;f++){
		getCofactor(A, temp,0, f,n);
		d += sign*A[0][f]*determinant(temp, n-1);
		sign = -sign;
	}
}
//function to calculate adjoint of a given matrix
void adjoint(int A[n][n], int adj[n][n]){
	if(n==1){
		adj[0][0]=1;
		return;
	}
	int sign =1, temp[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			getCofactor(A,temp,i,j,n);
			sign=((i+j)%2==0)? 1: -1;
			adj[j][i] = (sign)*(determinant(temp, N-1));
		}
	}
}

bool inverse(int A[n][n], float inverse[n][n]){
	int det = determinant(A, N);
    if (det == 0)
    {
        cout << "Singular matrix, can't find its inverse";
        return false;
    }
 	int adj[n][n];
    adjoint(A, adj);

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            inverse[i][j] = adj[i][j]/float(det);
 
    return true;
}

template<class T>
void display(T A[n][n])
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}


int main(){
int m,n;
    cout << "Enter dimension of  2d square array"<< endl;
    cin>> n;
    
    int a[n][n],adj[n][n],i,j;
    float inv[n][n];
    cout << "Enter all following elements of array"<< endl;
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
             cin>> arr[i][j];       
        }  
        cout<<endl;        
    }
    
    cout << "Input matrix is :\n";
    display(A);
 
    cout << "\nThe Adjoint is :\n";
    adjoint(A, adj);
    display(adj);
 
    cout << "\nThe Inverse is :\n";
    if (inverse(A, inv))
        display(inv);
 
    return 0;

}