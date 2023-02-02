#include "main.h"
/**
  *_abs - the function computes the absolute value of an interger
  *@x: This is the value being evaluated
  *Return: x if x> 0 or -1 if x<0
  */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
