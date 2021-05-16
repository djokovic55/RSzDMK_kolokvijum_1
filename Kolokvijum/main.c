
/**
 * @file main.c
 * @brief Aplikacija za artimeticki niz
 * @author Aleksa Djokovic
 * @date 16-05-2021
 * @version 1.0
 *
 */
#include <string.h>
#include <stdint.h>
#include <util/delay.h>
#include <stdio.h>
#include <avr/pgmspace.h>
#include "../usart/usart.h"
#include "../PIN/pin.h"
#include "../Timer0/timer0.h"
#include "../arrays/arrays.h"
#define FORMULA 1
#define ITERATIVE 2
int main()
{
	uint16_t prvi_clan, razlika, clan_niza;
	usartInit(9600);
	int16_t ispis[60];

	uint16_t nclan, nsuma;


	while(1)
	{

		usartPutString("\r\n");
		sprintf(ispis, "Prvi element niza:");
		usartPutString(ispis);

		while(usartAvailable() == 0);
		_delay_ms(100);

		prvi_clan = usartParseInt();



		usartPutString("\r\n");
		sprintf(ispis, "Prvi razliku:");
		usartPutString(ispis);

		while(usartAvailable() == 0);
		_delay_ms(100);

		razlika = usartParseInt();

		usartPutString("\r\n");
		sprintf(ispis, "Unesite clan niza:");
		usartPutString(ispis);

		while(usartAvailable() == 0);
		_delay_ms(100);

		clan_niza = usartParseInt();


		nclan = Element(prvi_clan, razlika, clan_niza);


		usartPutString("\r\n");
		sprintf(ispis, "Element niza: %d", nclan);
		usartPutString(ispis);




		nsuma = Sum (prvi_clan, razlika,clan_niza, FORMULA);

		usartPutString("\r\n");
		sprintf(ispis, "Suma niza: %d", nsuma);
		usartPutString(ispis);


	}



return 0;
}
