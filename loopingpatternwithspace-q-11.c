#include<stdio.h>

main()
{
	int r,c,s;
	
	for (r=1;r<=5;r++)
	{
		for (s=r;s>1;s--)
		{
			printf(" ");
		}
		for (c=5;c>=r;c--)
		{
			printf("*");
		}
		printf("\n");
	}
}
