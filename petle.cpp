#include <iostream>

// Write your function here
void printString(std::string txt, int num) {
    for(int i = 0; i < num; i++) {
        std::cout << txt << std::endl;
    }
    std::cout << "\n";
}

int main() {
    printString("Hello", 5);
    printString("AbC", 2);
    printString("HiHi ", 6);
    return 0;
}