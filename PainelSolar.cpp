/*>Discente: Andreza Vilar de Farias
>Matr�cula: 120210357
>Per�odo: 2020.2
>Curso: Engenharia El�trica
>Disciplina: T�cnicas de Programa��o
>Turma: 01
>Professor: Marcus Salerno
>Unidade 2 : lvp 4*/

#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;


class Empresa_Solar{
	private: 
		float pot_residencia;
		float valor_mensal;
		float pot_painel = 31.20;
		int paineis;                 
	public:     
		void set_potencia(float);
		void set_valormensal(float);
		void calcula_paineis();
		int get_paineis();        
		int calcula_area_minima();
		float economia();

 };
  
  
//depois do prototipo da classe, cada fun��o vai ser implementada
 void Empresa_Solar :: set_potencia(float pot) {
	 pot_residencia = pot;
 }
 
 void Empresa_Solar :: set_valormensal(float gasto){
	 valor_mensal = gasto;
 }
 
 void Empresa_Solar :: calcula_paineis(){
     paineis = ceil (pot_residencia/pot_painel);
 }
 
 
 int Empresa_Solar :: get_paineis(){
	 return paineis;
 }
 
int Empresa_Solar :: calcula_area_minima(){
    return paineis * 2;
}
 
float Empresa_Solar :: economia(){
    return (0.95 * valor_mensal * 12);
}
 
 
 
 int main (){
	 setlocale(LC_ALL,"Portuguese");
	 
	 Empresa_Solar eficiencia; //instancia��o dos objetos
	 float pot;
	 float gasto;
	 
	 cout<<"Pot�ncia mensal kwh: "<<endl;
	 cin >> pot;
	 cout<<"Gasto mensal em R$: "<<endl;
	 cin >> gasto;
	 
	 eficiencia.set_potencia(pot);
	 eficiencia.set_valormensal(gasto);
	 eficiencia.calcula_paineis();
	
	 
	 cout<<"Quantidade de pain�is necess�rios: "<<fixed<< setprecision(2)<<eficiencia.get_paineis()<<endl;
	 cout<<"�rea m�nima para instala��o : "<<fixed<< setprecision(2)<<eficiencia.calcula_area_minima()<<"m�"<<endl;
	 cout<<"Economia anual: "<<fixed<< setprecision(2)<<eficiencia.economia()<<"R$"<<endl;
	 
	 
	 return 0;
 }