#include<stdio.h>
int main()

{
	int array[50];
	int  n,i,sum=0;
	printf("Enter the number of elements  : ");
	scanf("%d", &n);
	if(n<=50)
	{
		printf("Enter the elements of array\n");
		for(i=0;i<n;i++)
		{
			printf("enter the  %d elements : ",i);
			scanf("%d",&array[i]);
		}	
		for(i=0;i<n;i++)
		{
			sum=sum+array[i];
		}
		printf("sum of %d elements is :  %d\n",n,sum);

	}
	else
	{
		printf("the entered size is larger than array size\n");
	}
	return 0;	
}
