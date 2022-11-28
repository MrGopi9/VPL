                     /* WAP to interpret a certain sensor's
                        temperature/data relationship as per
 		        table given below.

                        Range of Temperature : -55 to 125 degC
			        
			tDegC   Integer    Fraction   HexValue
			-----   --------   --------   --------
                        125.0   01111101   00000000   7D00H
			2.5     00000010   10000000   0280H
			2.0     00000010   00000000   0200H
			1.5     00000001   10000000   0180H
			1.0     00000001   00000000   0100H
			0.5     00000000   10000000   0080H
			0.250   00000000   01000000   0040H
			0.125   00000000   00100000   0020H
                        0.0625  00000000   00010000   0010H
                        0.0     00000000   00000000   0000H
                       -0.0625  11111111   00010000   FF10H
                       -0.125   11111111   00100000   FF20H
		       -0.250   11111111   01000000   FF40H
		       -0.5     11111111   10000000   FF80H
		       -1.0     11111111   00000000   FF00H
		       -1.5     11111110   10000000   FE80H
		       -2.0     11111110   00000000   FE00H
		       -2.5     11111101   10000000   FD80H
		       -55.0    11001001   00000000   C900H

		       WAP to read input as 2byte hex value,validate input,
                       & print its temperture upto to 4 places after decimal point
		       as per specified range "exampe 25.0625/-25.0625 degC"
                       otherwise report as "Invalid Input For Temperature Range".		       
		      */


#include <stdio.h>

int main()
{
  unsigned short int data;
  unsigned char mByte,lByte;
  float tDegC;
  int sign,flag=0;

  printf("Enter 2 byte hex input from table \n");
  scanf("%hx",&data);
  mByte=data>>8;//hold info about integer part of temp +ve/-ve
  lByte=data;//hold info about decimal point part of temp 0.5/0.0

  if(((mByte>=0x00)&&(mByte<=0x7D))||((mByte>=0xC9)&&(mByte<=0xFF)))
  {
    if((((mByte==0x7D)||(mByte==0xC9)))&&(lByte!=0x00))	
    {
      flag=0;	    
    }	    
    else if((lByte==0x80)||(lByte==0x40)||(lByte==0x20)||(lByte==0x10)||(lByte==0x00))
    {
      flag=1;
    } 
  }
  
  if(flag==1)   
  {	    
      sign=1;//+ve temperature
      if(mByte&0x80)
      {
         sign=-1; //-ve temperature
         if(lByte!=0x00)     
         mByte=~mByte;
         if(lByte==0x00)
         mByte=~mByte+1;
      }	
      tDegC=(sign*(mByte+((lByte>>4)*0.0625)));
      printf("%0.4f degC\n",tDegC);		  
  }
  else
  {
      printf("Invalid Input For Temperature Range\n");
      return 0;      
  }	    
}	
