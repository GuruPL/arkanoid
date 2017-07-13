#include "Num2.h"

CNum2::CNum2()
{
	x1 = 0;
	x2 = 0;
}
CNum2::CNum2(float x, float y)
{
	x1 = x;
	x2 = y;
}
CNum2::~CNum2()
{
}
CNum2::CNum2(const CNum2 &x)
{
	cout << "kopiowanie" << "\n";
	*this = x;
}
CNum2& CNum2::operator = (const CNum2& log)
{
	cout << "przypisanie" << "\n";
	SetX1(log.GetX1());
	SetX2(log.GetX2());
	return *this;
}
istream& operator >> (istream& in, CNum2& log)
{
	float temp;
	in >> temp; log.SetX1(temp);
	in >> temp; log.SetX2(temp);
	return in;
}
ostream& operator << (ostream& out, const CNum2& log)
{
	out << log.GetX1()<<" "<<log.GetX2();
	return out;
}
CNum2 operator + (const CNum2& log1, const CNum2& log2)
{
	return CNum2((log1.GetX1()+log2.GetX1()),(log1.GetX2()+log2.GetX2()));
}
CNum2 operator * (const CNum2& log1, const CNum2& log2)
{
	return CNum2((log1.GetX1() * log2.GetX1()), (log1.GetX2() * log2.GetX2()));
}
CNum2& CNum2::operator  *=(const CNum2& log1)
{
	this->SetAll(this->GetX1()*log1.GetX1(), this->GetX2()*log1.GetX2());
	return *this;
}
CNum2& CNum2::operator  +=(const CNum2& log1)
{
	this->SetAll(this->GetX1()+log1.GetX1(), this->GetX2()+log1.GetX2());
	return *this;
}
double CNum2::Ave()const
{
	return 2/(1 / GetX1() + 1 / GetX2());
}