# Teste-Inteligencia-Artificial
Teste de Algoritmo Genético feito na linguagem C.

O teste implementa uma função qualquer e cria um algoritmo que, ao longo de várias gerações, irá tentar descobrir o ponto máximo da função. A função presente no código é uma função simples com valores diferentes para diferentes intervalos, onde o maior ponto para y é 13 (máximo global) e outro ponto alto para y é 10 (máximo local). A ideia é que o código irá tentar descobrir, por tentativa e erro e com 10 indivíduos, o maior ponto ao longo de várias gerações.

Note que a função pode ser alterada por meio da biblioteca Math.h para funções polinomiais, trigonométricas e semelhantes, e o código ainda conseguirá encontrar a o ponto máximo em algumas tentativas. Note, também, que o algoritmo nunca encontrará *exatamente* o maior ponto, sempre chegando em um ponto extremamente próximo (por exemplo, na função presente no arquivo, ele nunca chega em y = 13, mas constantemente chega em valores como 12.997 ou 12.9998207 ou valores bem próximos). 

O método de seleção utilizado é o Elitismo, onde a variável do vetor que tiver maior nota (nesse caso, a nota é medida como o y da função) é escolhida e é feito a média entre essa maior nota e todas as outras variáveis. É possível implementar outros métodos.

Por fim, vale mencionar que o código contém variáveis como a mutação, que atribui uma taxa de mutação a fim de diversificar os resultados adquiridos. Quanto maior a taxa de mutação, mais caótico são os valores encontrados em cada geração. A taxa de mutação pode ser simplesmente alterada durante a execução do código. Penso em implementar, no futuro, uma maneira de fazer a mutação poder variar enquanto o código roda.
