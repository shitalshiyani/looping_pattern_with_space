#include<stdio.h>

main()
{
	int r,c,s;
	
	for (r=1;r<=5;r++)
	{
		for (s=1;s<r;s++)
		{
			printf(" ");
		}
		for (c=5;c>=r;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
}
