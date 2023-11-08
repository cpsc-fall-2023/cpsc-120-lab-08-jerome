// Jerome Ayala
// jeromeayala@csu.fullerton.edu
// @jeromeayala
// Partners: @nopartner

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double sum{0};
  int count = static_cast<int>(arguments.size()) - 1;
  bool first(true);
  for (std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    } else {
      sum = sum + std::stod(argument);
    }
  }
  double average{0};
  average = sum / count;
  std::cout << "average =" << average;
  return 0;
}