#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[1000], i, a, n, count = 0;

  printf("size of arr:\n");
  scanf("%d",&n);

  printf("stoinosti na arr:\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("povtarqshti se cifri v arr:\n");
  for(i=0;i<n;i++)
    {
        for(a=i+1; a<=n; a++)
        {

            if(arr[i] == arr[a])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}
