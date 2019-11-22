#include<stdio.h>
int main()
{
    unsighed int a,max;
    int n;
    for(n=0;n<10;n++)
    {
        scanf("%d",&a);
        if(n==0||max<a)
        {
            max=a;
        }
    }
    printf("The max is %u\a",max);
    return 0;
}    