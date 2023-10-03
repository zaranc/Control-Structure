#include<stdio.h>

int main()
{
	int a,b;
	printf("ENTER TWO NUMBERS");
	scanf("%d%d",&a,&b);
	
	if(a<b)  //for a example 100<200
	{
		printf("THIS VALUE IS MINIMUM : %d",a);
	}
	else // for a example 100<99
	{
		printf("THIS VALUE IS MINIMUM :%d",b);
	}
	
	
	return 0;
}

