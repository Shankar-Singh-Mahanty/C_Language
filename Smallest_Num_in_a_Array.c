// WAP to find the smallest number in an array
#include<stdio.h>
int main()
{
	int i,n;
	printf("\nEnter Array Size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Array Elements:-\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
	for(i = 0; i < n; i++){
		if(arr[i] < min) {
            min = arr[i];
        }
	}	
	printf("Smallest element present in given array is: %d\n", min);
	return 0;
}