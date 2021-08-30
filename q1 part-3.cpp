// PRIYANSH MEHTA
// 20BCE2292

#include <climits>
#include <iostream>
using namespace std;

int partition(int data[], int l, int r);

// This function returns k'th smallest element in arr[l..r] using
// QuickSort based method. ASSUMPTION: ALL ELEMENTS IN ARR[] ARE DISTINCT
int kthSmallest(int data[], int l, int r, int k)
{
	// If k is smaller than number of elements in array
	if (k > 0 && k <= r - l + 1) {
		// Partition the array around last element and get
		// position of pivot element in sorted array
		int pos = partition(data, l, r);

		// If position is same as k
		if (pos - l == k - 1)
			return data[pos];
		if (pos - l > k - 1) // If position is more, recur for left subarray
			return kthSmallest(data, l, pos - 1, k);

		// Else recur for right subarray
		return kthSmallest(data, pos + 1, r, k - pos + l - 1);
	}

	// If k is more than number of elements in array
	return INT_MAX;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Standard partition process of QuickSort(). It considers the last
// element as pivot and moves all smaller element to left of it
// and greater elements to right
int partition(int data[], int l, int r)
{
	int x = data[r], i = l;
	for (int j = l; j <= r - 1; j++) {
		if (data[j] <= x) {
			swap(&data[i], &data[j]);
			i++;
		}
	}
	swap(&data[i], &data[r]);
	return i;
}

// Driver program to test above methods
int main()
{
	int data[10];
	int n,k;
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
	cout << "K'th smallest element is " << kthSmallest(data, 0, n - 1, k);
	cout <<"STUDENT NAME: PRIYANSH MEHTA \n";
    cout <<"STUDENT REG NO: 20BCE2292";
	return 0;
}
