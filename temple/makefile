OBJS = main.o
CC = g++
CFLAGS += -std=c++11
CROOT = src/

main:$(OBJS)
	$(CC) $^ $(CFLAGS) -lraylib -o $@

%.o:$(CROOT)%.cpp
	$(CC) -c $^ $(CFLAGS) -o $@

clean:
	rm *.o main
cleano:
	rm *.o