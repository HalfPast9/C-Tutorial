#include <stdio.h>
#include <stdlib.h>

int main(){

   int i;

   // for loop is used when you know how many times you want to loop. 
   // for loops cannot be used to iterate through a list like in python. only can be used to iterate through a range of numbers.
   // a for loop can be defined as a counter controlled loop: the block is executed a fixed number of times


   //for loop defined in three parts:

   //1st) indexing variable
   //2nd) condition(how to make it stop)
   //3rd) update statement(something that changes the indexing variable)

   for(i = 1; i <= 5; i++){
      printf("%d\n", i);
   }

   // if the indexing variable is declared in the 1st part of the for loop, it can only be used in the scope of the for loop

   // you can also use for loops to iterate through arrays, but a roundabout way of doing it
   int luckyNumbers[] = {1,2,3,8,5,6};
   for(i = 0; i < 6; i++){
      printf("%d\n", luckyNumbers[i]);
   }


   // while loop is used when you dont know how many times you want to loop.
   // while loop is defined as a condition controlled loop: the block of code is executed until a condition is met
   int index = 5;
   while(index <= 5){
      printf("%d \n", index);
      index++;
   } 

   // do while loops is the same as a while loop, one small difference: the block of code is ran before the condition is checked
   // this means that the block of code will always be ran at least once
   do{
      index = 0;
      printf("%d \n", index);
      index++;

   }while(index >= 5);



   // you only ever really need while loops, but for loops are more convenient and a more concise way of writing while loops
   // example:
   for (int i = 0; i < n; i += 1) {
   //<code block>
   }
   
   //is a concise way of writing:
   
   int i = 0; //1st part of for loop
   while (i < n /*2nd part of for loop*/) {
   //<code block>
   i += 1; //3rd part of for loop
   }



   return 0;
}

