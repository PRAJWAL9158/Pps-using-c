#include<stdio.h>
int main()
{
	int f,s;
	printf("Enter first number\n");
	scanf("%d",&f);
	printf("Enter second number\n");
	scanf("%d",&s);
	if(f>s)
	{
		printf("first no is greater");
	}
	if(f<s)
	{
		printf("second no is greater");
	}
	if(f==s)
	{
		printf("both are equal");
	} 
    return 0 ;
}