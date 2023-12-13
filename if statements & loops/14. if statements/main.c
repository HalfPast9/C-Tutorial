#include <stdio.h>
#include <stdlib.h>

int main()
{  
   int num1 = 4;
   int num2 =6;
   int num3 = 10;

   // gives the biggest number in the 3
   if( num1 >= num2 && num1 >= num3){
      return num1;
   }
   else if(num2 >= num1 && num2 >= num3){
      return num2;
   }
   else{
      return num3;
   }


   // switch statement is like an if statement but now its really easy to check one value against a shit ton
   // cases are treated like elseif or elif statements
   // default is essentially the "else" statement: runs when all cases are not satisfied

   // disadvantages: switch case can only handle exact comparisons(can only check if value1 == value 2)
   // useful for menus (think ab the 2006 assignments)

   // rmr to use the break statement or ur lowk fucked ngl
   char grade = "A";

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

   //****TERNARY OPERATORS****
   // if condition true, do this, otherise do that
   // variable = (condition) ? (value if true) : (value if false);
   int x = 10;
   int y = (x > 5) ? -4 : 8; // y = -4 as x > 5
   int z = (x < 0) ? 8 : (y < 0) ? Abs(y) : y; // z = 4

   
   return 0;
}
