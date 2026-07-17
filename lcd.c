#include<lpc21xx.h>
#include "types.h"
#include "lcd_defines.h"
#include "defines.h"
#include "delay.h"

void WriteLCD (u8 byte)
{
	//write to data pins
	WRITEBYTE(IOPIN0,LCD_DATA,8);
	//provide high to low enable pulse
	IOSET0=1<<LCD_EN;
	delay_us(1);
  IOCLR0=1<<LCD_EN;
	delay_ms(2);
}
	
	void CmdLCD(u8 opcode)
	{
		IOCLR0=1<<LCD_RS;
		WriteLCD(opcode);
	}
	
	void InitLCD(void)
	{
		IODIR0|=((0XFF<<LCD_DATA)|(1<<LCD_RS)|(1<<LCD_RW)|(1<<LCD_EN));
		delay_ms(15);
		CmdLCD(0x30);
		delay_ms(4);
		delay_us(100);
	  CmdLCD(0x30);
		CmdLCD(MODE_8BIT_2LINE);
		CmdLCD(DSP_ON_CUR_BLINK);
		CmdLCD(CLEAR_LCD  );
		CmdLCD(SHIFT_CUR_RIGHT );
	}
	
	void CharLCD(u8 asciival)
	{
		IOSET0=1<<LCD_RS;
		WriteLCD(asciival);
	}
	void StrLCD(u8 *str)
	{
		while(*str)
    CharLCD(*str++);
	}
	void u32LCD(u32 num)
	{
		u8 a[10];
		s32 i;
		if(num==0)
		{
			CharLCD('0');
		}
		else 
		{
			while(num>0)
			{
				a[i++]=(num%10)+48;
				num/=10;
			}
			for(--i;i>=0;i--)
			CharLCD(a[i]);
		}
	}
	
	void s32LCD(s32 num)
	{
		if (num<0)
		{
			CharLCD('-');
			num=-num;
		}
		u32LCD(num);
	}
	void f32LCD (f32 Fnum,u32 nDP)
	{
		u32 num;
		s32 i;
		if(Fnum<0.0)
		{
			CharLCD('-');
			Fnum=-Fnum;
		}
		num=Fnum;
		u32LCD(num);
		CharLCD('.');
		for(i=0;i<nDP;i++)
		{
			Fnum=(Fnum-num)*10;
			num=Fnum;
			CharLCD(num+48);
		}
	}
		































