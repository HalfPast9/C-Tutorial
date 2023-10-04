#include <stdio.h>
#include <stdlib.h>



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

