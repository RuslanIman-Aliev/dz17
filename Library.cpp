#include "Library.h"
using std::cin;
Library::Library(string name)
{
	this->name = name;
}

string Library::getName() const
{
	return name;
}

void Library::setName(string name)
{
	this->name = name;
}

void Library::showAll() const
{
	for (int i = 0; i < lib.size(); i++) {
		lib[i]->show();
	}
}

void Library::add(Publication* obj)
{
	lib.push_back(obj);
}

void Library::delbypos(int pos)
{
	if (pos <= lib.size()) {
		lib.erase(lib.begin() + pos - 1);
	}
}

void Library::findbyName(string name)
{
	cout << "input Name: " << endl;
	cin.ignore();
	getline(cin, name);
	for (int i = 0; i < lib.size(); i++) {
		if (lib[i]->getName() == name)
			lib[i]->show();
	}
}

void Library::findbyAuthor(string author)
{
	cout << "input Author: " << endl;
	cin.ignore();
	getline(cin, author);
	for (int i = 0; i < lib.size(); i++) {
		if (lib[i]->getAuthor() == author)
			lib[i]->show();
	}
}
