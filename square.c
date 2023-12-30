#include<stdio.h>

main()
{
	int n,area = 0;
	
	int *p;
	int *pa;
	
	p = &n;
	pa = &area;
	
	printf("Enter Area Of Squre = ");
	scanf("%d",&n);
	
	p = &n;
	pa = &area;
	area = (*p)*(*p);
	
	printf("\nArea Of Squre = %d",*pa);
}