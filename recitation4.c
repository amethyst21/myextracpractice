#include<stdio.h>
 
double fib(int n)
{
  /* Declare an array to store Fibonacci numbers. */
  double f[50];
  int i;
 
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 1;
  f[1] = 1;
 
  for (i = 2; i < 50; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }
 
  return f[n];
}
 
int main ()
{
  int n;
  while(1){
  scanf("%d",&n);
  if(n == -1)
    break;
  else		
  printf("%d %f\n",n,fib(n));
  }	
  return 0;
} 

