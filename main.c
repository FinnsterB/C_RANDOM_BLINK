/*
 * GccApplication2.c
 * STUPIDLY COMPLICATED RANDOM LED BLINK
 * Created: 30/01/2021 22:19:37
 * Author : finny
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>
int delayIndex;
void blinkRandomDelay(){
	delayIndex = rand(5);
	switch(delayIndex){
		case 0:
			PORTB |= 0B00100000;
			_delay_ms(300);
			PORTB &= ~0B00100000;
			_delay_ms(300);
			break;
		case 1:
			PORTB |= 0B00100000;
			_delay_ms(500);
			PORTB &= ~0B00100000;
			_delay_ms(500);
			break;
		case 2:
			PORTB |= 0B00100000;
			_delay_ms(700);
			PORTB &= ~0B00100000;
			_delay_ms(700);
			break;
		case 3:
			PORTB |= 0B00100000;
			_delay_ms(900);
			PORTB &= ~0B00100000;
			_delay_ms(900);
			break;
		case 4:
			PORTB |= 0B00100000;
			_delay_ms(1100);
			PORTB &= ~0B00100000;
			_delay_ms(1100);
			break;
	}
}

int main(void)
{
	DDRB |= 0b00100000;
    /* Replace with your application code */
    while (1) 
    {
		blinkRandomDelay();
    }
}

