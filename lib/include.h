
#ifndef INCLUDE_H_
#define INCLUDE_H_

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "TM4C1294NCPDT.h"

// fin  = fxtal / [(Q+1) * (N+1)]
//      = 25MHz / [(0+1) * (4+1)] = 5MHz
// fvoc = fin * MDIV
//      = 5MHz * 96.00 = 480MHz
// fsyclk = fvco / (PSYSDIV + 1)
//        = 480 / (3 + 1 ) = 120MHz

#define MINT    96
#define MFRAC   0
#define N       4
#define Q       0
#define PSYSDIV 23

#define FBCHT   0x6
#define EBCHT   0x6
#define FBCE    0
#define EBCE    0
#define FWS     0x5
#define EWS     0x5
#define MB1     0x00100010

#define F100HZ (20000000/100)

#define NVIC_ST_CTRL_COUNT      0x00010000  // Count flag
#define NVIC_ST_CTRL_CLK_SRC    0x00000004  // Clock Source
#define NVIC_ST_CTRL_INTEN      0x00000002  // Interrupt enable
#define NVIC_ST_CTRL_ENABLE     0x00000001  // Counter mode
#define NVIC_ST_RELOAD_M        0x00FFFFFF  // Counter load value



#include "PLL.h"
#include "GPIO.h"
#include "UART.h"






#endif /* INCLUDE_H_ */