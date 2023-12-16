#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
   int x, y;
}point_t;

point_t makepoint(int x, int y){
   return (point_t) {x,y};
}

double distance(point_t point1, point_t point2){
   double distance;
   distance = sqrt(pow((point1.x - point2.x),2)+ pow((point1.y - point2.y), 2));
   return distance;
}

int main(){
   point_t point1 = makepoint(1,3);
   point_t point2 = makepoint(3,5);
   double dist;
   dist = distance(point1, point2);
   printf("%f", dist);
}