#include "Magazine.h"
#include"PublicationException.h"
Magazine::Magazine()
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

Magazine::Magazine(string name, string author, int year) :Publication(name, author, year)
{
	if (year <= 0) {
		throw new EditionYearException;
	}
}

vector<string> Magazine::getArticles() const
{
	return articles;
}

void Magazine::add(string articl)
{
	articles.push_back(articl);
}

void Magazine::show() const
{
	if (name.length() == 0 || author.length() == 0) {
		throw new BookException;
	}
	
	try
	{
		Publication::show();
		for (int i = 0; i < articles.size(); i++) {
			cout << "Articles: " << articles[i] << " " << ",";

		}
	}
	catch (BookException* m) {
		cout << "Message: " << m->showMessage() << endl;
	}
}

