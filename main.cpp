#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.nome = setnome ("Joao Snow");
  eng1.setsalarioHora = 35;
  eng1.setprojetos = 3; 
  std::cout << "Nome: " << eng1.getnome << std::endl;
  std::cout << "Salario Mes: " << eng1.getpagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << eng1.getprojetos << std::endl;
  std::cout << std::endl;
  
  Engenheiro eng2;
  eng2.nome = setnome ("Daniela Targaryen");
  eng2.setsetsalarioHora = 30;
  eng2.setprojetos = 1; 
  std::cout << "Nome: " << eng2.getnome << std::endl;
  std::cout << "Salario Mes: " << eng2.getpagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng2.getprojetos << std::endl;  
  std::cout << std::endl;
  
  Engenheiro eng3;
  eng3.nome = setnome ("Bruno Stark");
  eng3.setsalarioHora = 30;
  eng3.setprojetos = 2; 
  std::cout << "Nome: " << eng3.getnome << std::endl;
  std::cout << "Salario Mes: " << eng3.getpagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng3.getprojetos << std::endl;  
  std::cout << std::endl;
  
  
  Vendedor vend1;
  vend1.nome = setnome ("Tonho Lannister");
  vend1.setsalarioHora = 20;
  vend1.setquotaMensalVendas = 5000;
  
  std::cout << "Nome: " << vend1.getnome << std::endl;
  std::cout << "Salario Mes: " << vend1.getpagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.getquotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor vend2;
  vend2.nome = setnome ("Jose Mormont");
  vend2.setsalarioHora = 25;
  vend2.setquotaMensalVendas = 3000;
  
  std::cout << "Nome: " << vend2.getnome << std::endl;
  std::cout << "Salario Mes: " << vend2.getpagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend2.getquotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor vend3;
  vend3.nome = setnome ("Sonia Stark");
  vend3.setsalarioHora = 30;
  vend3.setquotaMensalVendas = 4000;
  
  std::cout << "Nome: " << vend3.getnome << std::endl;
  std::cout << "Salario Mes: " << vend3.getpagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend3.getquotaTotalAnual() << std::endl;  
  
  return 0;	
}
