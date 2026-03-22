# alg_prog

## Exercícios em C
Este repositório contém exercícios de programação na linguagem C, no intuito de compartilhar o aprendizado durante a faculdade de Ciência da Computação. Os algoritmos estão organizados na pasta src/. Para compilar os arquivos, basta utilizar o Makefile através do comando "make"

## Estrutura
```md
alg_prog/
├── src/        # Arquivos fonte (.c e .h)
├── obj/        # Objetos compilados (.o)
├── bin/        # Executáveis gerados (.exe)
└── Makefile    # Script de automação da compilação
```


## Como compilar
- Compilar todos os arquivos:
```bash
make
```
Isso gera um executável para cada arquivo .c dentro de src/ e diretórios em src/, cria as pastas bin/ e obj/ e insere os arquivos em seus respectivos lugares.

- Compilar um arquivo específico
```bash
make file=name.c
```
Exemplo: 
  ```bash
  make file=test.c
```
Isso gera bin/test.exe e obj/test.o a partir de src/test.c

## Alias?
Para compilar um arquivo específico e executá-lo na sequência, utilize:
```bash
make file=<file_name>.c run
```

## Limpeza
Para remover os executáveis e objetos compilados:
```bash
make clean
```