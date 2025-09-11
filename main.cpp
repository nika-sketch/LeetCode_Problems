#include <iostream>
#include <vector>

#include "gas_station/GasStation.h"

using namespace std;


int main() {
    const vector<int> gas = {1, 2, 3, 4, 5};
    const vector<int> cost = {3, 4, 5, 1, 2};
    const int startIndex = GasStation::canCompleteCircuit(gas, cost);
    cout << "Start index: " << startIndex << endl;
    return 0;
}
