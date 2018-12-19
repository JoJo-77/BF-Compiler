# BF-Compiler

## Description:

This is my first dip into the creation of a complier. This project revolves around the esoteric programming language called, ["Brainfuck"](https://en.wikipedia.org/wiki/Brainfuck). This language only contains 8 commands, memory in the form of a tape, and an instruction pointer. 

## Brainfuck in a Table
| Command | Action |
|:-------:|:------:|
|``` > ``` | move pointer one to right |
|``` < ``` | move pointer one to the left |
|``` + ``` | increment byte at pointer |
|``` - ``` | decrement byte at pointer |
|``` . ``` | output byte at pointer |
|``` , ``` | accept one byte of input at pointer |
|``` [ ``` | while pointer is not 0, do { |
|``` ] ``` | close while loop |

## Design Choices:
- Programming Language: C
- Data Structures: TODO
- Compiler: gcc
