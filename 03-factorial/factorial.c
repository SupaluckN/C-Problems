/* Find the factorial number of any number*/
#include <stdio.h>

int main(void) {
  int factorial, i, num;

  printf("\n Input positive number or zero :");
  scanf("%d",&factorial);
  printf("\n");

  if(factorial == 0) {
    printf("\t%d! = 1\n", factorial);
  } else {
    num =1;
    for(i=1;i<=factorial;i++) {
      num *= i;
    }
    printf("\t%d! = %d\n", factorial, num);
  }
}//int main(void)
