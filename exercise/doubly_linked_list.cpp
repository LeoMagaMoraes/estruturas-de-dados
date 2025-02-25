#include "../include/doubly_linked_list.hpp"

int main() {
  DoublyLinkedList<int> list;

  list.push_front(10);
  list.push_front(80);
  list.push_front(30);

  list.push_back(50);
  list.push_back(60);
  list.push_back(70);

  std::cout << "\nLista Inicial:\n";
  list.print();

  std::cout << "\n-----------------------------------\n";

  std::cout << "Removendo o primeiro elemento...\n";
  list.pop_front();
  std::cout << "Lista após remover o primeiro elemento:\n";
  list.print();

  std::cout << "\n-----------------------------------\n";

  std::cout << "Removendo o último elemento...\n";
  list.pop_back();
  std::cout << "Lista após remover o último elemento:\n";
  list.print();

  std::cout << "\n-----------------------------------\n";

  auto it_begin = list.begin();
  ++it_begin;
  auto it_end = it_begin + 2;

  std::cout << "Removendo os elementos da segunda à quarta posição...\n";
  list.erase(it_begin, it_end);
  std::cout << "Lista após a remoção:\n";
  list.print();

  std::cout << "\n-----------------------------------\n";

  std::cout << "Verificando se o elemento 20 está na lista...\n";
  std::cout << (list.contains(20) ? "✔ 20 está na lista\n" : "❌ 20 não está na lista\n");

  auto pos = list.find(20);
  if (pos != list.end()) {
      list.erase(pos, pos + 1);
      std::cout << "Elemento 20 removido da lista.\n";
      list.print();
  } else {
      std::cout << "Elemento 20 não encontrado.\n";
  }

  std::cout << "\n-----------------------------------\n";

  std::cout << "Estado final da lista:\n";
  list.print();

  return 0;

}
