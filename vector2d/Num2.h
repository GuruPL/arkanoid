#pragma once
#include <iostream>
using namespace std;
class CNum2
{
	float x1, x2;
public:
	CNum2();
	CNum2(float,float);
	CNum2(const CNum2 &x);
	CNum2& operator = (const CNum2& log);
	~CNum2();
	float GetX1()const;
	float GetX2()const;
	friend istream& operator >> (istream& in, CNum2& log);
	friend ostream& operator << (ostream& out, const CNum2& log);
	friend CNum2 operator + (const CNum2& log1, const CNum2& log2);
	friend CNum2 operator * (const CNum2& log1, const CNum2& log2);
	CNum2 &operator  *=(const CNum2& log1);
	CNum2 &operator  +=(const CNum2& log1);


	void SetX1(float);
	void SetX2(float);
	void SetAll(float, float);
	double Ave()const;
};
inline float CNum2::GetX1()const
{
	return x1;
}
inline float CNum2::GetX2()const
{
	return x2;
}
inline void CNum2::SetX1(float xx1)
{
	x1 = xx1;
}
inline void CNum2::SetX2(float xx2)
{
	x2 = xx2;
}
inline void CNum2::SetAll(float xx1, float xx2)
{
	x1 = xx1;
	x2 = xx2;
}