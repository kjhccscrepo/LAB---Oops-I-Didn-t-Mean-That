// Oops! I Didn't Mean That.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cassert>
#include <string>
#include "myFunctions.hpp"

using namespace std;

int main()
{
    vector<int> my_vector;

    for (int i = 1; i <= 3; i++)
    {
        my_vector.push_back(i);
        my_vector.push_back(i);
    }

    // When I print out the elements of my_vector, I should see 1 1 2 2 3 3
    cout << printMyVec(my_vector);
    assert(printMyVec(my_vector) == "1 1 2 2 3 3\n\n");

    vector<int> filtered_vector = remove_duplicates(my_vector);

    // When I print out the elements of my_vector, I should see 1 2 3
    cout << printMyVec(filtered_vector);
    assert(printMyVec(filtered_vector) == "1 2 3\n\n");

    // When I print out the elements of my_vector, I should see 1 1 2 2 3 3
    cout << printMyVec(my_vector);
    assert(printMyVec(my_vector) == "1 1 2 2 3 3\n\n");

    return 0;
}
