#include <stdio.h>
void main()
{
    //max in three number
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b)
    {
        
        if(a>c)
        {
            printf("%d",a);
        }
        
    }
    else if(b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
}
