#include <stdio.h>

int main(int argc,char**argv)
{
   int num;
   int largest =0;
   int  digit =0 ;
	
   //get number from user
   printf("Enter your four digit number:");
   scanf("%d",&num);
   
   //find largest digit of a given number
   while(num>0){
      digit = num%10;
         
      if(digit>largest){
        largest = digit;
      }
     num = num/10;
   }
   //print largest digit of a given number
   printf("Largest digit of the number is %d\n",largest);
   return 0;


}	
