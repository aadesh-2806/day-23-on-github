#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,t,n,r,q,x,b[50],m;
	char a[50];
	printf("hello\nenter string=");
	gets(a);
	r=0;
	for(i=0;a[i]!='\0';i++)
	{
		r++;
	}
	
	x=0;
	for(s=0;s<r;s++)
	{
		for(t=s;t<r;t++)
		{
			q=s;
			for(i=t;i>=s;i--)
			{
				if(a[i]!=a[q])
				{
					b[x++]=t-s+1;
					break;
				}
				q++;
			}
		}
	}
	m=b[0];
	for(s=1;s<x;s++)
	{
		if(m<b[s])
		{
			m=b[s];
		}
	}
	printf("%d",m);
	getch();
}
