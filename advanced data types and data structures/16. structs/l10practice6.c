#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#import <string.h>

typedef struct{
   int x, y;
}point_t;




int main(){
   point_t a_points[4];

   for(int i=0; i < 5; i++){
      a_points[i] = (point_t) {1+i,3+i};
   }

   for(int i=0; i < 5; i++){
      printf("%d, %d \n", a_points[i].x, a_points[i].y);
   }

   point_t *p_point = a_points;
   for(int i=0; i < 5; i++){
      (p_point+i)->x = 6;
      (p_point+i)->y = 9;
   }

   for(int i=0; i < 5; i++){
      printf("new array");
      printf("%d, %d \n", a_points[i].x, a_points[i].y);
   }
   
   

   return 0;
}
