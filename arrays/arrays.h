/**
 * @file arrays.h
 * @brief Datoteka
 * @author Aleksa Djokovic
 * @date 16-05-2021
 * @version 1.0
 *
 */
#include <stdint.h>
#define FORMULA 1
#define ITERATIVE 2
#ifndef ARRAYS_H_
#define ARRAYS_H_

/**
 * Element - racuna n-ti clan niza
 * @param first_element
 * @param difference
 * @param n
 * @return n-ti clan
 *
 */
int16_t Element(int16_t first_element, int16_t difference, int16_t n);

/**
 * Element - racuna n-ti clan niza
 * @param first_element
 * @param difference
 * @param mode
 * @return suma n-tog clana
 *
 */
int16_t Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode);


#endif /* ARRAYS_H_ */
