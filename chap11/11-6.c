#include<stdio.h>
#include<stdint.h>
#include<math.h>

int main()
{
   uint32_t num = 18, count=0, bin=0;

   //count all the 1's
   for(int a=31; a>=0; a--){
      printf( "%d", (num>>a)&1 );
      if( (num>>a)&1 ){
         count++;
      }
   }
   printf("\n\n");

   //compute binary based on 1's
   for(int c=0; c<count; c++){
     bin += pow(2,c);
   }

   //shift the binary num
   uint32_t fin = bin << (32-count);
   for(int v=31; v>=0; v--){
     printf( "%d", (fin>>v)&1 );
   }
   printf("\n\n");

   return 0;
}
