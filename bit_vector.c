#include <stdio.h>
int main()

char univ_set[[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char set1[26], set2[26];
init bit_vec1[26], bit_vec[26], result[26];

void intializeSet(char ary[26])
{

for(int i=0; i<26; i++)
	{
	bit_vec1[i] =0;
	bit_vec2[i] =0;
	result[i] =0;
	}
}

void bitVector(char ary[26], char bit[26],int num)
{

for(int i=0; i<num1; i++)
{
for(int j=0; j<26; j++)
{
	char c=tolower(arr[i]);
	if(c==univ[j]{
	}
}
void unionset(char bit1[26],char bit2[26]){
	for(int i=0; i<26; i++)
	{
		result[i] = bit1[i]bit2[26];
	}
}
void intersection(char bit1[26], char bit2[26]
{
	for(int i=0; i<26; i++)
	{
		result[i] = bit1[i]&bit2[26];
	}
}
void setComplement(char bit[26])
{
	for(int i=0; i<26; i++)
	{
	if(bit[i] ==0)
		result[i]=1;
	else
		result[i]=0;
	}
}
void setDifference(char bit1[26], charbit2[26])
{
	setComplement(bit2);
	setIntersection(bit1, result);
}
int main()
{
int num1,num2;
printf("Enter the number of elements in set1: ");
scanf|("%d",&num1);

printf("Enter the set1 elements: ");
for(int i=0; i<num1; i++)
	scanf("%c", &set1[i]);

printf(Enter the number of elements in set2: ");
scanf("%d", &num2);
printf(Enter the set2 elemnts: ");
for(int i=0; i<num2; i++)
	scanf("%c", &set2[i]);
	
