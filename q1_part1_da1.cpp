#include <stdio.h>

// PRIYANSH MEHTA
//20BCE2292

void swap(int *xp, int *yp) //swapping
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int data[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)	

	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (data[j] > data[j+1])
			swap(&data[j], &data[j+1]);
}

// Function to print an array
void printArray(int data[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", data[i]);
	printf("\n");
}
 
// main program code
int main()
{
	int k,n,i;
	printf("enter the value of k: ");
	scanf("%d",&k); //scanning value of k
    
    int data[10];
    printf("no of elements in the array: ");
    scanf("%d",&n);
    printf("enter elements in the array: ");
	printf("\n");
    for(i =0;i<n;i++){
    	scanf("%d",&data[i]);   // input of array by user
	}
	bubbleSort(data, n);
	printf("Sorted array: \n");
	printArray(data, n);
	printf("\n");
	printf("kth smallest element of the array is: ");   
	printf("\n");
    printf("%d",data[k-1]);             //printing kth smallest element
    printf("\n");
    printf("STUDENT NAME: PRIYANSH MEHTA");
    printf("\n");
    printf("STUDENT REG NO: 20BCE2292");
    return 0;
}
