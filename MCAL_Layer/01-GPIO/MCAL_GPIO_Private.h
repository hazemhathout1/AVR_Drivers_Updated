/*
 * MCAL_GPIO_Private.h
 *
 *  Created on: Aug 21, 2023
 *      Author: hazem
 */

#ifndef MCAL_LAYER_01_GPIO_MCAL_GPIO_PRIVATE_H_
#define MCAL_LAYER_01_GPIO_MCAL_GPIO_PRIVATE_H_
#include "MCAL_STD_TYPES.h"

#define PORTA *((volatile uint8*)0x3B)
#define PORTB *((volatile uint8*)0x38)
#define PORTC *((volatile uint8*)0x35)
#define PORTD *((volatile uint8*)0x32)

#define PINA *((volatile uint8*)0x39)
#define PINB *((volatile uint8*)0x36)
#define PINC *((volatile uint8*)0x33)
#define PIND *((volatile uint8*)0x30)

#define DDRA *((volatile uint8*)0x3A)
#define DDRB *((volatile uint8*)0x37)
#define DDRC *((volatile uint8*)0x34)
#define DDRD *((volatile uint8*)0x31)
//-----------------------------------------------
#define SREG *((volatile uint8*)0x5F)
#define SREG_I 7

#define MCUCR *((volatile uint8*)0x55)
#define MCUCR_ISC00 0
#define MCUCR_ISC01 1
#define MCUCR_ISC10 2
#define MCUCR_ISC11 3
#define MCUCR_SM0 	4
#define MCUCR_SM1 	5
#define MCUCR_SM2 	6
#define MCUCR_SE    7

#define GICR *((volatile uint8*)0x5B)
#define GICR_INT0 6
#define GICR_INT1 7
#define GICR_INT2 5

#define GIFR *((volatile uint8*)0x5A)
#define GIFR_INTF1 7
#define GIFR_INTF0 6
#define GIFR_INTF2 5

#define MCUCSR *((volatile uint8*)0x54)
#define MCUSR_ISC2 6


#endif /* MCAL_LAYER_01_GPIO_MCAL_GPIO_PRIVATE_H_ */
