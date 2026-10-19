#!/bin/bash 

if [ -z "$1" ]; then 
    echo "Faltou o caminho do arquivo"
    exit 1
fi

ARQUIVO="$1"

if [ ! -f "$ARQUIVO" ]; then
    echo "Arquivo fonte não existe"
    exit 1
fi

g++ -O2 -Wall -Wextra "$ARQUIVO" -o "a.out"

if [ $? -eq 0 ]; then
    echo "Compilado e executando..."
    ./a.out
else 
    echo "Erro na compilacao"
fi
