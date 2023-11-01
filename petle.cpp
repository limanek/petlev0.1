#include <iostream>

// Write your function here
void printString(std::string txt, int num) {
    std::cout << "\n";
    
    for(int i = 0; i < num; i++) {
        std::cout << txt << std::endl;
    }
}

void writing() {
    int number;
    std::string text;
    std::cout << "Podaj slow: ";
    std::cin >> text;
    std::cout << "Podaj ilosc powtorzen: ";
    std::cin >> number;
    printString(text, number);
} 

int main() {
    writing();
    return 0;
}
