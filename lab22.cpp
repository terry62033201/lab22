#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main()
{
	int i;
	float b[5];
	float hi, we, bmi;
	
	ifstream inFile("file.in", ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	
	for(i=0; i<6; i++){
		inFile>>hi>>we;
		if(hi!=0 && we!= 0){
			bmi = we/((hi/100)*(hi/100));
			b[i] = bmi;
		}
	}

	ofstream outFile("file.out", ios::out);
	if(!outFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	for(i= 0; i<6; i++){
		if(b[i] >0 && b[i] <15)
			outFile<<b[i]<<"\t"<<"Very severely underweight\n"<<endl;
		
		if(b[i]>=15 &&b[i]< 16)
			outFile<<b[i]<<"\t"<<"Severely underweight\n"<<endl;

		if(b[i]>=16 &&b[i]<18.5)
			outFile<<b[i]<<"\t"<<"Underweight\n"<<endl;
		
		if(b[i]>=18.5 && b[i]< 25)
			outFile<<fixed<<setprecision(2)<<b[i]<<"\t"<<"Normal\n"<<endl;
		
		if(b[i]>=25&& b[i]< 30)
			outFile<<b[i]<<"\t"<<"Overweight\n"<<endl;

		if(b[i]>=30 && b[i]< 35)
			outFile<<b[i]<<"\t"<<"Obese Class I (Moderately obese)\n"<<endl;

		if(b[i]>= 35 &&b[i]<40)
			outFile<<b[i]<<"\t"<<"Obese Class II (Severely obese)\n"<< endl;

		if(b[i]>= 40)
			outFile<<b[i]<<"\t"<<"Obese Class III (Very severely obese)\n" << endl;
	}
}
