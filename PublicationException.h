#pragma once
#include<string>
#include <iostream>
using namespace std;

class PublicationException {
public:
	virtual  string showMessage()const = 0;

};
class BookException: public PublicationException {
public:
	virtual string showMessage()const {
		return "No name or author" ;
	}
};
class EditionYearException : public PublicationException {
public:
	virtual string showMessage()const {
		return "Unable to create publication - invalid publication year ";
	}
};