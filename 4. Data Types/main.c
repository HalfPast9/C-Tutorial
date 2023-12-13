#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // for bool data type

int main()
{   
    {
    //****NUMERICAL DATA TYPES****
    // -2^31 to 2^31 - 1
    // signed is the default, if you dont specify signed or unsigned, it will be signed
    int age = 40;
    signed int age2 = 40;
    signed age4 = 40;

    // 0 to 2^32 - 1
    unsigned int age3 = 40;
    unsigned age5 = 40;


    // **short and long modifiers specify the minimum size(memory allocation) of the variable**
    // at least 16 bits
    short age6 = 40;
    short int age7 = 40;

    // at least 16(commonly 32)
    int age8 = 40;

    // at least 32 bits
    long int age9 = 40;

    // at least 64 bits
    long long int age10 = 40;

    // size(short int) <= size(int) <= size(long int)  <= size(long long int)
    // size modifiers can be combined with signed and unsigned modifiers


    //******VARIABLE OVERFLOW******
    //no error message, just wraps around. be wary of this(shoudltn be a problem as long as you design your program well)
    // can also happen when a wrong data type is assigned to a variable
    int age11 = 2147483647;
    printf("%d", age11 + 1); // -2147483648


    // floating and double data types do not support signed, unsigned, short modifiers
    float pi = 3.14;
    // double can use the long modifier
    double gpa = 3.6;

    bool isMale = true;

    //character data types
    char grade = 'D';
    char phrase[] = 'WOOOOO';
    }

    //****TYPE CONVERSION****
    // general rule: if you are combining two different data types, the compiler will convert the less broad data type to the more broad data type
    // this prevents data loss
    // char -> int -> long -> float -> double
    
    // char -> int
    char grade = 'A';
    printf("%d\n", grade); // 65

    // int -> long
    int num = 2147483647;
    long num2 = num;
    printf("%ld\n", num2); // 2147483647

    // long -> float
    long num3 = 2147483647;
    float num4 = num3;
    printf("%f\n", num4); // 2147483648.000000

    // float -> double
    float num5 = 3.14;
    double num6 = num5;
    printf("%f\n", num6); // 3.140000




    return 0;
}