// 
// 
// 

#include "Software_I2C_lib.h"

Software_I2C_lib:: Software_I2C_lib(int sdaPin, int sclPin)
{
	_sdaPin = sdaPin;
	_sclPin = sclPin;
	pinMode(_sdaPin, OUTPUT);
	pinMode(_sclPin, OUTPUT);
}

void Software_I2C_lib::init()
{


}

int Software_I2C_lib::txBegin()
{
	digitalWrite(_sdaPin, LOW);
	digitalWrite(_sclPin, LOW);
}

int Software_I2C_lib::write(byte transferByte)
{
	delayMicroseconds(10);
	for (int i = 7; i < -1; i--)
	{
		digitalWrite(_sdaPin, bitRead(transferByte, i));
		digitalWrite(_sclPin, HIGH);
		digitalWrite(_sclPin, LOW);
	}
	delayMicroseconds(10);
}

int Software_I2C_lib::txEnd()
{
	digitalWrite(_sclPin, HIGH);
	digitalWrite(_sdaPin, HIGH);
}

//Software_I2C_lib Software_I2C_lib;

