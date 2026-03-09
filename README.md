# alg_prog

## Exercícios em C
Este repositório contém exercícios de programação na linguagem C, no intuito de compartilhar o aprendizado durante a faculdade de Ciência da Computação. Os algoritmos estão organizados na pasta src/. Para compilar os arquivos, basta utilizar o Makefile através do comando "make"

## Estrutura do projeto
alg_prog/
├── src/        # Arquivos fonte (.c e .h)
├── obj/        # Objetos compilados (.o)
├── bin/        # Executáveis gerados (.exe)
└── Makefile    # Script de automação da compilação

⚠️ É necessário criar manualmente as pastas bin/ e obj/ antes de usar o Makefile, ou o processo de compilação falhará.

--- 

## Como compilar
- Compilar todos os arquivos:
```bash
    make
```
Isso gera um executável para cada arquivo .c dentro de src/, colocando-os em bin/.

- Compilar um arquivo específico
```bash
    make file=name.c
```
Exemplo: 
  ```bash
  make file=test.c
```
Isso gera apenas bin/test.exe a partir de src/test.c

## Limpeza
Para remover os executáveis e objetos compilados:
```bash
make clean
```


