cmake_minimum_required(VERSION 4.0)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        gas_station/GasStation.cpp
        gas_station/GasStation.h
        longest_substring_without_repeating_characters/LongestSubstringWithoutRepeatingCharacters.cpp
        longest_substring_without_repeating_characters/LongestSubstringWithoutRepeatingCharacters.h
)
