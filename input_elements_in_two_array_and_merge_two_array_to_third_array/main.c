#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fun1[100], fun2[100], fun3[100],n,i,a,b,c,d;
    printf("golemina na fun 1:\n");
    scanf("%d",&n);

    printf("stoinosti na fun 1:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&fun1[i]);
        fun3[i]= fun1[i];
    }

     printf("golemina na fun 2:\n");
    scanf("%d",&b);
    d=1;

    printf("stoinosti na fun 2:\n");
    for(a=0;a<b;a++)
    {
        scanf("%d",&fun2[a]);
        fun3[n]=fun2[a] ;

        n=n+d;

    }

    printf("stoinosti na fun 3:\n");
    for(c=0;c<n;c++)
    {
        printf("%d\n",fun3[c]);
    }




    return 0;
}
