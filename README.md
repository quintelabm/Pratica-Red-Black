# Atividade Prática Sobre Árvores Vermelho-preto

Este repositório serve como template para a atividade sobre árvores Vermelho-Preto da disciplina Estruturas de Dados II (DCC/UFJF).

As árvores vermelho-preto são um tipo de árvore binária de busca balanceada.

## Conteúdo

A pasta 'rb-lib/' contém os TADs a serem utilizados para a atividade prática com comentários do que deve ser implementado indicados pelo termo "//TODO".

- include/Node.hpp
- include/Red-Black-Tree.hpp
- src/Red-Black-Tree.cpp

## Objetivos 

Compreender e praticar a implementação em C++ das rotações de árvores balanceadas e outras funções relacionadas e específicas das árvores vermelho-preto.

## O que deve ser feito?

Você deve implementar as seguintes operações no arquivo rb-lib/src/Red-Black-Tree.cpp:

- leftRotate() // rotação simples a esquerda 
- rightRotate() // rotação simples a direita

Procure entender as funções já implementadas para inserção e remoção e comente os métodos.

## Compilação e execução

Para compilar, basta utilizar o CMake:

```
cmake -B build 
cmake --build build 
```

O executável será criado na pasta build. Execute o comando:

```
./build/tests/test1 
```


## Resultado Esperado

Ao executar o comando ./build/tests/test1 o resultado deve ser:

Arvore: 

R----55(BLACK)<br>
&nbsp;&nbsp;&nbsp;&nbsp;L----40(BLACK)<br>
   &nbsp;&nbsp;&nbsp;&nbsp;R----65(RED)<br>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;L----60(BLACK)<br>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;| &nbsp;&nbsp; L----57(RED)<br>
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;R----75(BLACK)<br>

Depois de deletar<br>
R----65(BLACK)<br>
&nbsp;&nbsp;&nbsp;&nbsp;L----57(RED)<br>
&nbsp;&nbsp;&nbsp;&nbsp;| &nbsp;&nbsp; L----55(BLACK)<br>
&nbsp;&nbsp;&nbsp;&nbsp;| &nbsp;&nbsp;   R----60(BLACK)<br>
&nbsp;&nbsp;&nbsp;&nbsp;R----75(BLACK)<br>

## Observações:

Faça outros testes além do sugerido para compreender melhor a estrutura.

