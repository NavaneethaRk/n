#include <stdio.h>

int main(void) {
    int t1,t2,m,g;
    scanf("%d %d %d",&t1,&t2,&m);
    g=(t1+t2)/m;
    if((t1>m)&&(m<t2))
    {
    	printf("%d",g);
    }
    else if((t2<0)||(t1<0))
    {
    	printf("invalid input");
    }
    else if(isalpha(m)!=0)
    {
       printf("invalid input");	
    }
    else 
    {
    	printf("No number is present at this index");
    }  
	return 0;
}
