//
// Created by nikoloz latsabidze on 11.09.25.
//

#include "GasStation.h"

int GasStation::canCompleteCircuit(const vector<int> &gas, const vector<int> &cost) {
    vector<int> differences;
    differences.reserve(gas.size());
    for (int i = 0; i < gas.size(); i++) {
        differences.push_back(gas[i] - cost[i]);
    }

    int positive = 0;
    int negative = 0;
    for (const int difference: differences) {
        if (difference < 0) {
            negative += difference;
        } else {
            positive += difference;
        }
    }

    if (negative + positive < 0) {
        return -1;
    }
    int savedIndex = 0;
    int gas_tank = 0;
    for (int i = 0; i < differences.size(); i++) {
        gas_tank += differences[i];
        if (gas_tank < 0) {
            savedIndex = i + 1;
            gas_tank = 0;
        }
    }
    return savedIndex;
}
