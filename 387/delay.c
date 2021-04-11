#include "delay.h"

void DelayUs2x(unsigned char t)
{   
 while(--t);
}

void DelayMs(unsigned char t)
{
     
 while(t--)
 {
     
     DelayUs2x(245);
	 DelayUs2x(245);
 }
}
