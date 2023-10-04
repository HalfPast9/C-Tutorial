#include <stdio.h>
#include <stdlib.h>

int main(){  

   int index = 5;
   /*while(index <= 5){
      printf("%d \n", index);
      index++;
   } */

   // go thru one iteration before while looping
   do{
      printf("%d \n", index);
      index++;
   }while(index <= 5);

   return 0;
}
