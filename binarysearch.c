#include <stdio.h>

int bsearch(int arr[], int n, int x);

int main()
{
	int n;
	printf("Enter The Number of Elements in Array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter The Elements of the Array in Ascending Order\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int x;
	printf("Enter The Number To Search: ");
	scanf("%d", &x);
	int a = bsearch(arr, n, x);
	if( a >= 0) printf("Index = %d", a);
	else printf("The Element is not in the Array");
}

int bsearch(int arr[], int n, int x)
{
	int start = 0, end = n - 1;
	while (start <= end)
	{
		int mid = start + (end - start)/2;
		if (arr[mid] == x) return mid;
		else if (arr[mid] > x) end = mid - 1;
		else start = mid + 1;
	}
	return -1;
}
