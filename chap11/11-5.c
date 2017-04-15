#include<stdio.h>
#include<stdint.h>

void split(uint32_t num)
{
    //split into eight 4 bit values
    //32 - 0000 0000 0000 0000 0000 0000 0000 0101
    uint8_t * p = (uint8_t *)&num;

    for(int a=0; a<4; a++){
      int r1 = 0, r2 = 0;
      r1 = (*p>>4) & 0xF;
      r2 = (*p & 0x0F);
      printf("%d %d ", r1, r2);
      p++;
    }
}

int main()
{
    int num = 5;
    split(num);
    return 0;
}
