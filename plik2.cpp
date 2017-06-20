//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "projekt.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        Pole1 -> Picture -> LoadFromFile("pustka.bmp");
         Pole2 -> Picture -> LoadFromFile("pustka.bmp");
          Pole3 -> Picture -> LoadFromFile("pustka.bmp");
           Pole4 -> Picture -> LoadFromFile("pustka.bmp");
            Pole5 -> Picture -> LoadFromFile("pustka.bmp");
             Pole6 -> Picture -> LoadFromFile("pustka.bmp");
              Pole7 -> Picture -> LoadFromFile("pustka.bmp");
               Pole8 -> Picture -> LoadFromFile("pustka.bmp");
                Pole9 -> Picture -> LoadFromFile("pustka.bmp");
			Kolej -> Picture -> LoadFromFile("male.bmp");    //zaczyna zawsze kolko




}
//---------------------------------------------------------------------------