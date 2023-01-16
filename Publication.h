#pragma once
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
class Publication {
protected:
	string name;
	string author;
	int year;
public:
	Publication();
	Publication(string name,
		string author,
		int year);
	virtual void show()const;
	void setName(string name);
	void setAuthor(string author);
	void setYear(int year);
	string getName()const;
	string getAuthor()const;
	int getYear()const;
};
