//
// Created by nikoloz latsabidze on 13.09.25.
//

#include "BestTimeToBuyAndSellStock.h"
#include <algorithm>
using namespace std;

int BestTimeToBuyAndSellStock::maxProfit(const vector<int> &prices) {
    int startPointer = 0;
    int endPointer = 0;
    int maxProfit = 0;

    while (endPointer < static_cast<int>(prices.size())) {
        maxProfit = max(maxProfit, prices[endPointer] - prices[startPointer]);
        if (prices[startPointer] > prices[endPointer]) {
            startPointer = endPointer;
        }
        endPointer++;
    }

    return maxProfit;
}
