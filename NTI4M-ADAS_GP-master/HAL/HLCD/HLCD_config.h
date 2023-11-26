/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  HLCD_config.h
 *       Module:  lcd
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef HLCD_CONFIG_H_
#define HLCD_CONFIG_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define LCD_RS_PORT				PORTB
#define LCD_RS_CHANNEL			PIN3

#define LCD_EN_PORT     		PORTB
#define LCD_EN_CHANNEL			PIN4

#define LCD_D4_PORT				PORTB
#define LCD_D4_CHANNEL			PIN5

#define LCD_D5_PORT				PORTB
#define LCD_D5_CHANNEL			PIN8

#define LCD_D6_PORT				PORTB
#define LCD_D6_CHANNEL			PIN9

#define LCD_D7_PORT				PORTB
#define LCD_D7_CHANNEL			PIN12


#define NO_CSTOM_CHAR			8
#define NO_CSTOM_CHAR_BYTES		8

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
  
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* HLCD_CONFIG_H_ */

/**********************************************************************************************************************
 *  END OF FILE: HLCD_config.h
 *********************************************************************************************************************/
