#include<iostream>
#include<vector>
#include<string>

#include "utils.h"
#include "day2.h"
#include "splitString.h"

/* 
  forward X increases the horizontal position by X units.
  down X increases the depth by X units.
  up X decreases the depth by X units.
*/
void AocDay2::part1() {
  std::vector<std::string> lines;
  int horizontal = 0, depth = 0;
  if(!readFileString("../input/day2_1.txt", lines)) {
    std::cerr << "Something went wrong!" << std::endl;
    return;
  }

  // std::cout << lines[0] << '\n';

  for(auto line : lines) {
    std::vector<std::string> splited = split(line, ' ');
    if(splited[0] == "forward") {
      horizontal += std::stoi(splited[1]);
    }
    else if(splited[0] == "down") {
      depth += std::stoi(splited[1]);
    }
    else if(splited[0] == "up") {
      depth -= std::stoi(splited[1]);
    }
  }

  std::cout << "The answer to the Day 2 part 1 is: " << horizontal * depth << std::endl;
}


/*
  down X increases your aim by X units.
  up X decreases your aim by X units.
  forward X does two things:
    - It increases your horizontal position by X units.
    -It increases your depth by your aim multiplied by X.
*/
void AocDay2::part2() {
  std::vector<std::string> lines;
  int horizontal = 0, depth = 0, aim = 0;


  if(!readFileString("../input/day2_2.txt", lines)) {
    std::cerr << "Something went wrong!" << std::endl;
    return;
  }

  for (auto line: lines) {
    std::vector<std::string> splited = split(line, ' ');
    if(splited[0] == "forward") {
      horizontal += std::stoi(splited[1]);
      depth += aim * std::stoi(splited[1]); 
    }
    else if(splited[0] == "down") {
      aim += std::stoi(splited[1]);
    }
    else if(splited[0] == "up") {
      aim -= std::stoi(splited[1]);
    }
  }

  std::cout << "The answer to the Day 2 part 2 is: " << horizontal * depth << std::endl;
}