//
// Created by Nathan on 5/16/2015.
//

#ifndef LEXICON_NODE_H
#define LEXICON_NODE_H

#include <string>
//#include <bits/stl_bvector.h>
#include "lexical.h"

class node {
private:
    std::string word;
    lexical category;
    //std::vector<node> ass_nodes;

public:
    node();
    ~node();
    void setWord(std::string newWord);
    void setLexical(lexical newLexical);
    std::string getWord();
    lexical getLexical();
};


#endif //LEXICON_NODE_H
