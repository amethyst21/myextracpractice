//Name Grecia Gonzalez
//Summary: Program finds interval should be placed
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

int *info[100];
int maxIndex=0,count,maxCount=0;

srand(time(NULL));


for(int i=0;i<100;i++)
{
   info[i]=(int *)malloc(sizeof(int));
   *info[i]=rand()%1000;
}

for(int i=0;i<100;i++)
{
   printf("%d ",*info[i]);
}


for(int i=0;i<100;i++) //pick one element at a time and conisder it as a place of interval
{
   count=0;
   for( int j=0;j<100;j++)
   {
     if(info[j]>=info[i] && info[j]<=(info[i]+50)) //Search for the interval elements lies
      count++;
   }
   if(count>maxCount)
   {
     maxCount=count;
     maxIndex=i;
   }
}

printf("The interval is to be placed at %d\n",*info[maxIndex]);
return 0;
}
