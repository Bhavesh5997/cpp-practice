MAKEFLAGS += --no-builtin-rules
QUIET = @
SRC = ../src
BIN = ../bin
BIN_FILE = $(BIN)/exe
CC = g++
RM = rm -rf
MAKE_DIR = mkdir -p
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard $(SRC)/*.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRCS))

all: $(BIN_FILE)

$(BIN_FILE): $(OBJ)
	$(QUIET)$(MAKE_DIR) $(BIN)
	$(QUIET)echo "Linking into $@"
	$(QUIET)$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(QUIET)echo "Compiling into $@"
	$(QUIET)$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(QUIET)$(RM) $(SRC)/*.o $(BIN)
