# Compilador e flags
CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -g

#Diretórios
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Busca todos os .c em src e subdiretórios
SOURCES := $(shell find $(SRC_DIR) -name '*.c')
OBJECTS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SOURCES))
BINARIES := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SOURCES))

.PRECIOUS: $(OBJECTS)

ifdef file
TARGET := $(BIN_DIR)/$(file:.c=)
else ifdef dir
DIR_SOURCES := $(shell find $(SRC_DIR)/$(dir) -name '*.c')
TARGET := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(DIR_SOURCES))
else
TARGET := $(BINARIES)
endif

# Regra padrão: compilar tudo
all: $(TARGET)

# Compilar .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Gerar executável
$(BIN_DIR)/%: $(OBJ_DIR)/%.o
	@mkdir -p $(dir $@)
	$(CC) $< -o $@

# Compila e executa o binário na sequência
run: $(TARGET)
	@if [ -n "$(file)" ]; then \
	    echo "Running $(TARGET)..."; \
	    ./$(TARGET); \
	else \
	    echo "Use 'make file=algum.c run' para executar um binário específico."; \
	fi

# Remove as pastas bin/ e obj/
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)