#include "../include/linked_list.hpp"
#include <iostream>

int main(int argc, char const* argv[]) {
    LinkedList<int> list;

    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
    list.push_front(40);
    list.push_front(50);
 
        
        std::cout << "\nLista Original:\n";
        std::cout << "Tamanho: " << list.size() << "\n";
        list.print();
    
        std::cout << "\n-----------------------------------\n";
    
        std::cout << "Inserindo elementos...\n";
        list.insert(2, 11);
        std::cout << "Inserindo valor [11]:\n";
        list.insert(3, 12);
        std::cout << "Inserindo valor [12]:\n";
        list.insert(7, 14);
        std::cout << "Inserindo valor [14]:\n";
        std::cout << "Lista após inserções:\n";
        list.print();
    
        std::cout << "\n-----------------------------------\n";
    
        std::cout << "Removendo elemento na posição 2...\n";
        list.remove(2);
        std::cout << "Lista após remoção:\n";
        list.print();
    
        std::cout << "\n-----------------------------------\n";
    
        std::cout << "Acessando elemento na posição 3: " << list[3] << "\n";
        list.print();
    
        std::cout << "\n-----------------------------------\n";
    
        std::cout << "Verificando se o elemento 12 está na lista...\n";
        std::cout << (list.contains(12) ? "✔ 12 está na lista\n" : "❌ 12 não está na lista\n");
        list.print();
    
        std::cout << "\n-----------------------------------\n";
    
        LinkedList<int> list2 = list;
        std::cout << "Criando uma cópia da lista...\n";
        std::cout << "Lista copiada:\n";
        list2.print();
    
        std::cout << "\n-----------------------------------\n";
    
        std::cout << "Tamanho da lista: [ " << list.size() << " ]\n";
    
        std::cout << "\n-----------------------------------\n";
    
        std::cout << "Removendo 1o elemento (pop_front)...\n";
        list.pop_front();
        std::cout << "Lista após pop_front:\n";
        list.print();
    
        std::cout << "\n-----------------------------------\n";
    
        std::cout << "Estado final da lista:\n";
        list.print();
    
        std::cout << "\n-----------------------------------\n";
    
        return 0;
    }
    