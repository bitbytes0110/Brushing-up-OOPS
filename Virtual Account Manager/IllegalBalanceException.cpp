#include "pch.h"
#include "IllegalBalanceException.h"


IllegalBalanceException::IllegalBalanceException()
{
}

const char* IllegalBalanceException::what() const noexcept
{
	return "Illegal Balance Exception" ;
}

IllegalBalanceException::~IllegalBalanceException()
{
}
