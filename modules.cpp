
#include "modules.h"

Modules::Modules(string N_M, int C_M)

{
	
	this->Name_M = N_M;
	this->Cof_M = C_M;
	this->Tab_prof_M = new string [12];


}

Modules::Modules(const Modules& M)
{
	this->Name_M = M.Name_M;
	this->Cof_M = M.Cof_M;
	this->Tab_prof_M = new string[12];
	for (int i = 0; i < 12; i++) {
		this->Tab_prof_M[i] = M.Tab_prof_M[i];

	}
}

void Modules::print()
{

}

Modules::~Modules()
{
	delete[] this->Tab_prof_M;
	delete this;
}
