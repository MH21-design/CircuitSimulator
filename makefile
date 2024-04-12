CC = clang++
CFLAGS = -Iincludes -Wall

SRCS = $(wildcard src/*.cpp) $(wildcard src/components/*.cpp)
OBJS = $(SRCS:.cpp=.o)
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
