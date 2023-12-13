#include <stdio.h>
#include <stdlib.h>

/* double cube(double num){
   //double result = num * num * num;
   return result; 
   return num * num * num;
} */

// you can use prototyping to define fcutions without creating them, and you can use this to put functions below the main function. (maybe be able to completely redefine it?)
double cube(double num);

int main(){  

   printf("answer:%f", cube(3.0));
   return 0;
}

double cube(double num){
   /*double result = num * num * num;
   return result; */
   return num * num * num;
}