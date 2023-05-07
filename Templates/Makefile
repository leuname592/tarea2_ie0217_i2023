TARGET  = $(BIN_DIR)/template.exe
OBJS    = $(OBJ_DIR)/stackTemplate.o
BIN_DIR = bin
SRC_DIR = src
OBJ_DIR = obj
CFLAGS  = -Wall

$(TARGET) : $(OBJS)
	@mkdir -p $(BIN_DIR) 
	@g++ $(CFLAGS) $(OBJS) -o $(TARGET)
	@./bin/template.exe
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@g++ -c -MD $(CFLAGS) $< -o $@

-include $(OBJ_DIR)/*.d

.PHONY: clean
clean: 
	@rm -rf $(BIN_DIR) $(OBJ_DIR)
