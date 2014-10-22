# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h henness17.o henness17.h
	$(CC) -o robots.out main.c robot.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

henness17.o: henness17.c henness17.h
	gcc -c henness17.c
