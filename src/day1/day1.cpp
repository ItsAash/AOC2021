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

void AocDay1::part2() {
  std::vector<int> lines;
  if(!readFileInt("../input/day1_1.txt", lines)) {
    std::cerr << "Something went wrong!" << std::endl;
    return;
  }

  int prevSum = 0;
  int increased_count = 0;
  for (int i = 2; i < lines.size(); i++) {
    int sum = lines[i] + lines[i - 1] + lines[i - 2];
    if(prevSum < sum) {
      prevSum == 0 ? increased_count : increased_count++;
    }
    prevSum = sum;
  }

  std::cout << "Solution for Day 1 Part 2 is: " << increased_count << std::endl;
}