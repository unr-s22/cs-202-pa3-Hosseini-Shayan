all: pa3

clean:
	rm main.o Money.o Account.o pa3

pa3: main.o Money.o Account.o
	g++ -g -o pa3 main.o Money.o Account.o

main.o:
	g++ -c -g main.cpp

Money.o:
	g++ -c -g Money.cpp

Account.o:
	g++ -c -g Account.cpp