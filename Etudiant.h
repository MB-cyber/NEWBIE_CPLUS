#pragma once
#include<iostream>
#include <string>

using namespace std;

class Etudiant
{
private:
	int	  CNE;
	string name_E; // the E stand for Etudient
	string prenom_E;
	string CIN_E;
	string  Email_E;
	string  address_E;
public:

	Etudiant(int, string, string, string, string, string);// contructure
	void print() const ; // const for protection .object;
	~Etudiant(); // destructure
	
	bool operator==(const Etudiant &E); //surcharge operator

};

