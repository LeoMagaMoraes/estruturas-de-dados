#include <iostream>
#include "../include/vector_list.hpp"

int main() {
    VectorList<int> lista(11);
    std::cout << "Lista criada com capacidade para 11 elementos.\n";

    std::cout << "Inserindo elementos...\n";
    try {
        lista.push_back(10);
        lista.push_back(20);
        lista.push_back(30);
        lista.push_back(40);
        lista.push_back(50);
        lista.push_back(60);
        lista.push_back(70);
        lista.push_back(80);
        lista.push_back(90);
        lista.push_back(100);
        lista.push_back(110);
        std::cout << "Elementos inseridos com sucesso.\n";
    } catch (const std::length_error& erro) {
        std::cout << "Erro ao inserir elementos: " << erro.what() << "\n";
    }

    std::cout << "\nLista atual:\n";
    lista.print();

    std::cout << "\n-----------------------------------\n";

    // Criando uma cópia da lista
    std::cout << "Criando uma cópia da lista original...\n";
    VectorList<int> lista2 = lista;
    std::cout << "Lista copiada:\n";
    lista2.print();

    std::cout << "\n-----------------------------------\n";

    return 0;
}
