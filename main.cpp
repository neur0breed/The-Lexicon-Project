#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream Output;
    Output.open("Dict_Files/Test.txt");
    Output << "Test 2" << std::endl;
    Output.close();
    return 0;
}