#include "Etudiant.h"

Etudiant::Etudiant(int C_E, string N_E, string P_E, string I_E, string M_E, string ADD_E)
{
	this->CNE = C_E;
	this->name_E = N_E;
	this->prenom_E = P_E;
	this->CIN_E = I_E;
	this->Email_E = M_E;
	this->address_E = ADD_E;
}

void Etudiant::print() const 
{
	cout << "(" << this->CNE << "," << this->name_E << "," << this->prenom_E << "," << this->CIN_E << "," << this->Email_E << "," << this->address_E << "(" << endl;
}

Etudiant::~Etudiant()
{

	delete this;

}

bool Etudiant::operator==(const Etudiant& E)
{
	if (this->CNE == E.CNE && this->name_E == E.name_E && this->prenom_E == E.prenom_E) {
		return true;
	}
	return false;
}
