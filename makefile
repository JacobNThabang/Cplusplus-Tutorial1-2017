# This is a Makefile comment
CC=g++
# the compiler

# Need source file(.cpp)to create an object menu.o
# Need object file menu.o to create a menu exutable 
DatabaseMenu.o: DatabaseMenu.cpp database.cpp database.h
	$(CC) -c -o database.o database.cpp -std=c++11
	$(CC) -c -o DatabaseMenu.o DatabaseMenu.cpp -std=c++11
	$(CC) -o DatabaseMenu DatabaseMenu.o database.o -std=c++11
		
# other rules;  invoked by make clean, make run etc
run: DatabaseMenu
	./DatabaseMenu

clean:
	@rm -f *.o
	@rm -f DatabaseMenu
