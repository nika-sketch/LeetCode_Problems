//
// Created by nikoloz latsabidze on 11.09.25.
//

#include "LongestSubstringWithoutRepeatingCharacters.h"

#include <iostream>
#include <map>
#include <ostream>

int LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(const string &s) {
    if (s.empty()) return 0;
    map<int, string> occurrences;
    int startPointer = 0;
    int endPointer = 0;
    string currentSubstring;

    while (startPointer < s.size()) {
        while (endPointer < s.size() && currentSubstring.find(s[endPointer]) == string::npos) {
            currentSubstring += s[endPointer];
            endPointer++;
        }
        if (!currentSubstring.empty()) {
            occurrences[currentSubstring.size()] = currentSubstring;
        }
        startPointer++;
        endPointer = startPointer;
        currentSubstring.clear();
    }

    const int result = occurrences.rbegin()->first;
    return result;
}
