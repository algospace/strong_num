#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n,q, rem, fact=1, i, result=0;
  printf("Enter the Number-");
  scanf("%d",&n);

  q=n;
  while (q!=0)
  {
    rem=q%10;
    for (i=1; i<=rem; i++)
    {
      fact=fact*i;
    }
    result=result+fact;
    fact=1;
    q=q/10;
  }
  if(result==n)
    printf("%d is a strong number\n",n);
  else
    printf("%d is not a strong number\n",n);
  return 0;
}
