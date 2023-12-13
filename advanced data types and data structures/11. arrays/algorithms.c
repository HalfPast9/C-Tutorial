#include <stdio.h>
#include <stdlib.h>





int main()
{
   int data[] = {123,124,423,223,534,232,13,124,121,455,886,496,542,4,7,8,2,8,0};
   int size_arr = 19;



   //***********BUBBLE SORT***********
  
   //int temp;
   /*
   for(int i = 0; i< size_arr; i++){
      for(int j = 0; j< size_arr; j++){
        if(data[j]> data[j+1]){
         temp = data[j+1];
         data[j+1] = data[j];
         data[j] = temp;
        } 
      }
   }
   */
   

   //***********SELECTION SORT***********
   //int i, j, min, temp;
   /*for(i = 0; i<size_arr; i++){
      min = i;
      for(j = i+1; j< size_arr; j++){
         if(data[j]< data[min]){
            min = j;
         }
         if(min != i){
            //printf("%d \n", data[j]);
            temp = data[i];
            data[i] = data[min];
            data[min] = temp;
         }
      }
   }*/
   
   //***********INSERTION SORT***********
   int key, i, j;
   for(i = 1; i<size_arr; i++){

      key = data[i];
      j = i-1;
      while(key<data[j] && j>=0){
         data[j+1] = data[j];
         j= j-1;
      }
      data[j+1] = key;
   }

   //print sorted array
   for(int i = 0; i< size_arr; i++){
      printf("%d ", data[i]);
   }

   return 0;
}