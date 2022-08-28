#include <iostream>
#include <vector>
#include <string>

#include "utils.h"
#include "day3.h"
#include "splitString.h"
#include "convertDecimal.h"

std::vector<std::string> filterAll(std::vector<std::string> list, bool isLeast);

void AocDay3::part1()
{
  std::vector<std::string> lines;
  long long bin_gamma_rate = 0;
  long long bin_epsilon_rate = 0;

  int gamma_rate;
  int epsilon_rate;
  if (!readFileString("../input/day3_1.txt", lines))
  {
    std::cerr << "Something went wrong!" << std::endl;
    return;
  }

  for (int i = 0; i < lines[0].length(); i++)
  {
    int count_one = 0;
    int count_zero = 0;
    for (std::string line : lines)
    {
      char digit = line[i];
      // std::cout << "Digit: " << digit << std::endl;
      digit == '1' ? count_one++ : count_zero++;
    }

    if (count_one > count_zero)
    {
      bin_gamma_rate = std::stoll(std::to_string(bin_gamma_rate) + "1");
      bin_epsilon_rate = std::stoll(std::to_string(bin_epsilon_rate) + "0");
    }
    else if (count_zero > count_one)
    {
      bin_epsilon_rate = std::stoll(std::to_string(bin_epsilon_rate) + "1");
      bin_gamma_rate = std::stoll(std::to_string(bin_gamma_rate) + "0");
    }
  }

  std::cout << bin_epsilon_rate << " " << bin_gamma_rate << std::endl;

  gamma_rate = convert(bin_gamma_rate);
  epsilon_rate = convert(bin_epsilon_rate);

  std::cout << "The answer to the Day 3 part 1 is: " << gamma_rate * epsilon_rate << std::endl;
}

void AocDay3::part2()
{
  std::vector<std::string> lines;
  long long bin_oxygen_generator_rating_digits;
  long long bin_carbon_scrubber_rating_digits;
  int oxygen_generator_rating;
  int carbon_scrubber_rating;
  if (!readFileString("../input/day3_1.txt", lines))
  {
    std::cerr << "Something went wrong!" << std::endl;
    return;
  }

  bin_carbon_scrubber_rating_digits = std::stoll(filterAll(lines, true)[0]);
  bin_oxygen_generator_rating_digits = std::stoll(filterAll(lines, false)[0]);
  oxygen_generator_rating = convert(bin_oxygen_generator_rating_digits);
  carbon_scrubber_rating = convert(bin_carbon_scrubber_rating_digits);

  std::cout << "The answer to the Day 3 part 2 is: " << oxygen_generator_rating * carbon_scrubber_rating << std::endl;
}

std::vector<std::string> filterAll(std::vector<std::string> input, bool isLeast)
{
  if (input.size() <= 1)
    return input;
  std::vector<std::string> lines = input;
  std::vector<std::string> starting_one;
  std::vector<std::string> starting_zero;
  int count_one = 0, count_zero = 0;
  for (int i = 0; i < input[0].length(); i++)
  {
    count_one = 0;
    count_zero = 0;
    starting_one.clear();
    starting_zero.clear();
    for (auto line : lines)
    {
      char digit = line[i];

      if (digit == '1')
      {
        count_one++;
        starting_one.push_back(line);
      }
      else
      {
        count_zero++;
        starting_zero.push_back(line);
      }
    }

    lines.clear();
    if (count_one >= count_zero)
    {
      isLeast ? lines = starting_zero : lines = starting_one;
    }
    else
    {
      isLeast ? lines = starting_one : lines = starting_zero;
    }
  }

  return lines;
}
