#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*int userAge;
   printf("prompt age pls: \n");
   scanf("%d", &userAge);
   printf("%d", userAge)*/

   /* double gpa;
   printf("prompt gpa pls:");
   scanf("\n %lf", &gpa);
   printf("%f", gpa); */

   /*char grade;
   printf("prompt ggrade pls:");
   scanf("\n %c", &grade);
   printf("%c", grade);*/

   //scanf only scans until the first space, another function does it for the whole line
   /*char name[20];
   printf("prompt name pls:");
   scanf("\n %s", name);
   printf("%s", name);*/


   // fgets only does strings, nothing else. it also auto \n all the time
   char name[20];
   printf("prompt name pls:");
   fgets(name, 20, stdin);
   printf("%s asdf", name);


   return 0;
}