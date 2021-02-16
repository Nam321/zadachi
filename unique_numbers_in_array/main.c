#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000], i, a, n,store[1000],count=1;

  printf("size of arr:\n");
  scanf("%d",&n);

  printf("stoinosti na arr:\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("unique numbers in arr:\n");
  for(i=0;i<n;i++)
    {

        count=0;
        for(a=i+1; a<=n; a++)
        {


            if(arr[i] == arr[a] || arr[i] == arr[i-1])
            {

               count++;

            }

            if(count==1)
            {
                break;
            }
            else
            {
                printf("%d\n",arr[i]);
                break;
            }

        }
    }

    return 0;
}
