# Bem-vindo ao Guia de Introdução à Linguagem C

## Sobre a Linguagem C

A linguagem C é uma das mais influentes na história da programação. Criada por Dennis Ritchie na década de 1970, ela serviu como base para muitas outras linguagens, como C++, Java e Python. C é amplamente utilizada em sistemas operacionais, softwares embarcados e aplicações de alto desempenho, sendo essencial para quem deseja entender os fundamentos da programação.

### Por que aprender C?
- **Eficiência**: Permite controle preciso sobre os recursos do sistema.
- **Flexibilidade**: Pode ser usada para aplicações de baixo e alto nível.
- **Base para outras linguagens**: Aprender C facilita a compreensão de outras linguagens.

### O que você aprenderá neste guia
- Sintaxe básica
- Declaração de variáveis
- Estruturas de controle
- Funções
- Entrada e saída (I/O)
- Tipos de dados

---

## Tipos de Dados em C

### Tipos Primitivos
Os tipos de dados primitivos são usados para armazenar valores simples como números e caracteres.

| Tipo     | Descrição                       | Tamanho Aproximado | Exemplo          |
|----------|---------------------------------|--------------------|------------------|
| `int`    | Números inteiros               | 4 bytes            | `int idade = 25;` |
| `float`  | Números decimais (ponto flutuante) | 4 bytes         | `float altura = 1.75;` |
| `double` | Números decimais com maior precisão | 8 bytes       | `double peso = 70.5;` |
| `char`   | Um único caractere             | 1 byte             | `char letra = 'A';` |

#### Especificadores de Formato
Os especificadores de formato são usados com as funções `printf` e `scanf` para manipular diferentes tipos de dados:

| Especificador | Tipo              | Exemplo                |
|---------------|-------------------|------------------------|
| `%d`          | Inteiro decimal   | `printf("%d", idade);` |
| `%f`          | Ponto flutuante   | `printf("%f", altura);` |
| `%c`          | Caractere         | `printf("%c", letra);` |
| `%s`          | String            | `printf("%s", nome);`  |

#### Caracteres de Controle
Caracteres como `\n` e `\t` são usados para formatar a saída:

| Caractere | Descrição                          | Exemplo                        |
|-----------|------------------------------------|--------------------------------|
| `\n`      | Nova linha                         | `printf("Linha 1\nLinha 2");`  |
| `\t`      | Tabulação horizontal               | `printf("A\tB\tC");`           |
| `\\`      | Barra invertida                    | `printf("Barra:\\");`          |
| `\"`      | Aspas duplas                       | `printf("\"Texto entre aspas\"");` |
| `\'`      | Aspas simples                      | `printf("\'Texto\'");`         |
| `\r`      | Retorno de carro (carriage return) | Usado em sistemas antigos ou em conjunto com `\n`. |
| `\b`      | Backspace                          | `printf("ABC\bD");` exibe ABD. |
| `\a`      | Alerta sonoro (beep)               | Pode emitir um som no terminal.|
| `\f`      | Alimentação de formulário          | Avança para a próxima página (em impressoras). |
| `\v`      | Tabulação vertical                 | `printf("Linha\vLinha2");`     |
| `\0`      | Null (marca o final de uma string) | Usado para strings terminadas em nulo. |


### Tipos Derivados
Os tipos derivados são formados a partir dos tipos primitivos e permitem estruturas mais complexas.

| Tipo         | Descrição                                 | Exemplo                    |
|--------------|-----------------------------------------|----------------------------|
| `array`      | Conjunto de elementos do mesmo tipo      | `int numeros[5];`          |
| `struct`     | Agrupamento de dados heterogêneos        | `struct Pessoa { ... };`   |
| `pointer`    | Referência para um endereço de memória   | `int *ponteiro;`           |
| `enum`       | Conjunto de valores inteiros nomeados    | `enum Cor {VERMELHO, ...};` |

---

## Proposta de Exercícios

Para praticar e consolidar os conceitos básicos, aqui estão 5 exercícios de nível inicial. Eles estão organizados para introduzir os principais elementos da linguagem C.

### Exercício 1: Olá, Mundo!
**Objetivo:** Criar um programa simples que exiba a mensagem "Olá, Mundo!" no console.

**Instruções:**
- Use a função `printf` para imprimir a mensagem.
- Compile e execute o programa.

**Arquivo sugerido:** `exercicios/basicos/ola_mundo.c`

---

### Exercício 2: Soma de Dois Números
**Objetivo:** Escrever um programa que leia dois números inteiros e exiba a soma deles.

**Instruções:**
- Use `scanf` para capturar os valores digitados pelo usuário.
- Use o especificador `%d` para os números inteiros.
- Exiba o resultado da soma com `printf`.

**Arquivo sugerido:** `exercicios/basicos/soma_dois_numeros.c`

---

### Exercício 3: Par ou Ímpar
**Objetivo:** Criar um programa que determine se um número é par ou ímpar.

**Instruções:**
- Solicite um número ao usuário usando `scanf`.
- Use o operador módulo (`%`) para verificar se o número é divisível por 2.
- Use `\n` para formatar a saída corretamente.

**Arquivo sugerido:** `exercicios/basicos/par_ou_impar.c`

---

### Exercício 4: Calculadora Simples
**Objetivo:** Criar um programa que execute operações matemáticas básicas (adição, subtração, multiplicação e divisão).

**Instruções:**
- Solicite dois números ao usuário usando `scanf`.
- Permita que o usuário escolha a operação desejada.
- Use os especificadores `%d` e `%f` conforme o tipo de dado.
- Exiba o resultado da operação escolhida com `printf`.

**Arquivo sugerido:** `exercicios/basicos/calculadora_simples.c`

---

### Exercício 5: Tabuada
**Objetivo:** Criar um programa que exiba a tabuada de um número fornecido pelo usuário.

**Instruções:**
- Solicite um número inteiro ao usuário usando `scanf`.
- Use um laço de repetição para calcular e exibir a tabuada de 1 a 10.
- Utilize `\n` para formatar cada linha da tabuada.

**Arquivo sugerido:** `exercicios/basicos/tabuada.c`

---

## Como usar este repositório

1. Navegue até a pasta `exercicios/basicos`.
2. Escolha um arquivo correspondente ao exercício desejado.
3. Leia o código e tente implementá-lo.
4. Compile o programa usando um compilador como o GCC:
   ```bash
   gcc nome_do_arquivo.c -o nome_do_programa
   ./nome_do_programa
   ```
5. Teste diferentes entradas para verificar o comportamento do programa.


