CC = gcc
CFLAGS = -Wall

TARGETS = task1 task2 task3 task4

all: $(TARGETS)

task1: task1.c
	$(CC) $(CFLAGS) task1.c -o task1

task2: studentinfo.c
	$(CC) $(CFLAGS) studentinfo.c -o task2

task3: hourglass.c
	$(CC) $(CFLAGS) hourglass.c -o task3

task4: escape_seq.c
	$(CC) $(CFLAGS) escape_seq.c -o task4

clean:
	rm -f $(TARGETS)
