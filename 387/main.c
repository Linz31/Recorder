 #include<reg.h> 
#include<stdio.h>

#include "delay.h"



sbit key1 = P1^0;
sbit key2 = P1^1;
sbit yybb = P1^2;
sbit yylz = P1^3;



void main (void)
{     

	Init_Timer0();        
	yybb = 0;yylz = 0;
	             
	LCD_Init();           
	DelayMs(20);          
	LCD_Clear(); 

	LCD_Write_String(0,0,"my desiger! ");
	while (1)         
	{

		if((key1==0))		 
		{
			DelayMs(30);   
			if((key1==0))
				yylz = 1; 
		}
		else
		  yylz = 0;	 

		if((key2==0))		
		{
			DelayMs(30);   
			if((key2==0))
				yybb = 1; 
		}
		else
		  yybb = 0;	 

	}
}



