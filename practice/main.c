#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 6;
    char myChar;
    // convert int to char
      myChar = num + '0';
      printf("%c", myChar);
}

//Recursive practise

//Iterate through the first 'n' elements an array, 
//return the number of terget values, without the use of a loop.

int recursive(int arr, int target_val, int n,  int n_of_times){
  if (n == 0){
    return *arr
  }
  int smth = recursive(arr, 3, n-1);
  if (smth == target_val){
    n_of_times++;
  }
  return n_of_times
}

void main(void){
  recursive({1,2,3,4,5,3}, 3, 6, 0);
}