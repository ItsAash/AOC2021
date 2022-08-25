#include<iostream>
#include<vector>

#include "utils.h"
#include "day1.h"

void AocDay1::part1() {
  std::vector<int> lines;
  if(!readFileInt("../input/day1_1.txt", lines)) {
    std::cerr << "Something went wrong!" << std::endl;
    return;
  }

  int prev = lines[0];
  int increased_count = 0;

  for(auto itr : lines) {
    if(itr > prev) increased_count++;
    prev = itr;
  }

  std::cout << "Solution for Day 1 Part 1 is: " << increased_count << std::endl;
}