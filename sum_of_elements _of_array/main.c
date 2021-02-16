#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fun[1000],a,i,n;
    printf("array size\n");
    scanf("%d",&n);

    printf("stoinosti na fun\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&fun[i]);
    }
    printf("stoinosti\n");
     for(i=0;i<n;i++)
    {
         printf("%d\n",fun[i]);
         a=a+fun[i];
    }
    printf("suma ot stoinostite na fun\n");
    printf("%d",a);

    return 0;
}
