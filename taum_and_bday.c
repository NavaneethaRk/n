#include <stdio.h>
int main(void) {
	long int b,w,x,y,z,c1,c2,c3:
	int T,i;
	scanf("%d",&T);
	if((0<=T)||(T<=10))
	{
	for(i=1;i<=T;i++)
	{
	scanf("%d %d",&b,&w);
	scanf("%d %d %d",&x,&y,&z);
	c1=b*x+w*y;
	c2=(b*x+w*x+w*z);
    c3=(b*y+w*y+b*z);
	if(x<y)
	{
	 c2;
	}
	else
	{
     c3;
	}
	if((c1<c2)&&(c1<c3))
	{
		printf("%d\n",c1);
	}
	else if(c2<c3)
	{
		printf("%d\n",c2);
	}
	else
	{
		printf("%d\n",c3);
	}
	}	
	printf("\n");
	}	
	return 0;
}
