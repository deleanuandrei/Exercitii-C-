#include <iostream>
#include "punct.h"

using namespace std;

Punct :: Punct (float a, float b)
{
	x = a;
	y = b;
	
}
Punct :: Punct ()
{
	x = 0;
	y = 0;
	
}
float Punct :: getX()
{
	return x;
	
}

float Punct :: getY()
{
	return y;
	
}

void Punct :: setX(float a)
{
	x = a;
}

void Punct :: setY(float b)
{
	y = b;
}

