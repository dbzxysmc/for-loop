#definitions
SOURCE  := $(wildcard *.cc)
OBJS    := $(patsubst %.cc, %.o, $(SOURCE))
TARGET  := for-loop

#compiling parameters
CC      := g++

#commands
.PHONY  : all clean
all: $(TARGET)

clean:
	rm for-loop
	rm *.o

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

%.o: %.cc
	$(CC) -c $< -o $@
