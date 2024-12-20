# python-c-benchmark
<img src="https://upload.wikimedia.org/wikipedia/en/a/a4/Flag_of_the_United_States.svg" height="30" />
A simple project to test the efficiency of incorporating scripts in C and paralelization for calculations in Python programs.

Specs of the PC used:

CPU: AMD Ryzen 5 3600 6-Core Processor 3.59 GHz

RAM: 32 Gb

MotherBoard: Prime B450M Gaming

GPU: GALAX RTX 2060 Super

OS: Windows

## Results
### Runtime of each function in seconds (10 times)

| Python | C | Parallelized C | C with Optimization (O3) | Parallelized C with Optimization (O3) |
|----------|----------|----------|----------|----------|
| 43.106490 | 2.953668 | 0.281062 | 0.805181 | 0.084524
| 44.482627 | 2.977674 | 0.353080 | 0.832188 | 0.103022
| 44.353094 | 2.967670 | 0.307070 | 0.824187 | 0.103024
| 44.136875 | 2.955960 | 0.323074 | 0.804181 | 0.089020
| 44.046071 | 2.957192 | 0.282063 | 0.822186 | 0.095021
| 44.422154 | 2.963670 | 0.304068 | 0.803182 | 0.087019
| 44.039393 | 2.961010 | 0.289065 | 0.809186 | 0.083019
| 44.019779 | 2.957667 | 0.288065 | 0.801181 | 0.083019
| 44.328374 | 2.960408 | 0.323073 | 0.808183 | 0.081019
| 44.223540 | 2.951670 | 0.279064 | 0.819605 | 0.086020



### Mean of each function
| Python | C | Parallelized C | C with Optimization (O3) | Parallelized C with Optimization (O3) |
|----------|----------|----------|----------|----------|
44.115840 | 2.960659 | 0.302968 | 0.812926 | 0.089471

### For this test, we compared functions of a for loop that adds 1 to the final result 2^30 (1073741824) times. Here are the results:
C is **14.90** times faster than Python

Parallelized C is **145.61** times faster than Python

C with Optimization (O3) is **54.27** times faster than Python

Parallelized C with Optimization (O3) is **493.08** times faster than Python

___

<img src="https://upload.wikimedia.org/wikipedia/commons/0/05/Flag_of_Brazil.svg" height="60" />
Um projeto simples pra testar a eficiência de incorporar scripts em C e paralelização para cálculos em programas em Python.

Especificações do PC usado:

Processador: AMD Ryzen 5 3600 6-Core Processor 3.59 GHz

Memória RAM: 32 Gb

Placa-Mãe: Prime B450M Gaming

Placa de vídeo: GALAX RTX 2060 Super

Sistema Operacional: Windows

## Resultados
### Tempo de execução de cada função em segundos (10 execuções)

| Python | C | C Paralelizado | C com Otimização (O3) | C paralelizado com Otimização (O3) |
|----------|----------|----------|----------|----------|
| 43.106490 | 2.953668 | 0.281062 | 0.805181 | 0.084524
| 44.482627 | 2.977674 | 0.353080 | 0.832188 | 0.103022
| 44.353094 | 2.967670 | 0.307070 | 0.824187 | 0.103024
| 44.136875 | 2.955960 | 0.323074 | 0.804181 | 0.089020
| 44.046071 | 2.957192 | 0.282063 | 0.822186 | 0.095021
| 44.422154 | 2.963670 | 0.304068 | 0.803182 | 0.087019
| 44.039393 | 2.961010 | 0.289065 | 0.809186 | 0.083019
| 44.019779 | 2.957667 | 0.288065 | 0.801181 | 0.083019
| 44.328374 | 2.960408 | 0.323073 | 0.808183 | 0.081019
| 44.223540 | 2.951670 | 0.279064 | 0.819605 | 0.086020



### Média de cada função
| Python | C | C Paralelizado | C com Otimização (O3) | C paralelizado com Otimização (O3) |
|----------|----------|----------|----------|----------|
44.115840 | 2.960659 | 0.302968 | 0.812926 | 0.089471

### Para este teste, nós comparamos funções de um for loop que adiciona 1 ao resultado final 2^30 (1073741824) vezes. Aqui estão os resultados:
C é **14.90** vezes mais rápido que Python

C Paralelizado é **145.61** vezes mais rápido que Python

C com Otimização (O3) é **54.27** vezes mais rápido que Python

C paralelizado com Otimização (O3) é **493.08** vezes mais rápido que Python
