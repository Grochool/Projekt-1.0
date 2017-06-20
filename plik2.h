//---------------------------------------------------------------------------

#ifndef projektH
#define projektH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Pole1;
        TImage *Pole2;
        TImage *Pole3;
        TImage *Pole4;
        TImage *Pole5;
        TImage *Pole6;
        TImage *Pole7;
        TImage *Pole8;
        TImage *Pole9;
        TLabel *fjn;
        TImage *Kolej;
        TButton *Button1;
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
