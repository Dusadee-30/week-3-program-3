#include<stdio.h>
int main()
{
	int n,sum=0;
	long int t = 9;
	printf("Enter you range : ");
	scanf_s("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		for (int j = i;j <= i;j++) 
		{
			sum += t;
			printf("%ld", t);
			t = (t * 10) + 9;
		}
		printf("\n");
	}
	printf("sum = %d", sum);
}