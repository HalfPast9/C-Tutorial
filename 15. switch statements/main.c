/*#include <stdio.h>
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
*/


#include <stdio.h>
int main(void) {
int section = 1;
switch (section ) {
case 1:
printf("You are in SYSC2006A");
case 2:
printf("You are in SYSC2006B");
break;
case 3:
printf("You are in SYSC2006C");
break;
default:
printf("Enjoy the weekend");
}
return 0;
}

