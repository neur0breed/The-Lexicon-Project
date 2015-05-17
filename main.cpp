#include <iostream>
#include <fstream>
#include<string>


using namespace std;

int main() {
    ofstream Output;
    Output.open("Test.txt");
    Output << "Test 2" << endl;
    Output.flush();
    Output.close();
    return 0;
}