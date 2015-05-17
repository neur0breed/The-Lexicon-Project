//
// Created by Nathan on 5/16/2015.
//

#include "node.h"

node::node()
{
    this->word = "";
    this->lexical = "";
}

node::~node() {}

void node::setWord(std::string newWord)
{
    this->word = newWord;
}

void node::setLexical(std::string newLexical)
{
    this->lexical = newLexical;
}

std::string node::getWord()
{
    return this->word;
}

std::string node::getLexical()
{
    return this->lexical;
}