/* Print numbers from 1 to 100. */

#include <stdio.h>

int main(void){
  int i, number = 0;

  printf("--------------------------------------------------------------------------\n");

  for(i=1;i<=100;i++) {
    number++;
    printf("%d\t",number);

    if(i%10 == 0) {
      printf("\n");
    } //new line
  }

  return 0;

}//main()
