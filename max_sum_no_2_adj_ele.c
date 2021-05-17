#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],b[50],j,n,m,x,t,s;
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter no %d=",i+1);
		scanf("%d",&a[i]);
	}

	x=0;
	for(i=0;i<n;i++)
	{
		b[x]=a[i];
		for(t=2;t<n;t++)
		{
			for(s=2;s<n;s++)
			{
				b[x]=a[i];
				for(j=i+t;j<n;)
				{
					b[x]=a[j]+b[x];
					j+=s;
				}
				x++;
			}
		}
	}
	m=b[0];
	for(i=1;i<x;i++)
	{
		if(m<b[i])
		{
			m=b[i];
		}
	}
	printf("%d",m);
	getch();
	
}	
