//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "projekt.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
char p[9];   // pola w grze od lewej do prawej
     //('n' =puste pole, 'x'= pole zajete krzyzykiem, ('o'=pole zajete kolkiem)
char tura; // 'x' tura krzyzyka, 'o' tura kolka
// void sprawdz () - funkcja sprawdzajaca po kazdym kliku mozliwosc wygranej
void sprawdz ()
{
   if ((p[0] == p[1] && p[1] ==p[2] && p[0] != 'n')||(p[3] == p[4] && p[4] == p[5] && p[4] != 'n')||
    (p[6] == p[7] && p[7] == p[8] && p[6] != 'n') || (p[0] == p[3] && p[3] == p[6] && p[0] != 'n') ||
    (p[1] == p[4] && p[4] == p[7] && p[1] != 'n') ||  (p[2] == p[5] && p[5] == p[8] && p[2] != 'n') ||
    (p[0] == p[4] && p[4] ==p[8] && p[0] != 'n') || (p[2] == p[4] && p[4] == p[6] && p[2] != 'n'))
   {
      char * w;
      if (tura == 'x') w= "Wygrywa kó³ko!" ;
      else w= "Wygrywa krzy¿yk";
      Application -> MessageBox(w, "Koniec gierki!!", MB_OK);



   }





}
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

                 for (int i = 0; i<9; i++)
                 {
                 p[i] = 'n';
                 }
                 tura = 'o';

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole1Click(TObject *Sender)
{
if (p[0] == 'n')
{
   if(tura == 'o')
   {
     Pole1 -> Picture -> LoadFromFile( "o.bmp");
     p[0] = 'o';
     tura = 'x';
     Kolej -> Picture -> LoadFromFile("mx.bmp");

   }
   else if(tura == 'x')
   {
      Pole1 -> Picture -> LoadFromFile( "x.bmp");
     p[0] = 'x';
     tura = 'o';
     Kolej -> Picture -> LoadFromFile("male.bmp");


   }

    Pole1 -> Enabled = false;
    sprawdz();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pole2Click(TObject *Sender)
{
if (p[1] == 'n')
{
   if(tura == 'o')
   {
     Pole2 -> Picture -> LoadFromFile( "o.bmp");
     p[1] = 'o';
     tura = 'x';
     Kolej -> Picture -> LoadFromFile("mx.bmp");

   }
   else if(tura == 'x')
   {
      Pole2 -> Picture -> LoadFromFile( "x.bmp");
     p[1] = 'x';
     tura = 'o';
     Kolej -> Picture -> LoadFromFile("male.bmp");


   }

    Pole2 -> Enabled = false;
    sprawdz();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pole3Click(TObject *Sender)
{
if (p[2] == 'n')
{
   if(tura == 'o')
   {
     Pole3 -> Picture -> LoadFromFile( "o.bmp");
     p[2] = 'o';
     tura = 'x';
     Kolej -> Picture -> LoadFromFile("mx.bmp");

   }
   else if(tura == 'x')
   {
      Pole3 -> Picture -> LoadFromFile( "x.bmp");
     p[2] = 'x';
     tura = 'o';
     Kolej -> Picture -> LoadFromFile("male.bmp");


   }

    Pole3 -> Enabled = false;
    sprawdz();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pole4Click(TObject *Sender)
{
   if (p[3] == 'n')
{
   if(tura == 'o')
   {
     Pole4 -> Picture -> LoadFromFile( "o.bmp");
     p[3] = 'o';
     tura = 'x';
     Kolej -> Picture -> LoadFromFile("mx.bmp");

   }
   else if(tura == 'x')
   {
      Pole4 -> Picture -> LoadFromFile( "x.bmp");
     p[3] = 'x';
     tura = 'o';
     Kolej -> Picture -> LoadFromFile("male.bmp");


   }

    Pole4 -> Enabled = false;
    sprawdz();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pole5Click(TObject *Sender)
{
if (p[4] == 'n')
{
   if(tura == 'o')
   {
     Pole5 -> Picture -> LoadFromFile( "o.bmp");
     p[4] = 'o';
     tura = 'x';
     Kolej -> Picture -> LoadFromFile("mx.bmp");

   }
   else if(tura == 'x')
   {
      Pole5 -> Picture -> LoadFromFile( "x.bmp");
     p[4] = 'x';
     tura = 'o';
     Kolej -> Picture -> LoadFromFile("male.bmp");


   }

    Pole5 -> Enabled = false;
    sprawdz();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pole6Click(TObject *Sender)
{
if (p[5] == 'n')
{
   if(tura == 'o')
   {
     Pole6 -> Picture -> LoadFromFile( "o.bmp");
     p[5] = 'o';
     tura = 'x';
     Kolej -> Picture -> LoadFromFile("mx.bmp");

   }
   else if(tura == 'x')
   {
      Pole6 -> Picture -> LoadFromFile( "x.bmp");
     p[5] = 'x';
     tura = 'o';
     Kolej -> Picture -> LoadFromFile("male.bmp");


   }

    Pole6 -> Enabled = false;
    sprawdz();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pole7Click(TObject *Sender)
{
if (p[6] == 'n')
{
   if(tura == 'o')
   {
     Pole7 -> Picture -> LoadFromFile( "o.bmp");
     p[6] = 'o';
     tura = 'x';
     Kolej -> Picture -> LoadFromFile("mx.bmp");

   }
   else if(tura == 'x')
   {
      Pole7 -> Picture -> LoadFromFile( "x.bmp");
     p[6] = 'x';
     tura = 'o';
     Kolej -> Picture -> LoadFromFile("male.bmp");


   }

    Pole7 -> Enabled = false;
    sprawdz();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pole8Click(TObject *Sender)
{
if (p[7] == 'n')
{
   if(tura == 'o')
   {
     Pole8 -> Picture -> LoadFromFile( "o.bmp");
     p[7] = 'o';
     tura = 'x';
     Kolej -> Picture -> LoadFromFile("mx.bmp");

   }
   else if(tura == 'x')
   {
      Pole8 -> Picture -> LoadFromFile( "x.bmp");
     p[7] = 'x';
     tura = 'o';
     Kolej -> Picture -> LoadFromFile("male.bmp");


   }

    Pole8 -> Enabled = false;
    sprawdz();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pole9Click(TObject *Sender)
{
if (p[8] == 'n')
{
   if(tura == 'o')
   {
     Pole9 -> Picture -> LoadFromFile( "o.bmp");
     p[8] = 'o';
     tura = 'x';
     Kolej -> Picture -> LoadFromFile("mx.bmp");

   }
   else if(tura == 'x')
   {
      Pole9 -> Picture -> LoadFromFile( "x.bmp");
     p[8] = 'x';
     tura = 'o';
     Kolej -> Picture -> LoadFromFile("male.bmp");


   }

    Pole9 -> Enabled = false;
    sprawdz();
}
}
//---------------------------------------------------------------------------