#include<stdio.h>

int main()
{
   int i,num , rem, check= 0;
   print ("enter the number ");
   scanf("%d,"&num);
   for (i= 2i i<num; i ++)
   {
       rem = num % i;
       if (rem =0)
       {
         check =1;
       }  
   }     
   if ( check = = 0)
   {
      printf("number is prime");
   }  
   else
   {
       print("numb is NOT prime");
   }  
   return 0;
}   
    
