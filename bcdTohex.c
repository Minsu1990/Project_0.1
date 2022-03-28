#include <stdio.h>
#include <stdint.h>

#define u8 uint8_t

int bcdTohex(u8 bcd1, u8 bcd2)
{
  int i=0;
  i += (bcd1 >> 4)*1000;
  i += (bcd1 & 0x0f)*100;
  i += (bcd2 >> 4)*10;
  i += (bcd2 & 0x0f);
  
  return i;

}

void main()
{ int result;
  result=bcdTohex(0x34,0x79);
  printf("%d\n",result);
}
