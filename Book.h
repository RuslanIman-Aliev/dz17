#pragma once
#include"Publication.h"
class Book : public Publication {
	string resume;
public:
	Book();
	Book(string name,
		string author,
		int year, string resume);
	void setResume(string resume);
	string getResume()const;
	virtual void show()const;
};

