/**
 * @file arrays.c
 * @brief Datoteka
 * @author Aleksa Djokovic
 * @date 16-05-2021
 * @version 1.0
 *
 */

#include "arrays.h"
#define FORMULA 1
#define ITERATIVE 2

int16_t Element(int16_t first_element, int16_t difference, int16_t n)
{

	int16_t nclan;

	nclan = first_element + ((n - 1) * difference);

	return nclan;
}



int16_t Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode)
{
	int16_t suma = 0;

	if(mode == FORMULA)
	{
		suma = (n / 2) * ((2 * first_element) + ((n - 1) * difference));

	}
	else if (mode == ITERATIVE)
	{
		for(uint8_t i = 0; i < n; i++)
		{
			suma = first_element + (i * difference);

		}

	}

	return suma;

}

