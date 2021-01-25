// TwoSumVariant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TwoSumCounter.h"
#include <string>
#include <fstream>
#include <stdlib.h>

std::vector<long long> readIntegersFromFile();

int main()
{
    std::vector<long> v = { 1, 2, 3, 4, 4, 4 };
    std::vector<long long> w = readIntegersFromFile();
    //std::cout << "size: " + w.size() << std::endl;
    TwoSumCounter tsc = TwoSumCounter(w);
    std::cout << "Number of target values: " << tsc.countDistinctPairsThatSumBetween(-10000, 10000) << std::endl;
}

std::vector<long long> readIntegersFromFile() {
    std::vector<long long> numbers;
    std::string line;
    std::ifstream in("data.txt");
 
    if (!in) {
        std::cout << "Cannot open file." << std::endl;
        return numbers;
    }

    std::cout << "Reading file..." << std::endl;

    long long x;
    while (getline(in, line)) {
        //std::cout << line << std::endl;
        x = std::stoll(line);
        //std::cout << x << std::endl;
        numbers.push_back(x);
    }

    in.close();

    std::cout << "Done reading." << std::endl;

    return numbers;
}