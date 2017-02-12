#include <stdio.h>

main(){
  int i, number = 0;

  printf("--------------------------------------------------------------------------\n");

  for(i=1;i<=100;i++) {
    number++;
    printf("%d\t",number);

    if(i%10 == 0) {
      printf("\n");
    }
  }

}//main()
