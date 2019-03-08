#pragma once

#include <exception>

using namespace std;

class IllegalBalanceException :	public exception
{
public:
	IllegalBalanceException();
	virtual const char* what() const noexcept override;

	virtual ~IllegalBalanceException();
};

