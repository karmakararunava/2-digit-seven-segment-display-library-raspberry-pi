#include <stdio.h>
#include <wiringPi.h>

#include "oneDigitCC.h"

int oneDigitCC(int toDisplay,int wait)
{
	pinMode(A, OUTPUT);
	pinMode(B, OUTPUT);
	pinMode(C, OUTPUT);
	pinMode(D, OUTPUT);
	pinMode(E, OUTPUT);
	pinMode(F, OUTPUT);
	pinMode(G, OUTPUT);
	switch(toDisplay)
	{
		case 0:
			digitalWrite(A,1);
			digitalWrite(B,1);
			digitalWrite(C,1);
			digitalWrite(D,1);
			digitalWrite(E,1);
			digitalWrite(F,1);
			digitalWrite(G,0);
			delay(wait);
			break;
		case 1:
			digitalWrite(A,0);
			digitalWrite(B,1);
			digitalWrite(C,1);
			digitalWrite(D,0);
			digitalWrite(E,0);
			digitalWrite(F,0);
			digitalWrite(G,0);
			delay(wait);
			break;
		case 2:
			digitalWrite(A,1);
			digitalWrite(B,1);
			digitalWrite(C,0);
			digitalWrite(D,1);
			digitalWrite(E,1);
			digitalWrite(F,0);
			digitalWrite(G,1);
			delay(wait);
			break;
		case 3:
			digitalWrite(A,1);
			digitalWrite(B,1);
			digitalWrite(C,1);
			digitalWrite(D,1);
			digitalWrite(E,0);
			digitalWrite(F,0);
			digitalWrite(G,1);
			delay(wait);
			break;
		case 4:
			digitalWrite(A,0);
			digitalWrite(B,1);
			digitalWrite(C,1);
			digitalWrite(D,0);
			digitalWrite(E,0);
			digitalWrite(F,1);
			digitalWrite(G,1);
			delay(wait);
			break;
		case 5:
			digitalWrite(A,1);
			digitalWrite(B,0);
			digitalWrite(C,1);
			digitalWrite(D,1);
			digitalWrite(E,0);
			digitalWrite(F,1);
			digitalWrite(G,1);
			delay(wait);
			break;
		case 6:
			digitalWrite(A,1);
			digitalWrite(B,0);
			digitalWrite(C,1);
			digitalWrite(D,1);
			digitalWrite(E,1);
			digitalWrite(F,1);
			digitalWrite(G,1);
			delay(wait);
			break;
		case 7:
			digitalWrite(A,1);
			digitalWrite(B,1);
			digitalWrite(C,1);
			digitalWrite(D,0);
			digitalWrite(E,0);
			digitalWrite(F,0);
			digitalWrite(G,0);
			delay(wait);
			break;
		case 8:
			digitalWrite(A,1);
			digitalWrite(B,1);
			digitalWrite(C,1);
			digitalWrite(D,1);
			digitalWrite(E,1);
			digitalWrite(F,1);
			digitalWrite(G,1);
			delay(wait);
			break;
		case 9:
			digitalWrite(A,1);
			digitalWrite(B,1);
			digitalWrite(C,1);
			digitalWrite(D,1);
			digitalWrite(E,0);
			digitalWrite(F,1);
			digitalWrite(G,1);
			delay(wait);
			break;
		default:
			digitalWrite(A,0);
			digitalWrite(B,1);
			digitalWrite(C,1);
			digitalWrite(D,0);
			digitalWrite(E,1);
			digitalWrite(F,1);
			digitalWrite(G,1);
			delay(500);
			
			digitalWrite(A,0);
                        digitalWrite(B,1);
                        digitalWrite(C,1);
                        digitalWrite(D,0);
                        digitalWrite(E,1);
                        digitalWrite(F,1);
                        digitalWrite(G,1);
                        delay(500);
                        break;

	}
	digitalWrite(A,0);
	digitalWrite(B,0);
	digitalWrite(C,0);
	digitalWrite(D,0);
	digitalWrite(E,0);
	digitalWrite(F,0);
	digitalWrite(G,0);
	return 0;
}
