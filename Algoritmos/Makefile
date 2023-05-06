TARGET  = myprog
OBJS    = algorithms.o main.o
CFLAGS = -Wall
BIN_DIR = ../bin

$(TARGET) : $(OBJS)
	mkdir -p $(BIN_DIR)
	g++ $(CFLAGS) $(OBJS) -o $(TARGET)

%.o : %.cpp
	g++ -c $(CFLAGS) $< -o $@

.PHONY: clean
clean: 
	rm -Force *.o
