#include <stdio.h>

int main() {
	int N,i,j,m,n,a[10000],b[10000],count,s,T,k;
	scanf("%d",&T);
	
	for(k=0;k<T;k++)
	{
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	if((N>1)&&(N<10000))
	{
	for(i=0;i<N;i++)
	{
		n=a[i];
		count=0;
		for(j=0;j<N;j++)
		{
			m=a[j];
			while(m!=n)
			{
				if(m>n)
				{
				m=m-1;
				count++;
				}
				else
				{
			    m=m+1;
			    count++;
				}
			}	
		}
		b[i]=count++;
	}
	}
	s=b[0];
	for(i=1;i<N;i++)
	{
		if(b[i]<s)
		{
			s=b[i];
		}
		
	}
	printf("%d\n",s);
	}

	return 0;
}
