#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

   private:
    std::string nome;  
    double quotaMensalVendas;
	double getquotaMensalVendas () {
		return quotaMensalVendas;
	}
	void setquotaMensalVendas (double q) {
		setquotaMensalVendas = q;
	}		 
	  int meses = 12	
	  return getquotaMensalVendas * meses;
	
};

