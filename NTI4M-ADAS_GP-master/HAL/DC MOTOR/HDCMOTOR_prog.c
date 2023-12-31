#include  "STD_TYPES.h"
#include "ERROR_STATE.h"
#include "MGPIO_int.h"
#include "HDCMOTOR_cfg.h"





void HDCMOTOR_voidInit(void)
{
	MGPIO_enSetPinDirection(HDC_MOTOR_FORWARD_BACKWARD_PORT, FORWARD_PIN , OUT_2MHZ_PUSH_PULL);
	MGPIO_enSetPinDirection(HDC_MOTOR_FORWARD_BACKWARD_PORT, BACKWARD_PIN, OUT_2MHZ_PUSH_PULL);
	MGPIO_enSetPinDirection(HDC_MOTOR_DIRICTIONAL_PORT, TURN_LEFT_PIN  , OUT_2MHZ_PUSH_PULL);
	MGPIO_enSetPinDirection(HDC_MOTOR_DIRICTIONAL_PORT, TURN_RIGHT_PIN , OUT_2MHZ_PUSH_PULL);

}
/**********************************************************************************************/

void HDCMOTOR_voidForward(void)
{
	MGPIO_enSetPinValue(HDC_MOTOR_FORWARD_BACKWARD_PORT,BACKWARD_PIN,LOW);
	MGPIO_enSetPinValue(HDC_MOTOR_FORWARD_BACKWARD_PORT,FORWARD_PIN,HIGH);
}
/**********************************************************************************************/

/*backward function */

/**********************************************************************************************/

void HDCMOTOR_voidBackward(void)
{
	MGPIO_enSetPinValue(HDC_MOTOR_FORWARD_BACKWARD_PORT,FORWARD_PIN,LOW);
	MGPIO_enSetPinValue(HDC_MOTOR_FORWARD_BACKWARD_PORT,BACKWARD_PIN,HIGH);
}
/**********************************************************************************************/

/*turn right an left functions*/

/**********************************************************************************************/

void HDCMOTOR_voidTurnRight(void)
{
	MGPIO_enSetPinValue(HDC_MOTOR_DIRICTIONAL_PORT,TURN_LEFT_PIN,LOW);
	MGPIO_enSetPinValue(HDC_MOTOR_DIRICTIONAL_PORT,TURN_RIGHT_PIN,HIGH);
}

/**********************************************************************************************/
void HDCMOTOR_voidTurnLeft(void)
{
	MGPIO_enSetPinValue(HDC_MOTOR_DIRICTIONAL_PORT,TURN_RIGHT_PIN,LOW);
	MGPIO_enSetPinValue(HDC_MOTOR_DIRICTIONAL_PORT,TURN_LEFT_PIN,HIGH);
}
/**********************************************************************************************/



/* Stop functions */
/**********************************************************************************************/

void HDCMOTOR_voidDiretionalStop(void)
{
	MGPIO_enSetPinValue(HDC_MOTOR_DIRICTIONAL_PORT ,TURN_RIGHT_PIN ,LOW);
	MGPIO_enSetPinValue(HDC_MOTOR_DIRICTIONAL_PORT ,TURN_LEFT_PIN, LOW);
}
/**********************************************************************************************/

void HDCMOTOR_voidForwardBackwardStop(void)
{
	MGPIO_enSetPinValue(HDC_MOTOR_FORWARD_BACKWARD_PORT ,BACKWARD_PIN ,LOW);
	MGPIO_enSetPinValue(HDC_MOTOR_FORWARD_BACKWARD_PORT ,FORWARD_PIN, LOW);
}
/**********************************************************************************************/





