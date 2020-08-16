CXX			:= g++
CXX_FLAGS	:= -std=c++17 -ggdb
LDFLAGS		:=

BIN		:= bin
SRC		:= src
INCLUDE	:= -Iinclude -I/usr/local/Cellar/sfml/2.5.1/include

LIBRARIES	:= \
	/usr/local/Cellar/sfml/2.5.1/lib/libsfml-audio.2.5.1.dylib \
	/usr/local/Cellar/sfml/2.5.1/lib/libsfml-graphics.2.5.1.dylib \
	/usr/local/Cellar/sfml/2.5.1/lib/libsfml-network.2.5.1.dylib \
	/usr/local/Cellar/sfml/2.5.1/lib/libsfml-system.2.5.1.dylib \
	/usr/local/Cellar/sfml/2.5.1/lib/libsfml-window.2.5.1.dylib

EXECUTABLE	:= pacman

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	$(CXX) $(CXX_FLAGS) $(LDFLAGS) $(INCLUDE) $^ -o $@ $(LIBRARIES)

clean:
	-rm $(BIN)/*