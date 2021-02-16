#include <stdio.h>
#include <stdlib.h>





int main()
{
   int array[1000],k,n,i,j,temp;

printf("size of array:");
scanf("%d",&n);
k=n;
printf("array numbers:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}



  for(i = 0; i < n; i++)
  {
      printf("\n%d",array[i]);
  }
  printf("\nthe array in reverse:");

  j=0;
  do
  {

   temp = array[j];


    array[j] = array[n-1];
    array[n-1] = temp;

     j++;n--;


  }while(j<=n);
  if(k%2==0)
  {
  if(j=n)
  {
      n++;
      temp = array[j];
      array[j] = array[n];
      array[n] = temp;
  }
  }



  for(i = 0; i < k; i++)
  {
      printf("\n%d",array[i]);
  }




    return 0;
}
