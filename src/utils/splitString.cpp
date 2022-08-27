#include "splitString.h"
#include<vector>
#include<string>
#include<iostream>

std::vector<std::string> split(std::string s, char by) {
  std::string temp = "";
  std::vector<std::string> splited;
  for (int i = 0; i < s.length(); i++) {
    char itr = s[i];
    if(itr == by || itr == '\n' || i == s.length() - 1) {
      if(i == s.length() - 1) temp += itr;
      splited.push_back(temp);
      temp = "";
      continue;

    }
    
    temp += itr;
  }
  return splited;
}
  