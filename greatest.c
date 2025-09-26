//largest of 5 given numbers
#include<stdio.h>
int main()
{
	int i=1,num;
	int largest;
	
	while(i<=5){
	printf("enter a number");
	scanf("%d",&num);
	if(num>largest)
	{
	 largest=num;
	}
	i++;
	}
	printf("the largest number is: %d",largest);
}
	
