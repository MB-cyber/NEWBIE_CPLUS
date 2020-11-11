#pragma once
#include<iostream>
#include <string>
using namespace std;
class Modules
{
private:
	string  Name_M; // M for MOdules
	int  Cof_M;
	string *Tab_prof_M;

public:

	Modules(string, int);
	Modules(const Modules &M); // constructur de recopier 
	void print();
	~Modules();



};
