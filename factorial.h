#ifndef FACTORIAL_H
#define FACTORIAL_H

#include <stdint.h>

/* Takes a value through first argument and returns via an unsigned integer.
 * Return value is 0 for invalid entry.
 * (Too large, not a number or negative).
 */
uintmax_t factorial(uint16_t factor);

/* Takes a value through first argument and returns via an unsigned integer. 
 * Return value is set via the second argument for invalid entry. 
 * (Too large, not a number or negative).
 */
uintmax_t factorial(uint16_t factor, bool retValue);

#endif
