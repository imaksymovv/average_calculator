#include <iostream>
#include <fstream>

int main() {
  std::fstream SomeFile("SomeFile.txt", std::ios_base::in | std::ios_base::out);

  if (SomeFile) {
    int number;
    int sum = 0;
    int count = 0;

    while (SomeFile >> number) {
      sum += number;
      count++;
    }

    double average = 0;
    if (count > 0) {
      average = static_cast<double>(sum) / count;
      std::cout << "Average: " << average << std::endl;
    } else {
      std::cout << "Average cannot be calculated";
    }
  } else {
    std::cout << "File cannot be opened" << std::endl;
  }

  return 0;
}