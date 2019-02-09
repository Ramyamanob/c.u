# c.u
#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=1000;i++)
    {
        if(n%i==0)
        count=count+1;
    }
    if(count==2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
