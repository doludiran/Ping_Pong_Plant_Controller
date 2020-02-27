/**
******************************************************************************
* Name:    a2d.h
* Description: ADC functions initialization
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


#include "stm32f10x.h"
#include "stdint.h"
#include "stdio.h"
#include <stdbool.h>
#include "serial.h"
#include "CLI.h"


//extern bool GLOBAL_ADC_10_DATARCV;
//extern uint16_t GLOBAL_ADC_10_DATA;

void initA2D(void);
uint16_t ReadA2d(void);


