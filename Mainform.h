//---------------------------------------------------------------------------

#ifndef MainformH
#define MainformH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "unit2.h"
//---------------------------------------------------------------------------

struct MPoint
{
	double x;
	double y;
};

class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
	double test;
	MPoint _point;

public:		// User declarations
	__fastcall TForm1(TComponent* Owner);

	void setTest(double d);
	double getTest();

	void setPoint(MPoint p);
	MPoint getPoint();
};


//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
