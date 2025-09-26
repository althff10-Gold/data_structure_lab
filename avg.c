//calculate avg of first n numbers  using do while loop
#include<stdio.h>
int main()
{
	int n=0,avg=0,i=1,s;
	printf("enter a number");
	scanf("%d",&n);
	do{
	scanf("%d",&s);
	avg=s/n;
	
	}
	while(i<=n);
	
	printf("avg is: %d",avg);
}
