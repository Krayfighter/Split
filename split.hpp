#pragma once

#include <iostream>
#include <vector>

using namespace std;


// class for splitting a string
class Split {
    vector<string> out;
    public:
        Split(string str, char c);
        void split();
        vector<string> get_output() {return out;};
};
Split::Split(string str, char c) {
    out.push_back("");
    string buffer = "";
}