#include <stdio.h>
#include <stdlib.h>

int main()
{  

   char grade = 'A';
   

   // switch statement is like an if statement but now its really easy to check one value against a shit ton
   switch(grade){
      case 'A':
         printf("yahhhhh");
         break;
      case 'B':
         printf("okkkkk");
         break;
      case 'C':
         printf("uhhhhhh");
         break;
      case 'D':
         printf("studyyyy");
         break;
      case 'F':
         printf("lol git gud");
         break;
      default:
         printf("bro got scammed");
   }

   return 0;
}
