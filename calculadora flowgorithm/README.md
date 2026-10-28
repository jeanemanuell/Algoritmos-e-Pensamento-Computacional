# Calculadora Multifuncional no Flowgorithm

Projeto desenvolvido para a disciplina de Algoritmos e Pensamento Computacional como requisito de avaliação individual/em grupo.
Trata-se de uma Calculadora Multifuncional implementada através de um fluxograma interativo no software Flowgorithm. 
Capaz de realizar cálculos matemáticos de forma contínua e armazenar o resultado para operações sucessivas.

### Objetivo do Projeto

O objetivo principal deste projeto é aplicar conceitos fundamentais de lógica de programação e algoritmos, tais como:
- Estruturas de repetição (`While` / Enquanto) para execução contínua.
- Estruturas de decisão encadeadas (`If/Else` / Se-Senão) para navegação em menus.
- Manipulação de variáveis reais, inteiras e booleanas.
- Acumulação de resultados em memória para cálculos encadeados (estilo calculadora real).
- Tratamento de entradas inválidas e encerramento controlado da aplicação.

### Integrantes do Grupo

- Alair Eloi de Araujo Neto
- Matheus Yumei Dantas Costa
- Jean Emanuel Alves de Morais
- Emilly Lorrany Alves dos Santos
- Rian do Nascimento Ribeiro

### Descrição das 10 Funções de Cálculo

A calculadora conta com um menu interativo composto por 11 opções (10 funções matemáticas + 1 opção para encerrar):

1. Adição (`+`): Recebe um segundo número e soma ao valor atual (`numero1 + numero2`).
2. Subtração (`-`): Subtrai o segundo número do valor atual (`numero1 - numero2`).
3. Multiplicação (`x`): Multiplica o valor atual pelo segundo número (`numero1 * numero2`).
4. Divisão (`/`): Divide o valor atual pelo segundo número (`numero1 / numero2`).
5. Resto da Divisão (`mod`): Calcula o resto da divisão inteira entre o valor acumulado e o divisor fornecido (`Int(numero1) mod Int(numero2)`).
6. Potenciação (`^`): Eleva o valor atual a uma potência (expoente) fornecida (`numero1 ^ numero2`).
7. Raiz Quadrada (`sqrt`): Calcula a raiz quadrada do número armazenado (`sqrt(numero1)`).
8. Valor Absoluto (`abs`): Retorna o valor absoluto/positivo do número (`abs(numero1)`).
9. Arredondamento (`Int`): Arredonda o valor atual para o inteiro mais próximo utilizando a expressão `Int(numero1 + 0.5)`.
10. Seno (`sin`): Converte o ângulo digitado em graus para radianos e calcula seu seno (`sin(numero1 * 3.14159265 / 180)`).
11. Encerrar: Altera a flag booleana de controle para `False`, finalizando o loop principal e encerrando o programa com uma mensagem de despedida.

## Lógica de Funcionamento e Estruturas Utilizadas

### 1. Entrada Inicial e Acumulação de Resultados
O programa solicita um número inicial (`numero1`) antes de entrar no laço principal. A cada operação realizada, o resultado obtido é reatribuído à própria variável `numero1` (ex.: `numero1 = numero1 + numero2`).
Isso permite que a calculadora "memorize" o resultado e o utilize automaticamente no próximo cálculo.

### 2. Estrutura de Repetição (`While`)
A execução principal é mantida por um laço `While` controlado pela variável booleana `executando` (inicializada como `True`).
O menu principal é exibido repetidamente no início de cada ciclo até que a variável receba `False`.

### 3. Estruturas de Decisão Encadeadas (`If/Else`)
A escolha do operador é lida na variável inteira `menu`. Uma sequência de estruturas condicionais avalia o valor de `menu` (de 1 a 11):
- Se `menu` estiver entre 1 e 10, a respectiva operação é executada e o valor acumulado é atualizado.
- Se `menu = 11`, a variável `executando` é alterada para `False`, provocando a saída do laço `While`.
- Caso seja digitado um valor fora desse intervalo (ex.: 0 ou 12), a estrutura cai no bloco `Else` final, exibindo a mensagem *"Digite um número relacionado a um operador válido"* sem interromper o programa.

### 4. Resumo das Variáveis Declaradas
- `numero1` *(Real)*: Armazena o valor atual acumulado e opera como primeiro operando.
- `numero2` *(Real)*: Armazena o segundo número nas operações binárias (soma, subtração, etc.).
- `resultado` *(Real)*: Variável auxiliar utilizada em cálculos específicos (ex.: seno).
- `menu` *(Inteiro)*: Armazena a opção selecionada pelo usuário no menu principal.
- `executando` *(Booleano)*: Controla o estado de execução do laço `While`.

### Ferramenta Utilizada

- Flowgorithm (Versão 4.5.0) — Software livre de modelagem e execução de algoritmos através de fluxogramas.

# Instruções para Execução

1. Baixe e instale o Flowgorithm (http://www.flowgorithm.org/).
2. Clone este repositório do GitHub ou faça o download do arquivo `CalculadoraFlow.fprg`.
3. Abra o Flowgorithm e vá em Arquivo > Abrir.
4. Selecione o arquivo `CalculadoraFlow.fprg`.
5. Clique no botão verde de Executar (ou pressione a tecla `F5`).
6. Digite o número inicial no console interativo e siga as instruções exibidas no menu.
