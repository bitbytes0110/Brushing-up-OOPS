#include "pch.h"
#include "InsufficientFundsException.h"


InsufficientFundsException::InsufficientFundsException()
{
}

const char* InsufficientFundsException::what() const noexcept
{
	return "Insufficient Funds Exception";
}

InsufficientFundsException::~InsufficientFundsException()
{
}
