/**
  @Company
    Microchip Technology Inc.

  @Description
    This Source file provides APIs.
    Generation Information :
    Driver Version    :   1.0.0
*/
/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/


#include "../include/evsys.h"

int8_t EVSYS_Initialize()
{
    //CHANNEL0 PORTA_PIN2; 
    EVSYS.CHANNEL0 = 0x42;
    
    //CHANNEL1 OFF; 
    EVSYS.CHANNEL1 = 0x00;
    
    //CHANNEL2 PORTC_PIN7; 
    EVSYS.CHANNEL2 = 0x47;
    
    //CHANNEL3 TCB2_CAPT; 
    EVSYS.CHANNEL3 = 0xA4;
    
    //CHANNEL4 CCL_LUT0; 
    EVSYS.CHANNEL4 = 0x10;
    
    //CHANNEL5 CCL_LUT2; 
    EVSYS.CHANNEL5 = 0x12;
    
    //CHANNEL6 CCL_LUT4; 
    EVSYS.CHANNEL6 = 0x14;
    
    //CHANNEL7 OFF; 
    EVSYS.CHANNEL7 = 0x00;
    
    //CHANNEL8 OFF; 
    EVSYS.CHANNEL8 = 0x00;
    
    //CHANNEL9 OFF; 
    EVSYS.CHANNEL9 = 0x00;
    
    //SWEVENTA CH0; 
    EVSYS.SWEVENTA = 0x01;
    
    //SWEVENTB CH8; 
    EVSYS.SWEVENTB = 0x00;
    
    //USER OFF; 
    EVSYS.USERADC0START = 0x00;
    
    //USER CHANNEL3; 
    EVSYS.USERCCLLUT0A = 0x04;
    
    //USER CHANNEL6; 
    EVSYS.USERCCLLUT0B = 0x07;
    
    //USER OFF; 
    EVSYS.USERCCLLUT1A = 0x00;
    
    //USER OFF; 
    EVSYS.USERCCLLUT1B = 0x00;
    
    //USER CHANNEL3; 
    EVSYS.USERCCLLUT2A = 0x04;
    
    //USER CHANNEL4; 
    EVSYS.USERCCLLUT2B = 0x05;
    
    //USER OFF; 
    EVSYS.USERCCLLUT3A = 0x00;
    
    //USER OFF; 
    EVSYS.USERCCLLUT3B = 0x00;
    
    //USER CHANNEL3; 
    EVSYS.USERCCLLUT4A = 0x04;
    
    //USER CHANNEL5; 
    EVSYS.USERCCLLUT4B = 0x06;
    
    //USER CHANNEL0; 
    EVSYS.USERCCLLUT5A = 0x01;
    
    //USER OFF; 
    EVSYS.USERCCLLUT5B = 0x00;
    
    //USER OFF; 
    EVSYS.USEREVSYSEVOUTA = 0x00;
    
    //USER OFF; 
    EVSYS.USEREVSYSEVOUTB = 0x00;
    
    //USER OFF; 
    EVSYS.USEREVSYSEVOUTC = 0x00;
    
    //USER OFF; 
    EVSYS.USEREVSYSEVOUTD = 0x00;
    
    //USER OFF; 
    EVSYS.USEREVSYSEVOUTE = 0x00;
    
    //USER OFF; 
    EVSYS.USEREVSYSEVOUTF = 0x00;
    
    //USER OFF; 
    EVSYS.USEREVSYSEVOUTG = 0x00;
    
    //USER OFF; 
    EVSYS.USEROSCTEST = 0x00;
    
    //USER OFF; 
    EVSYS.USERPTCSTART = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCA0CNTA = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCA0CNTB = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCA1CNTA = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCA1CNTB = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCB0CAPT = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCB0COUNT = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCB1CAPT = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCB1COUNT = 0x00;
    
    //USER CHANNEL2; 
    EVSYS.USERTCB2CAPT = 0x03;
    
    //USER OFF; 
    EVSYS.USERTCB2COUNT = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCB3CAPT = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCB3COUNT = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCB4CAPT = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCB4COUNT = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCD0INPUTA = 0x00;
    
    //USER OFF; 
    EVSYS.USERTCD0INPUTB = 0x00;
    
    //USER OFF; 
    EVSYS.USERUSART0IRDA = 0x00;
    
    //USER OFF; 
    EVSYS.USERUSART1IRDA = 0x00;
    
    //USER OFF; 
    EVSYS.USERUSART2IRDA = 0x00;
    
    //USER OFF; 
    EVSYS.USERUSART3IRDA = 0x00;
    
    //USER OFF; 
    EVSYS.USERUSART4IRDA = 0x00;
    
    //USER OFF; 
    EVSYS.USERUSART5IRDA = 0x00;
    
	return 0;
}
