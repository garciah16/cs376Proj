# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h garciah16.h
	$(CC) -o robots.out main.c robot.o garciah16.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

garciah16.o:	garciah16.c garciah16.h
	$(CC) -c garciah16.c
