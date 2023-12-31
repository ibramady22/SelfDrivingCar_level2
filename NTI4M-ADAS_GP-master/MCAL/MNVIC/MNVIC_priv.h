/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         @Author	:  Hassan Abdelazim Abdelsalam
 *         @File	:  MNVIC_priv.h
 *         @Module	:  NVIC
 *
 *  Description:  This file provide a local MACROS/Functions
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  HEADER GUARD
 *********************************************************************************************************************/
#ifndef MNVIC_MNVIC_PRIV_H_
#define MNVIC_MNVIC_PRIV_H_

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
//NVIC MASK
#define MNVIC_SETPRI_MASK			0x0F


//NVIC OFFSETS
#define MNVIC_GRP_OFFSET			6
#define MNVIC_SUB_OFFSET			4
#define MNVIC_PRI_SIZE				3


//NVIC PRIORITRY
#define MNVIC_GROUP_16_SUB_0		0x05FA0300
#define MNVIC_GROUP_8_SUB_2			0x05FA0400
#define MNVIC_GROUP_4_SUB_4			0x05FA0500
#define MNVIC_GROUP_2_SUB_8			0x05FA0600
#define MNVIC_GROUP_0_SUB_16		0x05FA0700



#define MNVIC_MAX_INT				59
#define MNVIC_MAX_REG1				32
#define MNVIC_MAX_REG2				64



#endif /* MNVIC_MNVIC_PRIV_H_ */

/**********************************************************************************************************************
 *  END OF FILE: 	MNVIC_priv.h
 *********************************************************************************************************************/
