#include<stdio.h>
main()
{
	int a[50],b[50],c[50],i,n;
	
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
    }
    printf("Enter B Array Value=\n");
		for(i=0;i<n;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c[i]= a[i]+b[i];
		printf("c[%d]=%d\n",i,c[i]);
	}
	
  
}
	


