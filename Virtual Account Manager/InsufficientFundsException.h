#pragma once

#include <exception>

using namespace std;


class InsufficientFundsException :	public exception
{
public:
	InsufficientFundsException();
	virtual const char* what() const noexcept override;

	virtual ~InsufficientFundsException();
};

