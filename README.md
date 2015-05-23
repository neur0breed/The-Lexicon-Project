# Linguistic-Engine
SIP Translation Software

## For a working environment (CLion)
In CLion: File->Settings->Editor->Code Style->File Encodings->...
Change the IDE Encoding to UTF-8, Project Encoding to x-UTF-16LE-BOM, and Default Encoding for properites files to x-UTF-16LE-BOM.
Will test out more settings, but these work.



## Project Description
This project consists of developing an application programming interface for facilitating the translation of phrases 
between languages with a greater degree of accuracy than other open source or free linguistic engines. This API will 
utilize a linked list structure to form an intermediary language as well as the proper classes to translate each target
language into said intermediary language. 

## Objectives and Tasks Associated with the Project
The objectives of this project include developing an intermediary linked list language, English translation protocols, 
and Japanese translation protocols. Due to time and resource constraints, only the English and Japanese protocols will 
be developed. All elements of each language will be tagged and stored appropriately based on their part of speech and 
used in a dictionary for translation referencing. Lastly, unit tests will be created to test for proper functionality of
the application programming interface.

The intermediary linked list language will consist of the creation of the linked list itself in which each node is a 
word with an associated part of speech. The linked list will be designed to take a word or phrase, current language, 
and new language as arguments and return a new word or phrase and then organize the linked list based on the protocols 
of the new language argument type. The protocols class will be implemented with a sentence structure attribute, other 
rules that are still to be determined, and a language identifier (e.g. Japanese, English, etc.). Unit tests will be 
developed by first determining the data types of the expected and actual outcomes, then by comparing those data to one 
another and returning whether or not the data is equivalent. 
