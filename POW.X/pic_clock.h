/******************************************************************************************
 * pic_clock.h
 * ver1.00
 * Hirofumi Hamada
 *=========================================================================================
 * 電源系用クロック周波数設定ファイル
 *
 *=========================================================================================
 * ・ver1.00 || 2016/03/15 || Hirofumi Hamada
 *   初版作成
 *=========================================================================================
 * PIC16F886
 * XC8
 * MPLAB X IDE
 *=========================================================================================
 * Created by fabsat Project(Tokai university Satellite Project[TSP])
 *****************************************************************************************/
#ifndef PIC_CLOCK_H
#define PIC_CLOCK_H

#include <xc.h>


/* クロック周波数を定義 */
#define _XTAL_FREQ (20000000)


/* バイト長で型定義 */
typedef signed char   int8_t;
typedef unsigned char uint8_t;
typedef signed int    int16_t;
typedef unsigned int  uint16_t;


#endif
