#include <iostream>
#include <array>
#include <vector>

double calculate_bust_probability(const std::vector<int>& target_sums) {
    int totalPossibilities = 6 * 6 * 6 * 6;
    int bustCount = 0;

    for (int d1 = 1; d1 <= 6; d1++) { 
        for (int d2 = 1; d2 <= 6; d2++) {
            for (int d3 = 1; d3 <= 6; d3++) {
                for (int d4 = 1; d4 <= 6; d4++) {
                    std::array<int, 6> sums = { //sets up all the possible combinations of 4 dice rolls
                        d1 + d2, d1 + d3, d1 + d4, 
                        d2 + d3, d2 + d4, d3 + d4
                    };

                    bool bust = true; 
                    for (auto target : target_sums) { //looks through the target sums and stores each one as an integer to use later
                        bool found = false;
                        for (auto sum : sums) { 
                            if (sum == target) {
                                found = true; 
                                break;
                                //now that this combination has been ruled out as a bust the loop breaks and a bust is not added to the count
                            }
                        }
                        if (found) {
                            bust = false;
                            break;
                        }
                    }
                    if (bust == true) {
                        bustCount++;
                    }
                }
            }
        }
    }

    double bustProb = (double)(bustCount) / totalPossibilities;
    std::cout << "Bust Count: " << bustCount << std::endl;
    std::cout << "Total Possibilities: " << totalPossibilities << std::endl;
    return bustProb;
}

int main() {
    std::vector<int> target_sums1 = {4,7,9};
    std::cout << "Bust Probability for (3, 8, 11): " << calculate_bust_probability(target_sums1) << std::endl;
    std::vector<int> target_sums2 = {5,7,10};
    std::cout << "Bust Probability for (5, 8, 10: " << calculate_bust_probability(target_sums2) << std::endl;
    return 0;
}
