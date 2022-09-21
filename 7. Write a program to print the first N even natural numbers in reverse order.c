#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{ 
		printf("%d\n",i*2);
	}
	return 0;
}