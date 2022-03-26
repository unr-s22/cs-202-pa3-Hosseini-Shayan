all: pa3

pa3: main.o Money.o Account.o
	g++ -g -o pa3 main.o Money.o Account.o

main.o: main.cpp
	g++ -c -g main.cpp

Money.o: Money.h Money.cpp
	g++ -c -g Money.cpp

Account.o: Account.h Account.cpp
	g++ -c -g Account.cpp

clean:
	rm main.o Money.o Account.o pa3

