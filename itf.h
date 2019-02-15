#include<fstream>

int i;
float b[5];
float hi, we, bmi;

ifstram inFile("file.in", ios::in);
if(!inFile){
	cerr<<"Failed opening"<<endl;
	exit(1);
}

for(i= 0; i<6; i++){
	inFile>>hi>>we;
	if(hi!=0 &&we!=0){
		bmi = we/((hi/100)*(hi/100));
		b[i] = bmi;
	}
}
