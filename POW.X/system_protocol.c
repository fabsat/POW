/******************************************************************************************
 * system_protocol.c
 * ver1.00
 * Satoshi Nakamura
 *=========================================================================================
 * 電源系用システムプロトコルライブラリのソースファイル
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
