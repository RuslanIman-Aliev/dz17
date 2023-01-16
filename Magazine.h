#pragma once
#include<vector>
using std::vector;
#include"Publication.h"
class Magazine : public Publication
{
protected:
	vector<string> articles;
public:
	Magazine();
	Magazine(string name,
		string author,
		int year);
	vector <string>	getArticles()const;
	void add(string articl);
	virtual void show()const;
};



