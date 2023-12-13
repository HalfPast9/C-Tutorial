#include <stdio.h>
#include <stdlib.h>

int main()
{  
   //arrays are a way to store multiple values in a single variable
   // each value is called an element
  

   // define an array
   // element-type array-name[size];


   //you dont need to initialize mimeadeatly, but you do need to allocate memory for it
   int luckyNumbers[20];
   char phrase[20] = "Array";
   // you can also initialize it like this:
   int luckyNumbers[] ={2,3,5,6,7};
   

   // each element has an index, which is its position in the array
   // each elemenet is accessed by its index
   //you can change an element by accessing it by its index
   luckyNumbers[1] = 4040;
   printf("%d", luckyNumbers[0]);


   //multi-dimensional arrays
   // int numberGrid[8][8];
   // accessing a grid(2d) array
   //https://i.imgur.com/rgCYDQF.png

   // array sorting:
   // dont really need to know this, but goo practice for wirking with arrays and getting used to their syntax.
   // id reccomend u try to do bubble sort, selection sort, and insertion sort.

   // logic behind bubble sort if you dont rmr:
   // https://www.programiz.com/dsa/bubble-sort

   // logic behind selection sort if you dont rmr:
   //https://www.geeksforgeeks.org/selection-sort/

   // logic behind insertion sort if you dont rmr:
   //https://www.geeksforgeeks.org/insertion-sort/


   // answers to this found in algorithms.c
   return 0;
}
