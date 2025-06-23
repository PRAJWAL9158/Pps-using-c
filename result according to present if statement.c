#include<stdio.h>
int main()
{
	float p;
	printf("Enter your percent\n");
	scanf("%f",&p);
	if(p<=100&&p>=60)
	{
		printf("First division");
	}
	if(p<60&&p>=45)
	{
		printf("Second division");
	}
	if(p<45&&p>=33)
	{
		printf("Third division");
	}
	if(p<33)
	{
		printf("Fail");
	}
    return 0;
}