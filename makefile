all: pa3

clean:
	rm Money.o
	##main.o Money.o Account.o

pa3: Money.o 
##main.o Money.o Account.o
	g++ -g -o pa6 Money.o
	##main.o Money.o Account.o
	
##main.o:
	##g++ -c -g main.cpp
	
Money.o:
	g++ -c -g Money.cpp

##Account.o:
	##g++ -c -g Account.cpp