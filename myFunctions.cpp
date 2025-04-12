
#include <iostream>
#include <vector>
#include <cassert>
#include <string>
#include "myFunctions.hpp"

using namespace std;

vector<int> remove_duplicates(vector<int> tested) {
    int size = (tested.size());
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (tested[i] == tested[j] && i != j) {
                tested.erase(tested.begin() + j);
                size--;
                j--;
            }
        }
    }
    return tested;
}
string printMyVec(vector<int> tested) {
    int size = (tested.size());
    if (size > 0) {
        string temp;
        bool firstIteration = true;
        for (int s = 0; s < size; s++) {
            if (firstIteration) {
                temp = to_string(tested[s]);
                firstIteration = false;
            }
            else {
                temp = temp + " " + to_string(tested[s]);
            }
        }
        temp = temp + "\n\n";
        return temp;
    }
    else {
        return "";
    }
}