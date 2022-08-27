#include<iostream>
#include<vector>
#include<string>

#include "utils.h"
#include "day3.h"
#include "splitString.h"
#include "convertDecimal.h"



void AocDay3::part1() {
  std::vector<std::string> lines;
  long long bin_gamma_rate = 0;
  long long bin_epsilon_rate = 0;

  int gamma_rate;
  int epsilon_rate;
  if(!readFileString("../input/day3_1.txt", lines)) {
    std::cerr << "Something went wrong!" << std::endl;
    return;
  }

  for (int i = 0; i < lines[0].length(); i++) {
    int count_one = 0; int count_zero = 0;
    for (std::string line : lines) {
      char digit = line[i];
      // std::cout << "Digit: " << digit << std::endl;
      digit == '1' ? count_one++ : count_zero++;
    }

    if(count_one > count_zero) {
      bin_gamma_rate = std::stoll(std::to_string(bin_gamma_rate) + "1"); 
      bin_epsilon_rate = std::stoll(std::to_string(bin_epsilon_rate) + "0"); 
    }
    else if(count_zero > count_one) {
      bin_epsilon_rate = std::stoll(std::to_string(bin_epsilon_rate) + "1");
      bin_gamma_rate = std::stoll(std::to_string(bin_gamma_rate) + "0"); 
    }
  }

  std::cout << bin_epsilon_rate << " " << bin_gamma_rate << std::endl;

  gamma_rate = convert(bin_gamma_rate);
  epsilon_rate = convert(bin_epsilon_rate);

  std::cout << "The answer to the Day 3 part 1 is: " << gamma_rate * epsilon_rate << std::endl;
}

void AocDay3::part2() {
  std::vector<std::string> lines;

  if(!readFileString("../input/day3_1.txt", lines)) {
    std::cerr << "Something went wrong!" << std::endl;
    return;
  }
}