TARGET  = $(BIN_DIR)/algos.exe
OBJS    = $(OBJ_DIR)/algorithms.o $(OBJ_DIR)/main.o
BIN_DIR = bin
INCDIR  = inc
SRC_DIR = src
OBJ_DIR = obj
CFLAGS  = -Wall -I$(INCDIR)

$(TARGET) : $(OBJS)
	@mkdir -p $(BIN_DIR) 
	@g++ $(CFLAGS) $(OBJS) -o $(TARGET)
	@./bin/algos.exe
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@g++ -c -MD $(CFLAGS) $< -o $@

-include $(OBJ_DIR)/*.d

.PHONY: clean
clean: 
	@rm -rf $(BIN_DIR) $(OBJ_DIR)
