#include <iostream>

void doubleItByValue(int value) {
  value *= 2;
}

void doubleItByPointer(int *value) {
  (*value) *= 2;
}

void doubleItByReference(int &value) {
  value *= 2;
}

int main() {
  
  int bank_account = 100;

  std::cout << std::endl << "Initial bank_acount: " << bank_account << std::endl;
  
  doubleItByValue(bank_account);

  std::cout << std::endl << "doubleItByValue bank_acount: " << bank_account << std::endl;

  doubleItByPointer(&bank_account);  

  std::cout << std::endl << "doubleItByPointer bank_acount: " << bank_account << " After previous \"double\"";
  std::cout << std::endl;

  doubleItByReference(bank_account);  

  std::cout << std::endl << "doubleItByReference bank_acount: " << bank_account << " After previous \"double\"";
  std::cout << std::endl;


}