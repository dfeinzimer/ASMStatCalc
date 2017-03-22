#Author: David Feinzimer
#Course: CPSC254

echo Script file for project 3 begins

#remove old objects
rm *.o
rm *.out
rm *.list

#compile cpp files
g++ -m64 -c -o computemean.o computemean.cpp
g++ -m64 -c -o computemedian.o computemedian.cpp
g++ -m64 -c -o harmonicmean.o harmonicmean.cpp
g++ -m64 -c -o main.o main.cpp

#compile c files
gcc -m64 -c -o display.o display.c
gcc -m64 -c -o getdata.o getdata.c
gcc -m64 -c -o sort.o sort.c

#compile asm file
nasm -f elf64 -l sum-array-64.list -o sum-array-64.o sum-array-64.asm

#list all
ls -l

#link all files
g++ -m64 -o project.out computemean.o computemedian.o harmonicmean.o main.o display.o getdata.o sort.o sum-array-64.o

#call program
./project.out

echo good-bye
