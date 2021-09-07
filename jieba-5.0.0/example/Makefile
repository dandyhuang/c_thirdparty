CC      = g++
CXX     = g++
LINK    = g++
AR      = ar
CFLAGS  = -g -Wall -std=c++98 -fpermissive

INCLUDES=-I. -I../include  
LIBS= -lz

TARGET=demo load_test

all:$(TARGET)

demo: demo.o
	$(CXX) -o $@ $^  $(INCLUDES) $(LIBS)
load_test: load_test.o
	$(CXX) -o $@ $^  $(INCLUDES) $(LIBS)

%.o:%.cc
	$(CXX) $(CFLAGS) -c $<  -o $@  $(INCLUDES) $(LIBS)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES) $(LIBS)
.PHONY:clean
clean:
	rm -rf *.o $(TARGET) $(CXX_OBJS) $(C_OBJS)



