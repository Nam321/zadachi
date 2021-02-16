#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fun[1000],a,i,n,flag;

    printf("\nfun size:");
    scanf("\n%d",&n);

    printf("\nstoinosti na fun:");
    for(i=0;i<n;i++)
    {
        scanf("\n%d",& fun[i]);
    }
    printf("enter to check number:");
    scanf("%d",&a);
    flag=0;
    for(i=0;i<n;i++)
    {
        if(a==fun[i])
        {
            flag++;
        }
    }
    if(flag==1)
    {
        printf("inputed number exists");
    }
    else
    {
        printf("inputed number doesn't exists");
    }



    return 0;
}
