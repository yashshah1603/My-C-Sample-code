
//=============================================================
//Define lcd io
#include <project.h>
//uint8 ss=LCD_LCDPort_0;		//chip select when low
//uint8 RS=LCD_LCDPort_1;		//high :data  low:command    
//uint8 sclk=LCD_LCDPort_2;		//SERIAL CLOCK INPUT    
//uint8 mosi=LCD_LCDPort_3;	     //SERIAL DATA INPUT/OUTPUT   
//uint8 reset=LCD_LCDPort_4;		//reset


//
//int KEY = P2^7;
//====================================================//
                                                        
//====================================================//
void ST7735_Initial(void);
void Write_Cmd_Data(unsigned char CMDP);
void Write_Cmd(unsigned char CMD);
void Write_Data(unsigned char DH,unsigned char DL);
void delayms(int count);
void Write_Data_U16(unsigned int y);
void LCD_SetPos_Horizontal(unsigned char x0,unsigned char x1,unsigned int y0,unsigned int y1);
static void LCD_SetPos_Vertical_new(unsigned char x0,unsigned int y0);
void LCD_SetPos_Vertical(unsigned char x0,unsigned char x1,unsigned  int y0,unsigned int y1);
void ClearScreen(unsigned int bColor);
void DispRGBGray(void);
void LCD_FULL(unsigned char fg,unsigned char bg,unsigned char x,unsigned int y);
void show_picture(void);
void set_bg(unsigned char data);
void show_pix(unsigned char x0,unsigned char x1,unsigned int y0,unsigned int y1,unsigned char data);
void CyDelay(uint32 milliseconds);
void text(void);
//===============================================================



//===============================================================
//write parameter


//==============================================================
//write  data word

//=============================================================
//write command



//===================================================================
//write data byte






//============================================================
//DELAY





//============================================================
//show gray



//============================================================



//=============================================================


//===============================================================






