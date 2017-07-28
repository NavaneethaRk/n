#include<stdio.h>
int main(void)
{
int s,count=0,m,n,a[1000],k;
int r,p;
scanf("%d",&s);
scanf("%ld",&r);
for(k=0;k<s;k++)
{scanf("%d",&a[k]);
}
for(p=1;p<=r;p++)
{
scanf("%d",&m);
scanf("%d",&n);
for( k=0;k<s;k++)
{
if((a[k]>=m)&&(a[k]<=n))
{
    count++;
}
    
}
printf("%d\n",count);count=0;
}
    return 0;
}
