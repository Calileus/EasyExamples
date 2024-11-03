#include <windows.h>
#include <iostream>

int main() {
    MessageBox(NULL, "Hello, Windows!", "Greetings", MB_OK);
    std::cout << "This is a console output." << std::endl;
    return 0;
}
