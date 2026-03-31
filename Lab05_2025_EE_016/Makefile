CC = gcc
CFLAGS = -Wall

TARGETS = output1 output2 output3 output4 \
          debug1 debug2 debug3 debug4 \
          circle_area factorial marks calculator \
          recur_exp recur_sum GCD recursive_reverse

all: $(TARGETS)

output1: output1.c
	$(CC) $(CFLAGS) output1.c -o output1

output2: output2.c
	$(CC) $(CFLAGS) output2.c -o output2

output3: output3.c
	$(CC) $(CFLAGS) output3.c -o output3

output4: output4.c
	$(CC) $(CFLAGS) output4.c -o output4

debug1: debug1.c
	$(CC) $(CFLAGS) debug1.c -o debug1

debug2: debug2.c
	$(CC) $(CFLAGS) debug2.c -o debug2

debug3: debug3.c
	$(CC) $(CFLAGS) debug3.c -o debug3

debug4: debug4.c
	$(CC) $(CFLAGS) debug4.c -o debug4

circle_area: circle_area.c
	$(CC) $(CFLAGS) circle_area.c -o circle_area

factorial: factorial.c
	$(CC) $(CFLAGS) factorial.c -o factorial

marks: marks.c
	$(CC) $(CFLAGS) marks.c -o marks

calculator: calculator.c
	$(CC) $(CFLAGS) calculator.c -o calculator

recur_exp: recur_exp.c
	$(CC) $(CFLAGS) recur_exp.c -o recur_exp

recur_sum: recur_sum.c
	$(CC) $(CFLAGS) recur_sum.c -o recur_sum

GCD: GCD.c
	$(CC) $(CFLAGS) GCD.c -o GCD

recursive_reverse: recursive_reverse.c
	$(CC) $(CFLAGS) recursive_reverse.c -o recursive_reverse

clean:
	rm -f $(TARGETS)
