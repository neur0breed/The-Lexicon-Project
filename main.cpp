#include <iostream>
#include <fstream>
#include <string>
#include <bits/stream_iterator.h>
#include <stdlib.h>

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

        //std::cout << lineNumber << ": " << line << std::endl;

        // search for word line by line
        getline(fs, line);
        auto x = line.find(">" + word + "<");
        if(x != std::string::npos)// if we find our word...
        {
            // print out position in document // DEBUG
            std::cout << "Found on line " << lineNumber << std::endl;

            while(fs.good())
            {
                std::string translation = "";
                getline(fs, line);
                auto y = line.find("<gloss>");
                if(y != std::string::npos)
                {
                    translation = line.substr(7,line.length() - 15);
                    return translation;
                }
            }
            //return line;
        }
        lineNumber++;
    }
    fs.close();
    return ("Did not find your word.");
}

int main() {
    std::string test = scraper("白");
    std::cout << test << std::endl;
    /*
    std::ofstream Output;
    Output.open("Dict_Files/Test.txt");
    Output << "Test 2" << std::endl;
    Output.close();
     */
    system("pause");
    return 0;
}