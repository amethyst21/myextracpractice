//Name: Grecia Gonzalez
//This program finds the closest pair of numbers entered
//by the user.
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a[50],len=0;
   int i=0,j,temp,fst,scnd,diff;
   //Loop used to read program and use -1 to quit
   while(1)
   {
       scanf("%d",&a[len]);
       if(a[len]==-1)
       {
           break;
       }
       len++;
   }
   //printf("%d\n",len);
   //for loop returns the difference of the closest pair
   diff=abs(a[0]-a[1]);
   for(i=0;i<len;i++)
   {
       for(j=i+1;j<len;j++)
       {
           temp = abs(a[i]-a[j]);
           if(temp<diff)
           {
               fst=i;
               scnd=j;
               diff=temp;
           }
       }
   }
   printf("Closest pair:%d and %d, Difference: %d\n",a[fst],a[scnd],diff);
}


