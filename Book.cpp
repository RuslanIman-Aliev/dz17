#include "Book.h"
#include"PublicationException.h"
Book::Book()
{
	if (year <= 0) {
		throw new EditionYearException;
	}
	try {
		name = "nn";
		author = "au";
		year = 1909;
		resume = "bad";
	}
	catch (EditionYearException* m) {
		cout << "Message: " << m->showMessage() << endl;
	}
}

Book::Book(string name, string author, int year, string resume) :Publication(name, author, year)
{
	if (year <= 0) {
		throw new EditionYearException;
	}
	try {
		this->resume = resume;
	}
	catch (EditionYearException* m) {
		cout << "Message: " << m->showMessage() << endl;
	}
}
void Book::setResume(string resume)
{
	this->resume = resume;
}

string Book::getResume() const
{
	return resume;
}

void Book::show() const
{
	if (name.length() == 0 || author.length() == 0) {
		throw new BookException;
	}
	try {
		Publication::show();
		cout << "Resume: " << resume << endl;
	}
	catch (BookException* m) {
		cout << "Message: " << m->showMessage()<<endl;
	}
}
