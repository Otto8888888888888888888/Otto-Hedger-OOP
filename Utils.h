#ifndef UTILS_H
#define UTILS_H
#include "Cell.h"
#include <tuple>
#include <math.h>
#include <random>
class Utils{
public:
    std::tuple<int, int> static generateRandomPos(int gridWidth, int gridHeight);
    double static calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};

std::tuple<int,int> Utils::generateRandomPos(int gridWidth, int gridHeight){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> randxDis(0,gridWidth);
    std::uniform_int_distribution<> randyDis(0,gridHeight);
    int randX = randxDis(gen);
    int randY = randyDis(gen);
    return std::make_tuple(randX, randY);
}

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
    int x1 = std::get<0>(pos1);
    int x2 = std::get<0>(pos2);
    int y1 = std::get<1>(pos1);
    int y2 = std::get<1>(pos2);
    double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    return distance; 
}

#endif