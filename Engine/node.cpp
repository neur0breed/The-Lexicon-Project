//
// Created by Nathan on 5/16/2015.
//

#include "node.h"

node::node()
{
    this->word = "";
    this->category = *new lexical();
}

node::~node() {}

void node::setWord(std::string newWord)
{
    this->word = newWord;
}

void node::setLexical(lexical newLexical)
{
    this->category = newLexical;
}

std::string node::getWord()
{
    return this->word;
}

lexical node::getLexical()
{
    return this->category;
}