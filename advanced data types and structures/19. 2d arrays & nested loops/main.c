#include <stdio.h>
#include <stdlib.h>

int main(){  

   //int nums[3][2];
   int nums[3][2] = {
      {1,2},
      {3,4},
      {5,6}
   };
   
   int i, j;
   for(i = 0; i < 3; i++){
      for(j = 0; j < 2; j++){
         printf("the %d list, %d position: %d \n", i, j, nums[i][j]);
      }
   }

   // printf("%d", nums[0][1]);
   return 0;
}
