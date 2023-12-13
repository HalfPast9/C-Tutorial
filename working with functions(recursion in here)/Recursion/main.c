#include <stdio.h>
#include <stdlib.h>

unsigned int factorial(unsigned int n){
   if(n == 0){
      return 1;
   }

   return n* factorial(n-1);
}



void main()
{
   // a recursive function is a function that calls itself.
   // no easy way to get describe it, but it's a way to repeat a function
   // use will make sense when u see an example


   // example: factorial
   // factorial of 5 is 5 * 4 * 3 * 2 * 1.
   // you could use a loop to do this, but you can also use recursion.
   // going to use a function for the sake of the example.
   // anaylyze the factorial function in c tutor, cant do it in text easily.
   int answer = factorial(5);
   



   // there is no easy way to get a hang of recursion
   // i reccomend to go to chatgpt and copy this prompt:
   // hey can you give me excercises to  help me get recursion in c? i want multiple, with each one scaling in difficulty. i don't want to spend more than 15 minutes per problem, don't make it too hard.
   // just practice recursion, and you'll get it eventually.
   // also use c tutor big ups c tutor fr


   // i'll give you a few problems to start with,  will go in order of difficulty.
   // answers will be in this folder(file called answers.c) eventually, iif you dont see them, i havent solved them yet.


   // 1) write a function that takes in a number, and prints out all the numbers from 0 to that number.
   // 2) write a function that takes in a number, and prints out all the numbers from that number to 0.
   // 3) write a function that takes in a number, and prints out all the numbers from that number to 0, but only the even numbers.
   // 4) write a function that takes in a number, and prints out all the numbers from that number to 0, but only the odd numbers.
   // 5) write a function that takes in a number, and prints out all the numbers from that number to 0, but only the numbers that are divisible by 3.
   // 6) write a function that takes in a number, and prints out all the numbers from that number to 0, but only the numbers that are divisible by 3 or 5.
   // 7) write a function that takes in a number, and prints out all the numbers from that number to 0, but only the numbers that are divisible by 3 or 5, but not both.
   // 8) write a function that takes in a number, and prints out all the numbers from that number to 0, but only the numbers that are divisible by 3 or 5, but not both, and not 0.
   
   
   // LOGIC FOR ALGORITHMS CAN BE FOUND IN: (C-Tutorial\advanced data types and data structures\11. arrays.c) <-file path
   // 9) recursive bubble sort
   // 10) recursive selection sort
   // 11) recursive insertion sort

   // if you can do all of these, you should be able to do recursion pretty well for this course.
   // all thses examples build off eachother, use gpt for more variety if you want.

}