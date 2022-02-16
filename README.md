# Push_Swap

![Push_swap_gif](https://github.com/koukunwlk/projectsAssets/blob/main/push_swap_gif.gif)

Esse projeto consiste em ordenar uma lista de números aleatórios com o menor numero de operações possíveis. Utilizando apenas as operações permitidas no projeto e duas pilhas de números **A** e **B**, onde **A** vai receber os números desordenados e **B** é uma pilha auxiliar vazia.

## Operações permitidas

pa(Push A): Manda o primeiro numero da pilha **B** para **A**.

pb(Push B): Manda o primeiro numero da pilha **A** para **B**.

sa(Swap A): Inverte a posição dos dois primeiros números da pilha **A**.

sb(Swap B): Inverte a posição dos dois primeiros números da pilha **B.**

ra(Rotate A): Manda o primeiro numero da pilha **A** para a ultima posição da pilha.

rb(Rotate B): Manda o primeiro número da pilha **B** para a ultima posição da pilha.

rra(Reverse Rotate A): Manda o ultimo número da pilha **A** para a primeira posição da pilha.

rrb(Reverse Rotate B): Manda o ultimo número da pilha **B** para a primeira posição da pilha.

ss: sa e sb ao mesmo tempo.

rr: ra e rb ao mesmo tempo.

rrr: rra e rrb ao mesmo tempo.

## Solução do problema

Devido à limitação de operações não é possível implementar um algoritmo de ordenação padrão como Bubble sort, Merge sort, Shell sort, etc. 

Porém, é possível utilizar eles como base para desenvolver seu próprio algoritmo que resolva o problema utilizando as operações acima. 

Para resolver mais de 5 números eu utilizei uma lógica parecida com a do Quick sort.

Primeiro eu precisava dividir minha pilha **A** em grupos, para esse exemplo vamos utilizar 100 números.

para calcular número de grupos eu pego o tamanho da pilha e divido recursivamente 100 / 2 = 50, 50 / 2 = 25, 25 / 2 = 13, 13 / 2 = 7, 7 / 2 = 3. 3 / 2 = 1, 1 / 2 = 0. Nesse exemplo eu consegui dividir 100 por 2 sete vezes, ou seja, meu número de grupos é 7. Para pegar o tamanho dos meus grupos eu divido o tamanho da minha (100) pelo número de grupos (7), o resultado da 14. 

Agora com o número de grupos e o tamanho deles eu posso aplicar uma lógica parecida com a do Quick sort.

Onde eu preciso de um pivô, nesse caso eu uso o tamanho do grupo (14) * x(onde x = 1 e vai incrementando ate chegar ao número de grupos + 1(8). Meu pivô sendo 14, tudo que for menor que 14 eu vou mandar para pilha B, mas como?

Dentre esses números de 0 a 13 eu procuro qual o mais próximo do topo da minha pilha, se a distância da posição dele for após a metade do tamanho da minha pilha eu utilizo a operação **rra**, se ele estiver antes eu utilizo a operação **ra**, quando a distância for 0 significa que ele está no topo então eu posso executar a operação **pb**, depois que eu fizer isso para todos os números menores que 14 eu incremento x + 1 assim eu vou ter o número 28 e assim executo esse processo todo ate x for igual ao número de grupos + 1(O número de grupos + 1 ocorre pelo motivo de que às vezes o resultado de número de grupos * tamanho dos grupos podem não ser o tamanho exato da pilha, no nosso exemplo ficaria 98, assim o + 1 nos deixa com 8 * 14 que fica em torno de ate 112 números).

Depois que todos os números estiverem na pilha **B** eu começo a mandar eles de volta para pilha **A**, "Ok, Como?". Da forma que eu mandei os números para pilha **B** ficou de forma quase ordenada inversa, os maiores números estão mais próximos do topo e os menores estão mais próximos da base. Então começar a pegar o maior número e mando de volta para pilha **A**, sempre verificando a distância dele do topo se for maior que a metade do tamanho da pilha eu executo a operação **rrb**, se não eu executo a operação **rb**.

No final de tudo a pilha **A** vai estar ordenada da forma crescente com o menor número no topo e o maior número na base. 
