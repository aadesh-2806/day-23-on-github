#include<stdio.h>
#include<math.h>

void main()
{
	int i,a[50],m,b[70],n,t;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter %d=",i+1);
		scanf("%d",&a[i]);		
	}
	printf("enter k=");
	scanf("%d",&m);

	for(t=0;t<n;t++)
	{
		b[t]=0;
		for(i=t;i<n;i+=m)
		{
			b[t]=b[t]+a[i];
		}
	}
	m=b[0];
	for(t=1;t<n;t++)
	{
		if(m<b[t])
		{
			m=b[t];
		}
	}
	printf("%d",m);
	getch();
}
