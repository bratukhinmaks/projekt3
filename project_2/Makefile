CC = g++

main.exe : main.o MyClass.o
    $(CC) main.o MyClass.o -o project1
main.o : main.cpp MyClass.h
    $(CC) -c main.cpp
MyClass.o : MyClass.cpp  MyClass.h
    $(CC) -c MyClass.cpp