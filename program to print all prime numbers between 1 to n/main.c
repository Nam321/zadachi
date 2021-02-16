#include <stdio.h>

void main()
{
    int a,b,n;

    printf("input number\n");
    scanf("%d",&n);


    for(b=2;b<=n;b++)
    {
        int c=0;
        for(a=1;a<=b;a++)
        {
         if(b%a==0)
         {
             c++;
         }
        }

        if(c==2)
        {
        printf("%d ", b);
        }
    }
}

