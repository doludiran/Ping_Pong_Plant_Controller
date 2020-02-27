
/**
******************************************************************************
* Name:    CLI.h
* Description: CLI functiond initialization
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


 
#include "serial.h"
#include "string.h"



void writeToCLI(const char data[]);
void getCommand(char command[]);
void clearCommandBuffer(char command[]);

