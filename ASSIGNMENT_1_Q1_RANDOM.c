#include <stdio.h>
#include <stdlib.h>

double randInRange(int min, int max)
{
  return min + (double) (rand() / (double) (RAND_MAX ) * (max - min ));
}

int main(int argc, char *argv[])
{
  int i, n;
  
   
   n = 5;
   
  
   for( i = 0 ; i < n ; i++ ) 
   {
      printf("%f\n", randInRange(0,1));
   }
   
      for( i = 0 ; i < n ; i++ ) 
   {
      int killer=1900+200*randInRange(0,1);
      printf("%d\n", killer);
   }
   
  system("PAUSE");	
  return 0;
}
