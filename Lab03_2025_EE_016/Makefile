CC = gcc
CFLAGS = -Wall

TARGETS = output1 output2 output3 max license leap_year weekday

all: $(TARGETS)

output1: output1.c
	$(CC) $(CFLAGS) output1.c -o output1

output2: output2.c
	$(CC) $(CFLAGS) output2.c -o output2

output3: output3.c
	$(CC) $(CFLAGS) output3.c -o output3

max: max.c
	$(CC) $(CFLAGS) max.c -o max

license: license.c
	$(CC) $(CFLAGS) license.c -o license

leap_year: leap_year.c
	$(CC) $(CFLAGS) leap_year.c -o leap_year

weekday: weekday.c
	$(CC) $(CFLAGS) weekday.c -o weekday

clean:
	rm -f $(TARGETS)
