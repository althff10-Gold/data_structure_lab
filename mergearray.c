#include<stdio.h>
int main()
{
	void display(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
	void sort_array(int arr[],int size){
	int temp;
	for (int i=0;i<size;i++){
		for (int j=i+1;j<size;j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				}
			}
	}
}

void merge_array(int arr1[], int arr2[], int arr3[], int sze1, int sze2)

{
	int i;
	for( i=0;i<sze1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(int j=0;j<sze2;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
}

	int arr1[100],arr2[100],arr3[200];
	int num1,i,num2;
	
	printf("enter the size of first array:");
	scanf("%d",&num1);
	
	printf("enter elements of first array:");
	
	for(i=0;i<num1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("enter size of second array:");
	scanf("%d",&num2);
	
	printf("enter the elements: ");
	
	for(i=0;i<num2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	printf("first array: ");
	display(arr1, num1);
	
	printf("second array: ");
	display(arr2, num2);
	
	sort_array(arr1, num1);
	sort_array(arr2, num2);
	
	printf("sorted first array: ");
	display(arr1, num1);
	
	printf("sorted second array: ");
	display(arr2, num2);
	
	printf("merged array: ");
	merge_array(arr1,arr2,arr3,num1,num2);
	sort_array(arr3,num1+num2);
	display(arr3,num1+num2);
	
return 0;
}	
	
	
