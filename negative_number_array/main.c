#include <stdio.h>

int main()
{
    int i,n,masiv[1000];
    printf("size of array\n");
    scanf("%d", &n);
    printf("stoinosti\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &masiv[i]);

    }

    printf("otricatelnite chisla sa\n");
    for(i=0; i<n; i++)
    {
        if(masiv[i]<0)
         {
              printf("%d\n",masiv[i]);
         }


    }

    return 0;
}
