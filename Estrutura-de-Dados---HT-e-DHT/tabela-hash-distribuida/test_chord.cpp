#include <iostream>
#include "chord.h"

int main()
{
    // Criar um nó no Chord
    ChordNode node1(1);
    
    // Criar alunos para testar
    Aluno aluno1(153, "Leonardo");
    Aluno aluno2(108, "Gabriela");
    
    // Teste 1: Inserir aluno
    std::cout << "Teste 1: Inserção de aluno\n";
    node1.insertKey(aluno1);
    node1.insertKey(aluno2);
    node1.printNode(); // Deve exibir os dois alunos
    
    // Teste 2: Recuperar aluno existente
    std::cout << "Teste 2: Recuperação de aluno\n";
    Aluno resultado;
    if (node1.retrieveKey(153, resultado))
        std::cout << "Aluno encontrado: " << resultado.getNome() << std::endl;
    else
        std::cout << "Aluno não encontrado!\n";
    
    // Teste 3: Recuperar aluno inexistente
    std::cout << "Teste 3: Tentativa de recuperar aluno inexistente\n";
    if (node1.retrieveKey(999, resultado))
        std::cout << "Erro! Encontrou um aluno que não deveria existir.\n";
    else
        std::cout << "Correto! Aluno não encontrado.\n";
    
    // Teste 4: Deletar aluno e garantir que foi removido
    std::cout << "Teste 4: Deletando aluno\n";
    if (node1.deleteKey(153))
        std::cout << "Aluno removido com sucesso!\n";
    else
        std::cout << "Erro na remoção do aluno!\n";
    
    node1.printNode(); // Leonardo não deve mais aparecer
    
    // Teste 5: Atualizar Finger Table e encontrar sucessor
    std::cout << "Teste 5: Atualizando Finger Table\n";
    std::vector<int> allNodes = {1, 5, 10, 15};
    node1.updateFingerTable(allNodes);
    
    int sucessor = node1.findSuccessor(8);
    std::cout << "Sucessor do nó 8: " << sucessor << std::endl;

    return 0;
}
