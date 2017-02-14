/* Find and print Even number from 1- 100*/

#include <stdio.h>

int main(void) {
  int i, number = 0;

  printf("\n-------- Even ---------------\n");

  for(i=1;i<=100;i++) {

    if(i%2==0) {
      printf(" %d\t",i);
    }

    if(i%10==0) printf("\n\n");
  }//The loop

}//main
