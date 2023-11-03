#include <stdio.h>
#include <stdlib.h>

int main(){

   int i;
   // 1st, indexing variable  , 2nd condition, third is something you want to have happened every iteration.
   // for loop is alot more like a while loop in c compared to python.
   /*for(i = 1; i <= 5; i++){
      printf("%d\n", i);
   }*/

   int luckyNumbers[] = {1,2,3,8,5,6};
   for(i = 0; i < 6; i++){
      printf("%d\n", luckyNumbers[i]);
   }

   return 0;
}



int add_one(int num){
   int ret_value = num + 1;
   return ret_value;
}


 int n = 1;
 int retvalue;
factorial = add_one(n);
retvalue = factorial + n;
