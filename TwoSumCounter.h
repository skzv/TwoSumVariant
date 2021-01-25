#pragma once

#include <unordered_set>
#include <vector>

class TwoSumCounter
{
public:
	TwoSumCounter(std::vector<long long>& listNumbers);
	int isTherePairThatSumsTo(int t);
	int countDistinctPairsThatSumBetween(int tLo, int tHi);

private:
	std::unordered_set<long long> setNumbers;
};

