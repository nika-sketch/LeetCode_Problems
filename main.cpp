#include <iostream>
#include <vector>

#include "gas_station/GasStation.h"
#include "longest_substring_without_repeating_characters/LongestSubstringWithoutRepeatingCharacters.h"

using namespace std;

int main() {
    const int result = LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring("pwwkew");
    cout << result << endl;
    return 0;
}
