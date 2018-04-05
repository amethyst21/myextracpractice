/*------------------------------------*/
/*Name: Grecia Gonzalez               */
/*Description: This program finds     */
/*all the triangles with integer side */
/*lengths & a user specified perimeter*/
/**************************************/
#include <stdio.h>
int main()
{
   int p,a, b, c;
   printf("Enter a perimeter:");
   scanf("%d", &p);
 
   printf("Triangles witha perimeter:" "%d\n", p);
   //nested loop to calculate the perimeters of different 
   //triangles
   for(a = 1; 2*a < p; a++)
    {
     for(b =1; a+b < p; b++)
      {
       if((p-2*a) > 0 && (p-2*b) > 0 && (2*a+2*b-p) >0)
         {  
           c = p -(a +b);
           if(a<=b && b<=c)
             printf( "%d, %d, %d\n" , a, b, c);
        }
      } 
    }
    return 0;
}
