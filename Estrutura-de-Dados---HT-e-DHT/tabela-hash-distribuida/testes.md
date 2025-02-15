# Casos de Teste para a DHT em C++

##  Introdução
Este documento descreve os 5 principais casos de teste implementados para validar a Distributed Hash Table (DHT) usando o protocolo Chord.

## Testes Implementados

1. **Inserção de Aluno**
   - Insere um aluno na DHT e verifica se ele foi armazenado corretamente.

2. **Recuperação de Aluno Existente**
   - Busca um aluno na DHT pelo RA e confirma se os dados retornados estão corretos.

3. **Tentativa de Recuperação de Aluno Inexistente**
   - Testa a recuperação de um aluno que **não** foi inserido e garante que a função retorna `false`.

4. **Remoção de Aluno**
   - Remove um aluno e verifica se ele foi realmente excluído da DHT.

5. **Testar Atualização da Finger Table e Busca do Sucessor**
   - Verifica a estrutura de roteamento da DHT, garantindo que os nós e as referências aos sucessores estejam corretas.

## Para rodar os testes:
Para compilar e executar os testes, use:

```bash
g++ -std=c++11 test_chord.cpp chord.cpp aluno.cpp -o test_chord
./test_chord
