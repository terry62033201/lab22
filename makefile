lab22: lab22.o bmi.o
	g++ -o lab22 lab22.o bmi.o
lab22.o: lab22.cpp bmi.h
	g++ -c lab22.cpp
bmi.o: bmi.cpp bmi.h
	g++ -c bmi.cpp

clean:
	rm lab22.o bmi.o lab22
