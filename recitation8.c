// Name : Grecia Gonzalez
// Use line ' gcc -o reciation8 recitation8.c -lm -std=c99' to compile
// This program finds the numbr of elementas above average using the array
#include <stdio.h>
#include <stdlib.h>
double average(double *ptr, int size)
{
    double avg = 0;
    for(int i = 0; i < size; i++)
        avg += *(ptr + i);
    avg /= size;
    return avg;  
}
int aboveAverage(double *ptr, int size, double average)
{
    int count = 0;
    for(int i = 0; i < size; i++)
        if(*(ptr + i) > average)
            count++;
    return count;      
}

int main(int argc, char* argv[])
{
    FILE *fp = fopen(argv[1], "r");
    double *arrayPtr = calloc(10, sizeof(double));
    printf("Allocated 10 doubles.\n");
    int count = 0;
    int size = 10;
    while(!feof(fp))
    {
       if(count == size)
       {
          size *= 2;
          arrayPtr = realloc(arrayPtr, sizeof(double) * size);
          printf("Reallocated to %d integers.\n", size);
       }
       fscanf(fp, "%lf", (arrayPtr+count));
       count++;  
    }
    double avg = average(arrayPtr, count);
    int aboveAvgCount = aboveAverage(arrayPtr, count, avg);
    printf("%d elements are above average of %lf\n", aboveAvgCount, avg);
    free(arrayPtr);
    printf("Dynamic array freed.\n");
}
