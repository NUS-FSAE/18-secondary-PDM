/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC18F45K80
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA1 aliases
#define IO_RA1_TRIS               TRISAbits.TRISA1
#define IO_RA1_LAT                LATAbits.LATA1
#define IO_RA1_PORT               PORTAbits.RA1
#define IO_RA1_ANS                ANCON0bits.ANSEL1
#define IO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_RA1_GetValue()           PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_RA1_SetAnalogMode()  do { ANCON0bits.ANSEL1 = 1; } while(0)
#define IO_RA1_SetDigitalMode() do { ANCON0bits.ANSEL1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()    do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()   do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()   do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()         PORTAbits.RA2
#define RA2_SetDigitalInput()   do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()  do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetAnalogMode() do { ANCON0bits.ANSEL2 = 1; } while(0)
#define RA2_SetDigitalMode()do { ANCON0bits.ANSEL2 = 0; } while(0)

// get/set RA3 procedures
#define RA3_SetHigh()    do { LATAbits.LATA3 = 1; } while(0)
#define RA3_SetLow()   do { LATAbits.LATA3 = 0; } while(0)
#define RA3_Toggle()   do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RA3_GetValue()         PORTAbits.RA3
#define RA3_SetDigitalInput()   do { TRISAbits.TRISA3 = 1; } while(0)
#define RA3_SetDigitalOutput()  do { TRISAbits.TRISA3 = 0; } while(0)
#define RA3_SetAnalogMode() do { ANCON0bits.ANSEL3 = 1; } while(0)
#define RA3_SetDigitalMode()do { ANCON0bits.ANSEL3 = 0; } while(0)

// get/set channel_AN4 aliases
#define channel_AN4_TRIS               TRISAbits.TRISA5
#define channel_AN4_LAT                LATAbits.LATA5
#define channel_AN4_PORT               PORTAbits.RA5
#define channel_AN4_ANS                ANCON0bits.ANSEL4
#define channel_AN4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define channel_AN4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define channel_AN4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define channel_AN4_GetValue()           PORTAbits.RA5
#define channel_AN4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define channel_AN4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define channel_AN4_SetAnalogMode()  do { ANCON0bits.ANSEL4 = 1; } while(0)
#define channel_AN4_SetDigitalMode() do { ANCON0bits.ANSEL4 = 0; } while(0)

// get/set channel_AN10 aliases
#define channel_AN10_TRIS               TRISBbits.TRISB0
#define channel_AN10_LAT                LATBbits.LATB0
#define channel_AN10_PORT               PORTBbits.RB0
#define channel_AN10_WPU                WPUBbits.WPUB0
#define channel_AN10_ANS                ANCON1bits.ANSEL10
#define channel_AN10_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define channel_AN10_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define channel_AN10_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define channel_AN10_GetValue()           PORTBbits.RB0
#define channel_AN10_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define channel_AN10_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define channel_AN10_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define channel_AN10_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define channel_AN10_SetAnalogMode()  do { ANCON1bits.ANSEL10 = 1; } while(0)
#define channel_AN10_SetDigitalMode() do { ANCON1bits.ANSEL10 = 0; } while(0)

// get/set channel_AN8 aliases
#define channel_AN8_TRIS               TRISBbits.TRISB1
#define channel_AN8_LAT                LATBbits.LATB1
#define channel_AN8_PORT               PORTBbits.RB1
#define channel_AN8_WPU                WPUBbits.WPUB1
#define channel_AN8_ANS                ANCON1bits.ANSEL8
#define channel_AN8_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define channel_AN8_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define channel_AN8_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define channel_AN8_GetValue()           PORTBbits.RB1
#define channel_AN8_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define channel_AN8_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define channel_AN8_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define channel_AN8_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define channel_AN8_SetAnalogMode()  do { ANCON1bits.ANSEL8 = 1; } while(0)
#define channel_AN8_SetDigitalMode() do { ANCON1bits.ANSEL8 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()    do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()   do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()   do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()         PORTBbits.RB2
#define RB2_SetDigitalInput()   do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()  do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()     do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()   do { WPUBbits.WPUB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()    do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()   do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()   do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()         PORTBbits.RB3
#define RB3_SetDigitalInput()   do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()  do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()     do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()   do { WPUBbits.WPUB3 = 0; } while(0)

// get/set channel_AN9 aliases
#define channel_AN9_TRIS               TRISBbits.TRISB4
#define channel_AN9_LAT                LATBbits.LATB4
#define channel_AN9_PORT               PORTBbits.RB4
#define channel_AN9_WPU                WPUBbits.WPUB4
#define channel_AN9_ANS                ANCON1bits.ANSEL9
#define channel_AN9_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define channel_AN9_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define channel_AN9_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define channel_AN9_GetValue()           PORTBbits.RB4
#define channel_AN9_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define channel_AN9_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define channel_AN9_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define channel_AN9_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define channel_AN9_SetAnalogMode()  do { ANCON1bits.ANSEL9 = 1; } while(0)
#define channel_AN9_SetDigitalMode() do { ANCON1bits.ANSEL9 = 0; } while(0)

// get/set IO_RC0 aliases
#define IO_RC0_TRIS               TRISCbits.TRISC0
#define IO_RC0_LAT                LATCbits.LATC0
#define IO_RC0_PORT               PORTCbits.RC0
#define IO_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_RC0_GetValue()           PORTCbits.RC0
#define IO_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set IO_RC1 aliases
#define IO_RC1_TRIS               TRISCbits.TRISC1
#define IO_RC1_LAT                LATCbits.LATC1
#define IO_RC1_PORT               PORTCbits.RC1
#define IO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_RC1_GetValue()           PORTCbits.RC1
#define IO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set IO_RC2 aliases
#define IO_RC2_TRIS               TRISCbits.TRISC2
#define IO_RC2_LAT                LATCbits.LATC2
#define IO_RC2_PORT               PORTCbits.RC2
#define IO_RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_RC2_GetValue()           PORTCbits.RC2
#define IO_RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()    do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()   do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()   do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()         PORTCbits.RC3
#define RC3_SetDigitalInput()   do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()  do { TRISCbits.TRISC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()    do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()   do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()   do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()         PORTCbits.RC4
#define RC4_SetDigitalInput()   do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()  do { TRISCbits.TRISC4 = 0; } while(0)

// get/set IO_RC7 aliases
#define IO_RC7_TRIS               TRISCbits.TRISC7
#define IO_RC7_LAT                LATCbits.LATC7
#define IO_RC7_PORT               PORTCbits.RC7
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

// get/set IO_RD6 aliases
#define IO_RD6_TRIS               TRISDbits.TRISD6
#define IO_RD6_LAT                LATDbits.LATD6
#define IO_RD6_PORT               PORTDbits.RD6
#define IO_RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IO_RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IO_RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IO_RD6_GetValue()           PORTDbits.RD6
#define IO_RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IO_RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)

// get/set IO_RD7 aliases
#define IO_RD7_TRIS               TRISDbits.TRISD7
#define IO_RD7_LAT                LATDbits.LATD7
#define IO_RD7_PORT               PORTDbits.RD7
#define IO_RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IO_RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IO_RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IO_RD7_GetValue()           PORTDbits.RD7
#define IO_RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IO_RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)

// get/set IO_RE0 aliases
#define IO_RE0_TRIS               TRISEbits.TRISE0
#define IO_RE0_LAT                LATEbits.LATE0
#define IO_RE0_PORT               PORTEbits.RE0
#define IO_RE0_ANS                ANCON0bits.ANSEL5
#define IO_RE0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define IO_RE0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define IO_RE0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define IO_RE0_GetValue()           PORTEbits.RE0
#define IO_RE0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define IO_RE0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define IO_RE0_SetAnalogMode()  do { ANCON0bits.ANSEL5 = 1; } while(0)
#define IO_RE0_SetDigitalMode() do { ANCON0bits.ANSEL5 = 0; } while(0)

// get/set channel_AN6 aliases
#define channel_AN6_TRIS               TRISEbits.TRISE1
#define channel_AN6_LAT                LATEbits.LATE1
#define channel_AN6_PORT               PORTEbits.RE1
#define channel_AN6_ANS                ANCON0bits.ANSEL6
#define channel_AN6_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define channel_AN6_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define channel_AN6_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define channel_AN6_GetValue()           PORTEbits.RE1
#define channel_AN6_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define channel_AN6_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define channel_AN6_SetAnalogMode()  do { ANCON0bits.ANSEL6 = 1; } while(0)
#define channel_AN6_SetDigitalMode() do { ANCON0bits.ANSEL6 = 0; } while(0)

// get/set channel_AN7 aliases
#define channel_AN7_TRIS               TRISEbits.TRISE2
#define channel_AN7_LAT                LATEbits.LATE2
#define channel_AN7_PORT               PORTEbits.RE2
#define channel_AN7_ANS                ANCON0bits.ANSEL7
#define channel_AN7_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define channel_AN7_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define channel_AN7_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define channel_AN7_GetValue()           PORTEbits.RE2
#define channel_AN7_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define channel_AN7_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define channel_AN7_SetAnalogMode()  do { ANCON0bits.ANSEL7 = 1; } while(0)
#define channel_AN7_SetDigitalMode() do { ANCON0bits.ANSEL7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/