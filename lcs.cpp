#include <bits/stdc++.h>
// PRIYANSH MEHTA
// 20BCE2292

using namespace std;
 
int maxNO(int a, int b);
//Returns length of LCS for X[0..m-1], Y[0..n-1] 
int lcs( char *X, char *Y, int m, int n )
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m-1] == Y[n-1])
        return 1 + lcs(X, Y, m-1, n-1);
    else
        return maxNO(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));}
 

int maxNO(int a, int b)
{
    return (a > b)? a : b;         //  function to get max among 2 integers 
}
 
int main()          // main code for operation
{
    char X[] = "BGFTAZ";
    char Y[] = "GXRXET";
     
    int m = strlen(X);
    int n = strlen(Y);
     
    cout<<"Length of LCS is "<< lcs( X, Y, m, n ) ;
    cout <<"\n";
     cout<<"NAME: PRIYANSH MEHTA \n";
     cout<<"REG NO: 20BCE2292";
    return 0;
}
