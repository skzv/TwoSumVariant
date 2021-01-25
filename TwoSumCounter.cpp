#include "TwoSumCounter.h"

#include <iostream>

TwoSumCounter::TwoSumCounter(std::vector<long long>& listNumbers)
{
    std::cout << "Loading numbers into hashset." << std::endl;

    setNumbers = {};
    for (long long& i : listNumbers) {
        setNumbers.insert(i);
    }

    std::cout << "Done loading." << std::endl;
}

int TwoSumCounter::isTherePairThatSumsTo(int t)
{
    long long x;
    long long t0 = t;
    for (const long long j : setNumbers) {
        x = t0 - j;
        if (x != j) {
            if (setNumbers.find(x) != setNumbers.end()) {
                return true;
            }
        }
    }
    return false;
}

int TwoSumCounter::countDistinctPairsThatSumBetween(int tLo, int tHi)
{
    std::cout << "Counting..." << std::endl;

    int count = 0;
    for (int t = tLo; t <= tHi; t++) {
        if (t % 100 == 0) {
            std::cout << t << std::endl;
        }

        if (isTherePairThatSumsTo(t)) {
            count++;
        }
    }
    return count;
}
