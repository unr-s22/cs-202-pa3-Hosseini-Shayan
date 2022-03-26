pa3: main.o Money.o Account.o
	g++ -o pa3 Money.o main.o Account.o

main.o: main.cpp
	g++ -c main.cpp

Money.o: Money.h Money.cpp
	g++ -c Money.cpp

Account.o: Account.h Account.cpp
	g++ -c Account.cpp

clean:
	rm Money.o main.o Money.o Account.o
