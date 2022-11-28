                     /* WAP to interpret a certain sensor's
		        temperature/data relationship as per
			table given below.

			tDegC   Integer    Fraction   HexValue
			-----   --------   --------   --------
			2.5     00000010   10000000   0280H
			2.0     00000010   00000000   0200H
			1.5     00000001   10000000   0180H
			1.0     00000001   00000000   0100H
			0.5     00000000   10000000   0080H
                        0.0     00000000   00000000   0000H
		       -0.5     11111111   10000000   FF80H
		       -1.0     11111111   00000000   FF00H
		       -1.5     11111110   10000000   FE80H
		       -2.0     11111110   00000000   FE00H
		       -2.5     11111101   10000000   FD80H
		      */


#include <stdio.h>

int main()
{
  unsigned short int data;
  unsigned char mByte,lByte;
  float tDegC;
  int sign;

  printf("Enter 2 byte hex input for temperature data collected from sensor\n");
  scanf("%hx",&data);
  //printf("%hx\n",data);

  mByte=data>>8;//hold info about integer part of temp +ve/-ve
  lByte=data;//hold info about decimal point part of temp 0.5/0.0

  //printf("%hx %hx\n",mByte,lByte);

  sign=1;//+ve temperature
  
  if((mByte&0x80)&&(lByte==0x80))
  {
   mByte=~mByte;
   sign=-1;
  }	  
  if((mByte&0x80)&&(lByte==0x00))
  {
   mByte=~mByte+1;
   sign=-1;
  }	  
  
  tDegC=(sign*(mByte+((lByte>>7)*0.5)));
  printf("%0.1f degC\n",tDegC);		  
 
}	
