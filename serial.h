/**
******************************************************************************
* Name:    serial.h
* Description: USART interface Configuration Initialization
* Version: V1.0
*  Author: Damilola Oludiran
 
*
* This software is supplied "AS IS" without warranties of any kind.
*
*
*----------------------------------------------------------------------------
* History:
*          V1.0 Initial Version by Damilola Oludiran
*
*
*****************************************************************************
*/
 
#include"stm32f10x.h"
void serial_open(void);

void sendbyte(uint16_t data );
char getbyte(void);


