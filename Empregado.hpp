#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

   private:  

	std::string getnome {
		return nome;
	}
	void setnome (std::string n) {
		n = nome;
	}

	double getsalarioHora () {
		return salarioHora;
	}
	void setsalrioHora (double s) {
		setsalarioHora = s;
	}	

	double getpagamentoMes () {
		return pagamentoMes;
	}
	void setpagamentoMes (double p) {
		setpagamentoMes = p;
	}	

       std::string nome;
       double salarioHora;  
       const double horasFixas = 8;
       double pagamentoMes (double horasTrabalhadas){
	       double horasTotais = horasTrabalhadas;
       };

	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
         if (horasTrabalhadas > horasFixas) {
          double horaExtra = horasTrabalhadas - horasFixas;
          horasTrabalhadas = horasTrabalhas + (horaExtra / 2);
      }
	  return t * salarioHora;
		 return horasTrabalhadas * salarioHora;
    }



};

#endif 
#endif
