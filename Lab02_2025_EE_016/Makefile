CC = gcc
CFLAGS = -Wall

TARGETS = task1 task2 task3 task4 bonus1 bonus2

all: $(TARGETS)

task1: area.c
	$(CC) $(CFLAGS) area.c -o task1

task2: operations.c
	$(CC) $(CFLAGS) operations.c -o task2

task3: swap.c
	$(CC) $(CFLAGS) swap.c -o task3

task4: distance.c
	$(CC) $(CFLAGS) distance.c -o task4 -lm

bonus1: bonus1.c
	$(CC) $(CFLAGS) bonus1.c -o bonus1 -lm

bonus2: bonus2.c
	$(CC) $(CFLAGS) bonus2.c -o bonus2

clean:
	rm -f $(TARGETS)
