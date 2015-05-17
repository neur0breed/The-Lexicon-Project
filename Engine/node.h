//
// Created by Nathan on 5/16/2015.
//

#ifndef LEXICON_NODE_H
#define LEXICON_NODE_H

#include <string>

class node {
private:
    std::string word;
    std::string lexical;
public:
    node();
    ~node();
    void setWord(std::string newWord);
    void setLexical(std::string newLexical);
    std::string getWord();
    std::string getLexical();
};


#endif //LEXICON_NODE_H
