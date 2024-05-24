#include<stdio.h>

int main(void)
{
  int i=0, j =0;
  scanf("%d",&i);
   printf("input number is %d\n",i);

  scanf("%d",&j);

printf("%d" ,(i > j) ? i : j);

  /*
  if ( i > j)
    return i;
  else 
    return j;
    */

    return 0;
    }
