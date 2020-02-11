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


#include "../include/pin_manager.h"

#include "../mcc.h"

extern buttonState_t buttonState;

static void (*PORTA_PA2_InterruptHandler)(void);
static void (*PORTB_PB3_InterruptHandler)(void);
static void (*PORTA_PA1_InterruptHandler)(void);
static void (*PORTC_PC3_InterruptHandler)(void);
static void (*PORTC_LED_InterruptHandler)(void);
static void (*PORTA_PA3_InterruptHandler)(void);
static void (*PORTB_PB4_InterruptHandler)(void);
static void (*PORTC_Switch_InterruptHandler)(void);
static void (*PORTC_PC0_InterruptHandler)(void);
static void (*PORTF_PF2_InterruptHandler)(void);
static void (*PORTC_PC2_InterruptHandler)(void);
static void (*PORTD_PD3_InterruptHandler)(void);
static void (*PORTC_PC1_InterruptHandler)(void);

void PORT_Initialize(void);

void PIN_MANAGER_Initialize()
{
    PORT_Initialize();

    /* DIR Registers Initialization */
    PORTA.DIR = 0x8A;
    PORTA.DIRSET=0X02;
    PORTB.DIR = 0x18;
    PORTC.DIR = 0xC9;
    PORTD.DIR = 0x08;
    PORTE.DIR = 0x00;
    PORTF.DIR = 0x00;
    PORTG.DIR = 0x00;

    /* OUT Registers Initialization */
    PORTA.OUT = 0x02;
    PORTA.OUTSET=0X02;
    PORTB.OUT = 0x00;
    PORTC.OUT = 0x00;
    PORTD.OUT = 0x00;
    PORTE.OUT = 0x00;
    PORTF.OUT = 0x00;
    PORTG.OUT = 0x00;

    /* PINxCTRL registers Initialization */
    PORTA.PIN0CTRL = 0x00;
    PORTA.PIN1CTRL = 0x00;
    PORTA.PIN2CTRL = 0x08;
    PORTA.PIN3CTRL = 0x00;
    PORTA.PIN4CTRL = 0x00;
    PORTA.PIN5CTRL = 0x00;
    PORTA.PIN6CTRL = 0x00;
    PORTA.PIN7CTRL = 0x00;
    PORTB.PIN0CTRL = 0x00;
    PORTB.PIN1CTRL = 0x00;
    PORTB.PIN2CTRL = 0x00;
    PORTB.PIN3CTRL = 0x00;
    PORTB.PIN4CTRL = 0x00;
    PORTB.PIN5CTRL = 0x00;
    PORTB.PIN6CTRL = 0x00;
    PORTB.PIN7CTRL = 0x00;
    PORTC.PIN0CTRL = 0x00;
    PORTC.PIN1CTRL = 0x00;
    PORTC.PIN2CTRL = 0x08;
    PORTC.PIN3CTRL = 0x00;
    PORTC.PIN4CTRL = 0x00;
    PORTC.PIN5CTRL = 0x00;
    PORTC.PIN6CTRL = 0x00;
    PORTC.PIN7CTRL = 0x0A;
    PORTD.PIN0CTRL = 0x00;
    PORTD.PIN1CTRL = 0x00;
    PORTD.PIN2CTRL = 0x00;
    PORTD.PIN3CTRL = 0x00;
    PORTD.PIN4CTRL = 0x00;
    PORTD.PIN5CTRL = 0x00;
    PORTD.PIN6CTRL = 0x00;
    PORTD.PIN7CTRL = 0x00;
    PORTE.PIN0CTRL = 0x00;
    PORTE.PIN1CTRL = 0x00;
    PORTE.PIN2CTRL = 0x00;
    PORTE.PIN3CTRL = 0x00;
    PORTE.PIN4CTRL = 0x00;
    PORTE.PIN5CTRL = 0x00;
    PORTE.PIN6CTRL = 0x00;
    PORTE.PIN7CTRL = 0x00;
    PORTF.PIN0CTRL = 0x00;
    PORTF.PIN1CTRL = 0x00;
    PORTF.PIN2CTRL = 0x08;
    PORTF.PIN3CTRL = 0x00;
    PORTF.PIN4CTRL = 0x00;
    PORTF.PIN5CTRL = 0x00;
    PORTF.PIN6CTRL = 0x00;
    PORTF.PIN7CTRL = 0x00;
    PORTG.PIN0CTRL = 0x00;
    PORTG.PIN1CTRL = 0x00;
    PORTG.PIN2CTRL = 0x00;
    PORTG.PIN3CTRL = 0x00;
    PORTG.PIN4CTRL = 0x00;
    PORTG.PIN5CTRL = 0x00;
    PORTG.PIN6CTRL = 0x00;
    PORTG.PIN7CTRL = 0x00;

    /* Multi-pin Config registers Initialization */
    PORTA.PINCONFIG = 0x00;
    PORTA.PINCTRLCLR = 0x00;
    PORTA.PINCTRLSET = 0x00;
    PORTA.PINCTRLUPD = 0x00;
    PORTB.PINCONFIG = 0x00;
    PORTB.PINCTRLCLR = 0x00;
    PORTB.PINCTRLSET = 0x00;
    PORTB.PINCTRLUPD = 0x00;
    PORTC.PINCONFIG = 0x00;
    PORTC.PINCTRLCLR = 0x00;
    PORTC.PINCTRLSET = 0x00;
    PORTC.PINCTRLUPD = 0x00;
    PORTD.PINCONFIG = 0x00;
    PORTD.PINCTRLCLR = 0x00;
    PORTD.PINCTRLSET = 0x00;
    PORTD.PINCTRLUPD = 0x00;
    PORTE.PINCONFIG = 0x00;
    PORTE.PINCTRLCLR = 0x00;
    PORTE.PINCTRLSET = 0x00;
    PORTE.PINCTRLUPD = 0x00;
    PORTF.PINCONFIG = 0x00;
    PORTF.PINCTRLCLR = 0x00;
    PORTF.PINCTRLSET = 0x00;
    PORTF.PINCTRLUPD = 0x00;
    PORTG.PINCONFIG = 0x00;
    PORTG.PINCTRLCLR = 0x00;
    PORTG.PINCTRLSET = 0x00;
    PORTG.PINCTRLUPD = 0x00;

    /* PORTMUX Initialization */
    PORTMUX.ACROUTEA = 0x00;
    PORTMUX.CCLROUTEA = 0x00;
    PORTMUX.EVSYSROUTEA = 0x00;
    PORTMUX.SPIROUTEA = 0x00;
    PORTMUX.TCAROUTEA = 0x00;
    PORTMUX.TCBROUTEA = 0x04;
    PORTMUX.TCDROUTEA = 0x00;
    PORTMUX.TWIROUTEA = 0x00;
    PORTMUX.USARTROUTEA = 0x00;
    PORTMUX.USARTROUTEB = 0x00;
    PORTMUX.ZCDROUTEA = 0x00;

    // register default ISC callback functions at runtime; use these methods to register a custom function
    PORTA_PA2_SetInterruptHandler(PORTA_PA2_DefaultInterruptHandler);
    PORTB_PB3_SetInterruptHandler(PORTB_PB3_DefaultInterruptHandler);
    PORTA_PA1_SetInterruptHandler(PORTA_PA1_DefaultInterruptHandler);
    PORTC_PC3_SetInterruptHandler(PORTC_PC3_DefaultInterruptHandler);
    PORTC_LED_SetInterruptHandler(PORTC_LED_DefaultInterruptHandler);
    PORTA_PA3_SetInterruptHandler(PORTA_PA3_DefaultInterruptHandler);
    PORTB_PB4_SetInterruptHandler(PORTB_PB4_DefaultInterruptHandler);
    PORTC_Switch_SetInterruptHandler(PORTC_Switch_DefaultInterruptHandler);
    PORTC_PC0_SetInterruptHandler(PORTC_PC0_DefaultInterruptHandler);
    PORTF_PF2_SetInterruptHandler(PORTF_PF2_DefaultInterruptHandler);
    PORTC_PC2_SetInterruptHandler(PORTC_PC2_DefaultInterruptHandler);
    PORTD_PD3_SetInterruptHandler(PORTD_PD3_DefaultInterruptHandler);
    PORTC_PC1_SetInterruptHandler(PORTC_PC1_DefaultInterruptHandler);
}

void PORT_Initialize(void)
{
    /* On AVR devices all peripherals are enable from power on reset, this
     * disables all peripherals to save power. Driver shall enable
     * peripheral if used */

    /* Set all pins to low power mode */
    for (uint8_t i = 0; i < 8; i++) {
        *((uint8_t *)&PORTE + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
        *((uint8_t *)&PORTF + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
        *((uint8_t *)&PORTG + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
        *((uint8_t *)&PORTA + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
        *((uint8_t *)&PORTB + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
        *((uint8_t *)&PORTC + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
        *((uint8_t *)&PORTD + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
}

/**
  Allows selecting an interrupt handler for PORTA_PA2 at application runtime
*/
void PORTA_PA2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTA_PA2_InterruptHandler = interruptHandler;
}

void PORTA_PA2_DefaultInterruptHandler(void)
{
    // add your PORTA_PA2 interrupt custom code
    // or set custom function using PORTA_PA2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTB_PB3 at application runtime
*/
void PORTB_PB3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTB_PB3_InterruptHandler = interruptHandler;
}

void PORTB_PB3_DefaultInterruptHandler(void)
{
    // add your PORTB_PB3 interrupt custom code
    // or set custom function using PORTB_PB3_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTA_PA1 at application runtime
*/
void PORTA_PA1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTA_PA1_InterruptHandler = interruptHandler;
}

void PORTA_PA1_DefaultInterruptHandler(void)
{
    // add your PORTA_PA1 interrupt custom code
    // or set custom function using PORTA_PA1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTC_PC3 at application runtime
*/
void PORTC_PC3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTC_PC3_InterruptHandler = interruptHandler;
}

void PORTC_PC3_DefaultInterruptHandler(void)
{
    // add your PORTC_PC3 interrupt custom code
    // or set custom function using PORTC_PC3_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTC_LED at application runtime
*/
void PORTC_LED_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTC_LED_InterruptHandler = interruptHandler;
}

void PORTC_LED_DefaultInterruptHandler(void)
{
    // add your PORTC_LED interrupt custom code
    // or set custom function using PORTC_LED_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTA_PA3 at application runtime
*/
void PORTA_PA3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTA_PA3_InterruptHandler = interruptHandler;
}

void PORTA_PA3_DefaultInterruptHandler(void)
{
    // add your PORTA_PA3 interrupt custom code
    // or set custom function using PORTA_PA3_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTB_PB4 at application runtime
*/
void PORTB_PB4_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTB_PB4_InterruptHandler = interruptHandler;
}

void PORTB_PB4_DefaultInterruptHandler(void)
{
    // add your PORTB_PB4 interrupt custom code
    // or set custom function using PORTB_PB4_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTC_Switch at application runtime
*/
void PORTC_Switch_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTC_Switch_InterruptHandler = interruptHandler;
}

void PORTC_Switch_DefaultInterruptHandler(void)
{
       LED_Toggle();
       buttonState=KEY_PRESSED;
    // add your PORTC_Switch interrupt custom code
    // or set custom function using PORTC_Switch_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTC_PC0 at application runtime
*/
void PORTC_PC0_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTC_PC0_InterruptHandler = interruptHandler;
}

void PORTC_PC0_DefaultInterruptHandler(void)
{
    // add your PORTC_PC0 interrupt custom code
    // or set custom function using PORTC_PC0_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTF_PF2 at application runtime
*/
void PORTF_PF2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTF_PF2_InterruptHandler = interruptHandler;
}

void PORTF_PF2_DefaultInterruptHandler(void)
{
    // add your PORTF_PF2 interrupt custom code
    // or set custom function using PORTF_PF2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTC_PC2 at application runtime
*/
void PORTC_PC2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTC_PC2_InterruptHandler = interruptHandler;
}

void PORTC_PC2_DefaultInterruptHandler(void)
{
    // add your PORTC_PC2 interrupt custom code
    // or set custom function using PORTC_PC2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTD_PD3 at application runtime
*/
void PORTD_PD3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTD_PD3_InterruptHandler = interruptHandler;
}

void PORTD_PD3_DefaultInterruptHandler(void)
{
    // add your PORTD_PD3 interrupt custom code
    // or set custom function using PORTD_PD3_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PORTC_PC1 at application runtime
*/
void PORTC_PC1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PORTC_PC1_InterruptHandler = interruptHandler;
}

void PORTC_PC1_DefaultInterruptHandler(void)
{
    // add your PORTC_PC1 interrupt custom code
    // or set custom function using PORTC_PC1_SetInterruptHandler()
}
ISR(PORTC_PORT_vect)
{  
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTC.INTFLAGS & PORT_INT3_bm)
    {
       PORTC_PC3_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT6_bm)
    {
       PORTC_LED_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT7_bm)
    {
       PORTC_Switch_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT0_bm)
    {
       PORTC_PC0_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT2_bm)
    {
       PORTC_PC2_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT1_bm)
    {
       PORTC_PC1_InterruptHandler();
    }

    /* Clear interrupt flags */
    VPORTC.INTFLAGS = 0xff;
}

