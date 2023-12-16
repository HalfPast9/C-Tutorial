#include <stdio.h>
#include <stdlib.h>

int main(){  

   // a pointer is a variable that stores a memory address
   // a memory address is a location in memory
   // memory address tells the computer where to find the variable the pointer is pointing to

   // a pointer is a variable tells the computer where to find another variable



   int age = 30;
   int *pAge = &age;

   double gpa = 3.4;
   double *pGpa = &gpa;
   
   char grade = 'A';
   char *pGrade = &grade;
   



   // printf("%p", &age);
   return 0;
}
