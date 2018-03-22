#include "factorial.h"

uintmax_t factorial(uint16_t factor){
	
	const uintmax_t errorValue{0};
	uint8_t maxFactor[]{5, 8, 10, 12, 14, 16, 18, 20}; //128-34
	
	if(factor < 0 || factor > maxFactor[sizeof(uintmax_t)-1]){
		return errorValue;
	};;
	else{return factorialMath(factor);}
}

uintmax_t factorial(uint16_t factor, uintmax_t returnValue){
	
	const uintmax_t errorValue{returnValue};
	uint8_t maxFactor[]{5, 8, 10, 12, 14, 16, 18, 20}; //128-34
	
	if(factor < 0 || factor > maxFactor[sizeof(uintmax_t)-1]){
		return errorValue;
	}
	else{return factorialMath(factor);}
}

uintmax_t factorialMath(uint16_t factor){
	
	return (factor == 0 || factor == 1) ? 1 : factor * factorialMath(factor - 1);
}
