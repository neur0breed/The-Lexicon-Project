#include <iostream>
#include <fstream>
#include <string>
#include <bits/stream_iterator.h>

std::string scraper(std::string word)
{
    const std::string DICT = "Dict_Files/JMdict_e";
    std::ifstream fs;
    int lineNumber = 1;
    std::string line = "";

    // open dictionary, safety check
    fs.open(DICT);
    std::cout << "is_open() = " << fs.is_open() << std::endl;
    std::cout << "good() = " << fs.good() << std::endl;
    while(fs.good())
    {
        // reach lineNumber 400 before scraping dictionary
        while(lineNumber <= 400)
        {
            getline(fs, line);
            lineNumber++;
        }

        std::cout << lineNumber << ": " << line << std::endl;

        // search for word line by line
        getline(fs, line);
        auto x = line.find(word);
        if(x != std::string::npos)// if we find our word...
        {
            // print out position in document // DEBUG
            std::cout << "Found on line " << lineNumber << "in column " << x << std::endl;
            return word;
        }
        lineNumber++;
    }
    fs.close();
    return ("Did not find your word.");
}

int main() {
    std::string test = scraper("‚­‚è‚©‚¦‚µ");
    std::cout << test << std::endl;
    /*
    std::ofstream Output;
    Output.open("Dict_Files/Test.txt");
    Output << "Test 2" << std::endl;
    Output.close();
     */
    return 0;
}