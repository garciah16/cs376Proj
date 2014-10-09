# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h garciah16.h garciah16.o henness17.h henness17.o
	$(CC) -o robots.out main.c robot.o garciah16.o henness17.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

garciah16.o:	garciah16.c garciah16.h
	$(CC) -c garciah16.c

henness17.o:	henness17.c henness17.h
	gcc -c henness17.c
