//
// Created by Nathan on 5/16/2015.
//

#ifndef LEXICON_SYNTAXTREE_H
#define LEXICON_SYNTAXTREE_H

#include "node.h"

class syntaxTree {

private:
    node *headNode;
    
public:
    syntaxTree();
    ~syntaxTree();
    void setHeadNode(node *newHeadNode);
    node getHeadNode();

};


#endif //LEXICON_SYNTAXTREE_H
