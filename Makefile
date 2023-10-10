CC=gcc
BUILD_DIR=build
SOURCE_DIR=src
TARGET=$(BUILD_DIR)/output
OBJECTS=$(BUILD_DIR)/fill_random_num.o $(BUILD_DIR)/sort.o $(BUILD_DIR)/main.o
 
$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^

$(BUILD_DIR)/fill_random_num.o : $(SOURCE_DIR)/fill_random_num.c
	$(CC) -c -o $@ $^

$(BUILD_DIR)/sort.o : $(SOURCE_DIR)/sort.c
	$(CC) -c -o $@ $^

$(BUILD_DIR)/main.o : $(SOURCE_DIR)/main.c
	$(CC) -c -o $@ $^

clean:
	rm $(OBJECTS) $(TARGET)