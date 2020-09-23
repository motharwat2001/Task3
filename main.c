#include <stdio.h>
#include <stdlib.h>
int sum(int arr[],int size)
{ int sum=0;
  for(int y=0;y<size;y++)
  {
    sum+=arr[y];
  }
  return sum;
}

int main()
{   int n=20;
    int arr[n],i;
    printf("please enter the elements of array\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
      for(int j=-1;j<i;j++)
      {
        if(arr[j]==arr[i])
        {
          printf("this number is duplicated\n");
          i--;
          n--;
          break;
        }

      }

    }
    printf("the elements of unique array:- ");
    for(i=0;i<n;i++)
    {
      printf(" %d  ",arr[i]);
    }
    printf("\n");
    printf("sum of unique array is %d",sum(arr,n));

    return 0;
}
