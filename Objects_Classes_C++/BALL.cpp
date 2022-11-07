#include "BALL.h"

void BALL:: Jumping(int count) {
	size -= count/3;
}

void BALL::Rolling(int strength)
{
	size -= strength;
}

void BALL::Pumped(int pump)
{
	size += pump;
}