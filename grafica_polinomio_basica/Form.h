//---------------------------------------------------------------------------

#ifndef FormH
#define FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>


#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Crear1;
	TMenuItem *insertar1;
	TMenuItem *Mostrar1;
	TLabel *Label1;
	TImage *Image1;
	TMenuItem *Graficar1;
	void __fastcall insertar1Click(TObject *Sender);
	void __fastcall Crear1Click(TObject *Sender);
	void __fastcall Mostrar1Click(TObject *Sender);
	void __fastcall Graficar1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
