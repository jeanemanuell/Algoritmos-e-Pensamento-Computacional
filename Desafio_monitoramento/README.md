# Monitoramento e Controle de Temperatura em C

## 1. Dados do Projeto

- **Aluno:** Jean Emanuel Alves de Morais
- **Disciplina:** Algoritmos e Pensamento Computacional
- **Professora:** Profa. Karla Sartin
- **Projeto:** Monitoramento e Alerta de Temperatura em C

## 2. Proposta

Este projeto foi desenvolvido em C com a finalidade de acompanhar valores de temperatura informados pelo usuário. Durante a execução, o sistema verifica as entradas recebidas e reúne informações como temperatura média, maior leitura, menor leitura e porcentagem de alertas.

Além disso, existe um mecanismo para identificar uma sequência de temperaturas acima do limite definido. Quando essa situação ocorre por três leituras seguidas, o monitoramento é encerrado automaticamente.

## 3. Lógica de Funcionamento

### Definição da temperatura limite

Antes de iniciar o monitoramento, o usuário informa a temperatura máxima permitida. O programa verifica se o valor recebido é numérico e maior que zero. Caso a informação não seja válida, uma nova entrada é solicitada.

### Registro das temperaturas

Depois que o limite é definido, o programa passa a solicitar as temperaturas uma por uma, mantendo o monitoramento enquanto nenhuma condição de encerramento for atingida.

### Validação das entradas

O sistema também impede o uso de entradas que não representam temperaturas válidas. Letras e símbolos são rejeitados e o buffer do teclado é tratado para que a execução continue normalmente.

Valores inferiores ao zero absoluto, que corresponde a **-273,15 °C**, também são considerados inválidos.

### Verificação de alertas

Cada temperatura informada é comparada com o limite estabelecido no início. Quando a leitura fica acima desse limite, o sistema registra uma situação de alerta.

### Sequência de temperaturas acima do limite

O programa utiliza um contador para acompanhar ocorrências consecutivas acima da temperatura máxima. A cada nova leitura acima do limite, o contador aumenta.

Quando uma temperatura dentro do limite é registrada, a sequência é interrompida e o contador volta para zero.

### Encerramento

O programa pode parar de duas maneiras:

- após **três leituras consecutivas acima do limite**;
- quando o usuário escolher encerrar manualmente, informando **'n'**.

## 4. Estruturas de Repetição

O projeto utiliza a estrutura **`do...while`** em dois momentos principais.

1. **Validação do limite inicial:** o bloco é executado pelo menos uma vez e continua sendo repetido enquanto o valor informado não for aceito.
2. **Monitoramento das temperaturas:** o laço mantém as leituras e as verificações acontecendo até que seja atingido o limite de três alertas consecutivos ou o usuário encerre o processo.

Essa estrutura permite que o programa execute o fluxo de monitoramento de forma contínua e controlada.

## 5. Execução

Para compilar e executar o projeto, é necessário possuir um compilador da linguagem C, como o **GCC**, instalado no computador.

No terminal, utilize:

```bash
gcc monitoramento.c -o monitoramento
./monitoramento
```

Após a compilação, o executável poderá ser iniciado pelo segundo comando para realizar o monitoramento das temperaturas.
