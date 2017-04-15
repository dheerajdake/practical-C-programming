#include<stdio.h>
#include<stdint.h>

int setBits(uint32_t num)
{
    int count = 0;
    uint8_t * p = (uint8_t *)&num;

    for(int a=0; a<4; a++){
        //printf("%d\n", *p);
        for(int b=0; b<8; b++){
          if((*p>>b)&1){
            count++;
          }
        }
        p++;
    }
    return count;
}

int main()
{
    uint32_t num = 7; // 00000000 00000000 00000000 00000101
    printf("Set bits: %d\n", setBits(num));
    return 0;
}
