#include<stdio.h>
main()
{
	int a[100],i,n;
	
	printf("enter size of array=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
    	printf("a[%d]=",i);
	    scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}

}


