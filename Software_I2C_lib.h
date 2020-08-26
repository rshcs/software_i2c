// Software_I2C_lib.h

#ifndef _SOFTWARE_I2C_LIB_h
#define _SOFTWARE_I2C_LIB_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Software_I2C_lib
{
 private:
	 int _sdaPin, _sclPin;

 public:
	Software_I2C_lib(int sdaPin, int sclPin);
	void init();
	int write(byte transferByte);
	int txBegin();
	int txEnd();
};

//extern Software_I2C_lib;

#endif

