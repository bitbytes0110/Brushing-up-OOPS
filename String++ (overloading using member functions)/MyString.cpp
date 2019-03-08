#include "pch.h"
#include "MyString.h"

MyString::MyString()
	:str{nullptr}
{
	cout << "This is a no args constructor !"<<endl;
	str = new char[1];
	*str = '\0';
}

MyString::MyString(const char *s)
	:str{ nullptr }
{
	cout << "This is a overloaded constructor !"<<endl;
	if (s == nullptr)
	{
		str = new char[1];
		*str = '\0';
	}
	else
	{
		str = new char[strlen(s) + 1];
		strcpy_s(str, strlen(s) + 1, s);
	}
}

MyString::MyString(const MyString &source)
	:str{ nullptr }
{
	cout << "Copy constructor used"<<endl;
	str = new char[strlen(source.str) + 1];
	strcpy_s(str, strlen(source.str) + 1, source.str);
}

MyString::MyString(MyString &&source)
	:str{ source.str }
{
	cout << "Move constructor used"<< endl;
	source.str = nullptr;
}

ostream &operator<<(ostream &os, const MyString &obj)
{
	os<< obj.str;
	return os;
}

MyString &MyString::operator=(const MyString &rhs)
{
	int length = strlen(rhs.str);
	str = new char[length + 1];
	strcpy_s(str, length + 1, rhs.str);
	return *this;
}

MyString &MyString::operator=(MyString &&rhs)
{
	delete []str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

MyString& MyString::operator-() const
{
	char* buff = new char[strlen(str) + 1];
	strcpy_s(buff, strlen(str) + 1, str);
	for (int i = 0; i < strlen(str); i++)
	{
		buff[i] = tolower(buff[i]);
	}
	
	MyString *temp = new MyString(buff);
	delete[] buff;
	
	return *temp;
}

bool MyString::operator==(const MyString &rhs) const
{
	return (strcmp(str, rhs.str) == 0);
}

bool MyString::operator!=(const MyString &rhs) const
{
	return !(strcmp(str, rhs.str) == 0);
}

bool MyString::operator<(const MyString &rhs) const
{
	return strcmp(str, rhs.str) < 0;
}

bool MyString::operator>(const MyString &rhs) const
{
	return strcmp(str, rhs.str) > 0;
}

MyString& MyString::operator+(const MyString &rhs)
{
	int str1len = strlen(str);
	int str2len = strlen(rhs.str);

	char* buff = new char[str1len + str2len + 1];
	strcpy_s(buff, str1len + str2len + 1, str);
	strcat_s(buff, str1len + str2len + 1, rhs.str);


	MyString *temp = new MyString(buff);
	delete[] buff;
	return *temp;

}

MyString& MyString::operator+=(const MyString &rhs)
{
	*this = *this + rhs;
	return *this;

}

MyString& MyString::operator*(int mul)
{
	MyString* temp = new MyString;
	for (int i = 0; i < mul; i++)
	{
		*temp = *temp + *this;
	}
	return *temp;
}

MyString& MyString::operator*=(int mul)
{
	*this = *this * mul;
	return *this;
}

MyString& MyString::operator++()
{
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}
	return *this;
}

MyString& MyString::operator++(int)
{
	MyString* temp = new MyString(*this);
	operator++();
	return *temp;
}

MyString::~MyString()
{
	if(str)
		delete[]str;
}
