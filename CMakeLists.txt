cmake_minimum_required(VERSION 3.2)
project(Lexicon)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Lexicon ${SOURCE_FILES} DB/sqlite3.c Engine/node.h Engine/node.cpp Engine/lexical.cpp Engine/lexical.h Engine/syntaxTree.cpp Engine/syntaxTree.h DB/dbManager.cpp DB/dbManager.h)