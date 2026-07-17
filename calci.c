//basic_cal.c
#include "types.h"
#include "kpm.h"
#include "lcd.h"
int main()
{
	u32 num1,num2,result;
	u8 op;
	InitLCD();
	Init_KPM();
	StrLCD("BASIC CAL");
	while(1)
	{
		CmdLCD(0xC0);
		num1=ReadNum();
		U32LCD(num1);
		op=KeyScan();
		CharLCD(op);
		num2=ReadNum();
		U32LCD(num2);
		switch(op)
		{
			case '+':result=num1+num2;
								break;
			case '-':result=num1-num2;
								break;
			case '*':result=num1*num2;
								break;
			case '/':result=num1/num2;
								break;
		}
		op=KeyScan();
		if(op=='=')
		{
			CharLCD(op);
		U32LCD(result);
			op=KeyScan();
			if(op=='C')
			{
				CmdLCD(0xC0);
			StrLCD("              ");
			}
		}
		
	}
	
}

























