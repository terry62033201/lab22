#include<iostream>
#include<cstdlib>
#include"bmi.h"
void Bmi::set_hi(float h){
	hi = h;
}

void Bmi::set_we(float w){
	we = w;
}
float Bmi::cal(){
	if(hi!=0 && we!= 0){
    	bmi = we/((hi/100)*(hi/100));
	}
	else{
		exit(1);
}
	return bmi;
}
