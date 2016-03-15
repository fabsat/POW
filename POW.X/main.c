/******************************************************************************************
 * main.c
 * ver1.00
 * Satoshi Nakamura
 *=========================================================================================
 * 電源系のmainファイル
 *
 *=========================================================================================
 * ・ver1.00 || 2016/03/15 || Satoshi Nakamura
 *   初版作成
 *=========================================================================================
 * PIC16F886
 * XC8
 * MPLAB X IDE
 *=========================================================================================
 * Created by fabsat Project(Tokai university Satellite Project[TSP])
 *****************************************************************************************/
#include <xc.h>
#include "pic_clock.h"
#include "system_protocol.h"
#include "spi_slave.h"
#include "isr.h"
#include "pow_app.h"




// CONFIG1
#pragma config FOSC  = HS     // Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE  = OFF    // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = ON     // Power-up Timer Enable bit (PWRT enabled)
#pragma config MCLRE = ON     // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP    = OFF    // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD   = OFF    // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON     // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO  = OFF    // Internal External Switchover bit (Internal/External Switchover mode is disabled)
#pragma config FCMEN = OFF    // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)
#pragma config LVP   = OFF    // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)

// CONFIG2
#pragma config BOR4V = BOR40V // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT   = OFF    // Flash Program Memory Self Write Enable bits (Write protection off)



/* static関数のプロトタイプ宣言 */
static void pic_port_init(void);



/******************************************************
 * main function
 *****************************************************/
int main(void)
{








    while(1)
    {
        ;
    }

    
    return 0;
}




/*-----------------------------------------------------
 * PICのPORTを初期化
 *---------------------------------------------------*/
static void pic_port_init(void)
{
    TRISA = 0x00;
    TRISB = 0x00;
    TRISC = 0x00;
    TRISE = 0x00;

    PORTA = 0x00;
    PORTB = 0x00;
    PORTC = 0x00;
    PORTE = 0x00;
}
