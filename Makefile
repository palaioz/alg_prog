# Compilador
CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -g

# Diretórios
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Busca todos os .c em src
SOURCES := $(wildcard $(SRC_DIR)/*.c)
OBJECTS := $(SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
BINARIES := $(SOURCES:$(SRC_DIR)/%.c=$(BIN_DIR)/%)

.PRECIOUS: $(OBJECTS)


# Se o usuário passar file=nome.c
ifdef file
FILE_SRC := $(SRC_DIR)/$(file)
FILE_OBJ := $(OBJ_DIR)/$(file:.c=.o)
FILE_BIN := $(BIN_DIR)/$(file:.c=)
all: $(FILE_BIN)
else ifdef dir
DIR_SRC := $(wildcard $(SRC_DIR)/$(dir)/*.c)
DIR_OBJ := $(DIR_SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
DIR_BIN := $(DIR_SRC:$(SRC_DIR)/%.c=$(BIN_DIR)/%)
all: $(DIR_BIN)
else
# Regra padrão: compilar todos
all: $(BINARIES)
endif

# Como compilar cada .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@if not exist "$(dir $@)" mkdir "$(dir $@)"
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< successfully!"

# Como gerar cada .exe
$(BIN_DIR)/%: $(OBJ_DIR)/%.o
	@if not exist "$(dir $@)" mkdir "$(dir $@)"
	$(CC) $< -o $@
	@echo "Linked $@ successfully!"

# Limpeza
.PHONY: clean
clean:
	@if exist "$(OBJ_DIR)" del /Q "$(OBJ_DIR)\*.o"
	@if exist "$(BIN_DIR)" del /Q "$(BIN_DIR)\*.exe"
	@echo "Cleanup complete!"
