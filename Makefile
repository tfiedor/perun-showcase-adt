FLAGS=-std=c++11 -g
BUILD_DIR=./build

all:
	mkdir -p $(BUILD_DIR)
	g++ $(FLAGS) -o $(BUILD_DIR)/list_search src/main.cpp src/structures/skiplist.cpp
