/*#include <stdio.h>
#include <stdbool.h>
void bubble_sort(int a[], int length)
{
  bool swapped = false;
  int i = 0;
  do
  {
    swapped = false;

    for (int j = 0; j < (length - 1 - i); j++)
    {

      if (a[j] > a[j + 1])
      {

        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        swapped = true;
      }
    }
    i++;
  } while (swapped);
}
int main(void)
{
  int a[] = {1,3,7,0,2,4,9,5,8,6};

  int length = 10;

  bubble_sort(a, length);

  // output the array to see it has been sorted
  for (int i = 0; i < length; i++)
    printf("a[%d] = %d\n", i, a[i]);

  return 0;
}*/
#include<stdio.h>
int main()
{
    int a[10],i,j,temp,n;
    printf("\n Enter the max no.of Elements to Sort: \n");
    scanf("%d",&n);
    printf("\n Enter the Elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
