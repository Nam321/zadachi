#include <stdio.h>
#include <stdlib.h>




int main()
{
int array[1000],n,i,j,temp;

printf("size of array");
scanf("%d",&n);

printf("array numbers");
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}
for (i = 0; i < n; i++)
  {
      for (j = 0; j < n; j++)
      {
          if (array[j] > array[j+1])
          {
              temp=array[j];
              array[j]=array[j+1];
              array[j+1]=temp;

          }

      }

  }

  for(i=0;i<n;i++)
{
    printf("\n%d",array[i]);
}
printf("\nsecend largest number is %d",array[i-2]);


    return 0;
}
