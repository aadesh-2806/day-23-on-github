#include<stdio.h>
#include<math.h>

void main()
{
	
	int i,a[50],b[50],x,m,n,r,t;
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	r=0;
	for(i=0;i<n;i++)
	{
		printf("enter no %d=",i+1);
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			r++;
		}
	}
	if(r==0)
	{
		m=a[0];
		for(i=1;i<n;i++)
		{
			if(m<a[i])
			{
				m=a[i];
			}
		}
		printf("%d",m);
	}
	else
	{
		t=0;
		x=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>=0)
			{
				t=t+a[i];
			}
			else
			{
				b[x++]=t;
				t=0;
			}
			if(i==n-1)
			{
				b[x++]=t;
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
	}
	getch();
	
}	
