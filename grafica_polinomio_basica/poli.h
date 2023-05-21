//---------------------------------------------------------------------------

#ifndef poliH
#define poliH
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------

const MaxPoli=100;
class poli{
private:
	int lon;
	int coefi[MaxPoli];
	int expo[MaxPoli] ;
public:
	void crear();
	void inserta(int coef,int exp);
	double resultado(double numero);
	void Mostrar(TLabel *);
	void Graficar(TImage *);
};
#endif
