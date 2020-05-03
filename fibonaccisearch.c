#include <stdio.h>

int fib(int n);

int main()
{
	int n;
	printf("Enter The Number of Elements in Array: ");
	scanf("%d",&n);
	
	int a = fib(n);
	int b = fib(n-2);
	int count = 0;
	
	int arr[n];
	printf("Enter The Elements of the Array \n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int x;
	printf("Enter The Number To Search: ");
	scanf("%d", &x);
	
	printf("\n");
	for (int i = 0; i < n/2; i++)
	{
		if (arr[fib(n-2*i)] == x) printf("%d",fib(n-2*i));
		else if (arr[fib(n-2*i)] < x)
	}
	
}

int fib(int n)
{
	if (n ==0) return 0;
	else if (n == 1) return 1;
	else fib = fib(n-1) + fib(n-2);
}
