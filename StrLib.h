// Hope Kim
// ITP 165, Fall 2017
// Homework 9
// hopekim@usc.edu

#pragma once

#include <string>
#include <vector>

// Function: strSplit
// Purpose: Given a string and a character to split on, returns a vector
// of the split strings
// Input: String to split, character to split on
// Output: Vector containing the split -- will have only the original string
// if there's no split
std::vector<std::string> strSplit(const std::string& str, char splitChar);
