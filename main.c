/*******************************************************************************
* Copyright (C) 2020 TUSUR, FB
* File              : Cesar_eng.c
* Compiler          : Microsoft Visual Studio 2015
* Version           : 14.0.5
* Created File      : 03.03.2020
* Last modified     : 17.03.2020
*
* Support mail      : isoldee97@gmail.com
*
* Description       : Function reads a k bit from a variable
*                   :
*******************************************************************************/
#include<stdbool.h>
#include<stdint.h>
bool readBit (int16_t InputW, int16_t k)
{
  bool bit;//bit of interest
  if((InputW&(1<<k))==0)//logical multiplication of the entered number by a number with all zeros and ones in the bit of interest
  {
    bit = false;//k bit is equal to zero
  }
  else
  {
  bit = true;//k bit is equal to one
  }
  return bit;
}
int main()
{
  int16_t a;//any positive number no more than 16 bits
  int16_t b;//any positive number no more than 16 bits
  a = 5;
  b = 1;
  if ( readBit (a, b) == false) 
  {
     printf("0");
  }
  else
  {
     printf("1");
  }
 
  return 0;
}
