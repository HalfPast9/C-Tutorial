#include <stdio.h>
#include <stdlib.h>

//compiler needs to know what the function is before it can be used
// needs 3 things:
// 1) return type: what the function returns
// 2) name of function
// 3) parameters: what the function takes in, and their types

int main()
{  
   sayHi("Mike", 14);
   sayHi("Miker", 80);
   return 0;
}

// means function returns nothing
void sayHi(char name[], int age){
   printf("hello %s, %d years old. \n", name, age);
}

