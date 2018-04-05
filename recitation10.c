//NAme: Grecia Gonzalez 
//Summary :Allocate an array of 50 circle pointers and dynamically
//allocate memory to store a circle pointed by each array entry. Randomly generate
//circles using the following function.

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

typedef struct circle{
   double x;
   double y;
   double radius;
} Circle;

double rand_float(double a,double b) {
   return ((double)rand()/RAND_MAX)*(b-a)+a;
}

double getArea(double r) {
   return PI * r * r;
}

void main() {
   Circle *arr = malloc(sizeof(Circle)*50); //create array
   int i, maxIndex;
   double maxArea;
   for (i=0; i<50; i++) { //poulate array
       arr[i].x = rand_float(100,900);
       arr[i].y = rand_float(100,900);
       arr[i].radius = rand_float(0,100);
   }

   maxArea = getArea(arr[0].radius);
   maxIndex = 0;
   for (i=1; i<50; i++) //find max area among all circle
       if ( getArea(arr[i].radius) > maxArea) {
           maxArea = getArea(arr[i].radius);
           maxIndex = i;
       }
   printf("Circle with largest area (%lf) has center (%lf,%lf) and radius %lf", maxArea, arr[maxIndex].x, arr[maxIndex].y, arr[maxIndex].radius);
   free(arr); //prevent memory leak
}
