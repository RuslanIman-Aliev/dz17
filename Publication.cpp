#include "Publication.h"
#include"PublicationException.h"
Publication::Publication()
{
	if (year <= 0) {
		throw new EditionYearException;
	}
	try {
		name = "nn";
		author = "au";
		year = 1909;
	}
	catch (EditionYearException* m) {
		cout << "Message: " << m->showMessage() << endl;
	}
}

Publication::Publication(string name, string author, int year)
{
	if (year <= 0) {
		throw new EditionYearException;
	}
	try {
		this->name = name;
		this->author = author;
		this->year = year;
	}
	catch (EditionYearException* m) {
		cout << "Message: " << m->showMessage() << endl;
	}
}

void Publication::show() const
{
	cout << "Name: " << name << endl << "Author: " << author << endl << "Year: " << year << endl;
}

void Publication::setName(string name)
{
	this->name = name;
}

void Publication::setAuthor(string author)
{
	this->author = author;
}
void Publication::setYear(int year)
{
	this->year = year;
}

string Publication::getName() const
{
	return name;
}

string Publication::getAuthor() const
{
	return author;
}

int Publication::getYear() const
{
	return year;
}

