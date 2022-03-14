#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Determines if a number positive, negative or zero
 *   Return: Always 0 (Success)
    */
void trim(char *s);
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{		
printf("%d is positive\n", n);			
}		
else if (n == 0)				
{
printf("%d is zero\n", n);			
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
void trim(char *s)

{

	  int count = 0;
	  
	       while (s[count] == ' ' || s[count] == '\n' || s[count] == '\t') count++;
	          if (count != 0)
	  
	          {
	                         int i = 0;
	  	                             while (s[i + count] != '\0')
	  
	                                 {
	  
	                                       s[i] = s[i + count];
	  
	                                             i++;
	  
	                                                 }
	  
	 
	  
	                                                                 s[i] = '\0';
	  
	                                                                   }
	  
	                                                                   }
