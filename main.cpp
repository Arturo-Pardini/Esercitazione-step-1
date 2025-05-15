#include<iostream> 
#include<cstring>

using namespace std;

#include "CFunction.h"
#include "Polynomial.h"
#include "Exponential.h"

int main(){
	double coeff1[] = {2.,3.,-4.};
	Function* F;
	Polynomial p1(coeff1,3);
	double a= p1.GetValue(1.);//valore atteso 1
	cout << a << endl;
	F=&p1;
	//testando che funzioni la dump
	F->Dump();
	p1.Dump();
	
	
	Exponential e1(2.,3.,4.);
	Exponential e2(e1);
	e1.Dump();
	e2.Dump();
	a = e1.GetValue(1.); // valore atteso 48
	cout << a << endl;
	if(e1==e2){
		cout << "prova1" << endl;
	}
	Exponential e3;
	e3=e2;
	e3.Dump();
	if(e1==e3){
		cout << "prova2" << endl;
	}
	return 0;
}