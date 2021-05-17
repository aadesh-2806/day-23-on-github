#include<stdio.h>

void main()
{
	
	int b[50],a[10][10],d[10],c[10],t,i,j,s,r,l,u,y,n,m;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	s=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter value%d %d=",i+1,j+1);
			scanf("%d",&a[i][j]);
			b[s++]=a[i][j];
		}
	}
	
	y=0;
	for(i=0;i<n;i++)
	{								
		for(j=0;j<n;j++)
		{
			
			l=y;
			b:
			for(y=0;y<l;y++)
			{
				if(a[i][j]==d[y])
				{
					if(j<n-1)
					{
						j++;
						goto b;
					}
					else
					{
						if(i<n-1)
						{
							i++;
							j=0;
							goto b;
						}
						else
						{
							y=l;
							goto a;
						}
					}
				}
			}
			y=l;
			
			r=0;
			for(s=0;s<n*n;s++)
			{
				if(a[i][j]==b[s])
				{
					r++;
				}
			}
			c[y]=r;
			d[y]=a[i][j];
			printf("%d=%d\n",d[y],c[y]);
			y++;
		}
	}
	a:
	u=y;
	
	i=c[0]*d[0];
	m=c[0];
	for(y=1;y<u;y++)
	{
		if(m<c[y])
		{
			m=c[y];
			i=d[y]*c[y];
		}
		else
		{
			if(m==c[y])
			{
				i=i+(d[y]*c[y]);
			}
		}
	}
	printf("%d",i);
	
	getch();
	
}	
