#ifndef HEADER_FILE_H_INCLUDED  // this checks if the variable HEADER_FILE_H_INCLUDED excits
#define HEADER_FILE_H_INCLUDED  // this defines a variable HEADER_FILE_H_INCLUDED

#include <iostream>  // IOstream stands for Input Output stream
using namespace std;   // giving a meaning to certain strings like cout, cin. 


extern int a; // external (outside) it mean that we do not reserve MEMORU for varibles here
              // needs to be define somewhere else: for example headerFile.cpp

/*
    Description of the function showHelp();
*/
void showHelp(); // doesn't need the extern 
                 // needs to be define somewhere else: for example headerFile.cpp

#endif // HEADER_FILE_H_INCLUDED   // this is for the case you include the same header file twice! For example in different files!
