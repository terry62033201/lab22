#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include"bmi.h"
using namespace std;

int main()
{

	Bmi tmr1;
	int k;
	float h, w;
	
	ifstream inFile("file.in", ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	ofstream outFile("file.out", ios::out);
	if(!outFile){
	cerr<<"Failed opening"<<endl;
		exit(1);
	}

	while(inFile>>h>>w){
		tmr1.set_hi(h);
		tmr1.set_we(w);
		tmr1.cal();
		if(tmr1.cal() > 0 && tmr1.cal() <15)
			outFile<<tmr1.cal()<<"\t"<<"Very severely underweight\n"<<endl;
		
		if(tmr1.cal()>=15 && tmr1.cal() < 16)
			outFile<<tmr1.cal()<<"\t"<<"Severely underweight\n"<<endl;

		if(tmr1.cal()>=16 && tmr1.cal()<18.5)
			outFile<<tmr1.cal()<<"\t"<<"Underweight\n"<<endl;
		
		if(tmr1.cal()>=18.5 && tmr1.cal()< 25)
			outFile<<fixed<<setprecision(2)<<tmr1.cal()<<"\t"<<"Normal\n"<<endl;
		
		if(tmr1.cal()>=25&& tmr1.cal()< 30)
			outFile<<tmr1.cal()<<"\t"<<"Overweight\n"<<endl;

		if(tmr1.cal()>=30 && tmr1.cal()< 35)
			outFile<<tmr1.cal()<<"\t"<<"Obese Class I (Moderately obese)\n"<<endl;

		if(tmr1.cal()>= 35 && tmr1.cal()<40)
			outFile<<tmr1.cal()<<"\t"<<"Obese Class II (Severely obese)\n"<< endl;

		if(tmr1.cal()>= 40)
			outFile<<tmr1.cal()<<"\t"<<"Obese Class III (Very severely obese)\n" << endl;
	}
}
