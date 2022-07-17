.PHONY: all

CC := g++
CCFLAGS :=

SRCS := $(wildcard .cpp)
OBJS := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

TARGETS := $(basename $(OBJS))

all : $(TARGETS)

$(OBJS): %.o: %.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(TARGETS): %: %.o
	$(CC) $(CCFLAGS) -o $@ $<

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o