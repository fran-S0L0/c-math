#ifndef FACTORIAL_H
#define FACTORIAL_H

#include <stdint.h>

/* Takes a value through first argument and returns via an unsigned integer.
 * Return value is 0 for invalid entry.
 * (Too large, not a number or negative).
 * Runs "factorialMath" for its calculations.
 */
uintmax_t factorial(uint16_t factor);

/* Takes a value through first argument and returns via an unsigned integer.
 * Return value is set via the second argument for invalid entry.
 * (Too large, not a number or negative).
 * Runs "factorialMath" for its calculations.
 */
uintmax_t factorial(uint16_t factor, uintmax_t returnValue);


/* Does the calculations for the factorial.
 * Takes a value through first argument and returns via an unsigned integer.
 * Can also be used on its own without the above checks but will cause errors * if input is invalid.
 */
uintmax_t factorialMath(uint16_t factor);

#endif