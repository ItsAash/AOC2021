#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "utils.h"


bool readFileString(std::string fileName, std::vector<std::string> &lines)
{
    std::string line;
    std::ifstream input {fileName.c_str()};
    if(!input.is_open()) {
      std::cerr << "Cannot open the file " << fileName << std::endl;
      return false;
    }
    
    while(std::getline(input, line)) {
      (lines).push_back(line);
    }
    return true;
}

bool readFileInt(std::string fileName, std::vector<int> &lines)
{
    std::string line;
    int convertedLine;
    std::ifstream input {fileName.c_str()};
    if(!input.is_open()) {
      std::cerr << "Cannot open the file " << fileName << std::endl;
      return false;
    }
    
    while(std::getline(input, line)) {
      convertedLine = std::stoi(line);
      (lines).push_back(convertedLine);
    }
    return true;
}
