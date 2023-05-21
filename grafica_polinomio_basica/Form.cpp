//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Form.h"
#include "poli.h"
#include "Graficadora.h"
#include <Vcl.Graphics.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
poli pl;
Graficadora g;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::insertar1Click(TObject *Sender)
{
	int a = StrToInt(InputBox("Insertar Dato","Coeficiente",""));
	int b = StrToInt(InputBox("Insertar Dato","exponente",""));
	pl.inserta(a,b);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Crear1Click(TObject *Sender)
{
  int a;
  pl.crear();
  g.crear(Image1);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Mostrar1Click(TObject *Sender)
{
   pl.Mostrar(Label1);
}
//---------------------------------------------------------------------------





void __fastcall TForm3::Graficar1Click(TObject *Sender)
{
	Image1->Canvas->Refresh();
	double x = -15;
	double b = 15;

	while(x <= b){
		double y = pl.resultado(x);
		g.dibujarPunto(x, y, clPurple);

		x = x + 0.01;
    }
}
//---------------------------------------------------------------------------


