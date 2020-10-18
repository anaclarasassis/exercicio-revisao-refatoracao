#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    std::string nome;  
    double quotaMensalVendas;
  public:
	
	double getquotaMensalVendas () {
		return quotaMensalVendas;
	}
	void setquotaMensalVendas (double q) {
		setquotaMensalVendas = q;
	}		
	
	double quotaTotalAnual() {
	  int meses = 12	
	  return getquotaMensalVendas * meses;
	}
	
};

