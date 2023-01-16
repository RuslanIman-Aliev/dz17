#pragma once
#include"Book.h"
#include"Magazine.h"
#include"Publication.h"
class Library
{
	string name;
	vector<Publication* > lib;
public:
	Library(string name);
	string getName()const;
	void setName(string name);
	void showAll()const;
	void add(Publication* obj);
	void delbypos(int pos);
	void findbyName(string name);
	void findbyAuthor(string author);
};

