#include <iostream>
#include <sqlite3.h>

int main(int, char**) {
    std::cout << "Hello, world!\n";
    std::cout << sqlite3_libversion() << std::endl;
}
