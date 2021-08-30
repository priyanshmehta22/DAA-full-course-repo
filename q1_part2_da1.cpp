#include <bits/stdc++.h>

// PRIYANSH MEHTA
// 20BCE2292

using namespace std;
 int main()
{
    int k,n,data[10];
    cout << "Enter number of elements in array: ";   
    scanf("%d",&n);     //input value of n
    cout <<"\n";
    cout << "Enter value of k: ";
    scanf("%d",&k);     //input value of k
    cout <<"\n";
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; ++i){                 //input elements of array from user
    	scanf("%d",&data[i]);
	}
	cout <<"\n";
	
	cout << "array is: ";
    for (int i = 0; i < n; ++i) {
            cout << "data[" << i << "] :" << data[i] << endl;}    //print array
    cout <<"\n";
    
 	cout << "Kth smallest element in array is: ";     // CODE TO PRINT KTH SMALLEST ELEMENT
    set<int> s(data, data + n);
    set<int>::iterator itr
        = s.begin(); // s.begin() returns a pointer to first
                     // element in the set
    advance(itr, k - 1); // itr points to kth element in set
    cout << *itr << "\n";
    cout <<"STUDENT NAME: PRIYANSH MEHTA \n";
    cout <<"STUDENT REG NO: 20BCE2292";
    return 0;
}
