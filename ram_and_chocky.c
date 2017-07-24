#include <stdio.h>
int main(void) {
    int n,a[500],i,sum=0,count=0,rem;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    if((sum%3)!=0)
    {
        printf("No");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            rem=a[i]%3;
            if(rem!=0)
            {
                a[i+1]=a[i+1]+rem;
            }
            count++;
        }
        printf("Yes %d",count);
    }
return 0;    
}
