/* Find and print Odd number from 1- 100*/

#include <stdio.h>

main() {
  int i, number = 0;

  printf("\n-------- Odd ---------------\n");

  for(i=1;i<=100;i++) {

    if(i%2==1) {
      printf(" %d\t",i);
    }

    if(i%10==0) printf("\n\n");
  }//The loop

}//main
