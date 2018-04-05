//Name:Grecia Gonzalez
//This program reverses a number
//recurisively 
#include<stdio.h>
#include<stdlib.h>

//method reverseDigits takes the number from the
//command and reverses order of number
void  reverseDigits(int number){
		int n = number;
                if(number >0){
		n=number%10;
 		printf("%d", n);
		number=number/10;
		reverseDigits(number);
                }

        }
//method numDigits finds the number and returns it
 int numDigits(int number)
        {
		if(number == 0){
                   return 0;
		}
                else{
		  return 1 + numDigits(number/10);	
		}
	}
//main method calls reverseDigits and numDigits
	int main(int argc, char*argv[]){
		
		int number,count;
		number = atoi(argv[1]);
		reverseDigits(number);
		numDigits(number);
		return 0;
	}

