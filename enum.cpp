#include <iostream> 
int main() { 
    enum class Color { RED, BLUE };
    Color color = Color::BLUE; 
    if (color == Color::RED) // this is okay 
        std::cout << "The color is red!\n"; 
    else if (color == Color::BLUE) 
        std::cout << "The color is blue!\n"; 
    return 0; }


