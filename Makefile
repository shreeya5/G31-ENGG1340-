functions.o: functions.cpp AccountHolder.h
	g++ -c functions.cpp

filehandling.o: filehandling.cpp AccountHolder.h
	g++ -c filehandling.cpp

main.o: main.cpp AccountHolder.h
	g++ -c main.cpp

final: main.o filehandling.o functions.o
	g++ main.o filehandling.o functions.o -o $@

run: final
	./final

clean:
	rm final functions.o main.o filehandling.o

.PHONY: run clean
