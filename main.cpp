#include<iostream> 
#include<cstring>

using namespace std;

#include "CFunction.h"
#include "Polynomial.h"

int main(){
	double coeff1[] = {2.,3.,-4.};
	Function* F;
	Polynomial p1(coeff1,3);
	double a= p1.GetValue(1.);
	cout << a << endl;
	//F=&p1;
	
	//F->Dump();
	p1.Dump();
	
	
	return 0;
}