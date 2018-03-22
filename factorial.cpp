#include "factorial.h"

uintmax_t factorial(uint8_t factor){
	
	const uintmax_t errorValue{0};
	uint8_t maxFactor[]{5, 8, 10, 12, 14, 16, 18, 20}; //128-34
	
	if(factor < 0){return errorValue;}
	if(factor > maxFactor[sizeof(errorValue)]){return errorValue;}
	else{return factorialMath(factor);}
}

uintmax_t factorial(uint8_t factor, uintmax_t errorValue){

	uint8_t maxFactor[]{5, 8, 10, 12, 14, 16, 18, 20}; //128-34
	
	if(factor < 0){return errorValue;}
	if(factor > maxFactor[sizeof(errorValue)]){return errorValue;}
	else{return factorialMath(factor);}
}

uintmax_t factorialMath(uint8_t factor){
	
	return (factor == 0 || factor == 1) ? 1 : factor * factorialMath(factor - 1);
}
