#include <iostream>
#include <vector>

#include "best_time_to_buy_and_sell_stock/BestTimeToBuyAndSellStock.h"
#include "gas_station/GasStation.h"
#include "longest_substring_without_repeating_characters/LongestSubstringWithoutRepeatingCharacters.h"


using namespace std;

int main() {
    const vector prices = {7, 3, 5, 1, 6, 4};
    const int result = BestTimeToBuyAndSellStock::maxProfit(prices);
    cout << result << endl;
    return 0;
}
