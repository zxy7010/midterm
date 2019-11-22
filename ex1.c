#include<stdio.h>
int main()
{
    char a;
    int
    space=0,letters=0,digit=0,other=0;
    printf("This is an apple! We should eat it.")
    while((a=getchar())!='\n')
    {
        if(a>='b'&&a<='e'||a>='B'&&a<='E')
        {
            letters++;
        }
        else if (a =='')
        {
            space++;
        }
        else if (a>='0'&&a<='9')
        {
            digit++;
        }
        else
        {
            other++;
        }
        
    }
    printf("%d\n%d\n%d\n%d\n",letters,space,digit,other);
    return 0
}
