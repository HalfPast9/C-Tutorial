#include <stdio.h>
#include <stdlib.h>


int max(int num1, int num2, int num3){
   int result;

   //first logical operator, && is AND operator. boolean operations. || that is OR.
   if( num1 >= num2 && num1 >= num3){
      result = num1;
   }
   else if(num2 >= num1 && num2 >= num3){
      result = num2;
   }
   else{
      result = num3;
   }

   
   return result;
}

int main()
{  

   printf("%d", max(4,8,19));
   return 0;
}
