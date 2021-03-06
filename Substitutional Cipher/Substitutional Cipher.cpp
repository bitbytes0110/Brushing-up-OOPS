// Substitutional Cipher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Substitutional Cipher\n"; 


	string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key{ "*XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

	if (alphabet.length() == key.length())
		cout << "Key set!" << endl;
	else
			cout << "Something wrong with the key"<<endl;

	string secretMessage, encryptedMessage, decryptedMessage;
	cout << "Enter secret message : ";
	getline(cin, secretMessage);
	size_t index;

	for (char c : secretMessage)
	{
		index = alphabet.find(c);
		if (index != string::npos)
		{
			encryptedMessage += key.at(index);
		}
		else
		{
			encryptedMessage += c;
		}

	}

	cout << "Encrypting message..."<<endl;
	   
	cout << "Encrypted Message : " << encryptedMessage<<endl;

	cout << "Decrypting message..." << endl;
	   
	for (char c : encryptedMessage)
	{
		index = key.find(c);
		if (index != string::npos)
		{
			decryptedMessage += alphabet.at(index);
		}
		else
		{
			decryptedMessage += c;
		}
	}

	cout << "Decrypted Message : " << decryptedMessage<<endl;

}
