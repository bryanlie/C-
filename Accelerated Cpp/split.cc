#include <cctype>
#include <string>
#include <vector>

#include "split.h"

using std::vector;
using std::string;
using std::isspace;

vector<string> split(const string& s) {
    vector<string> ret;
    typedef string::size_type str_size;
    str_size i = 0;

    while (i != s.size()) {
        while (i != s.size() && isspace(s[i])) 
            ++i;
        
        str_size j = i;

        while (j != s.size() && !isspace(s[j]))
            ++j;

        if (i != j) {
            ret.push_back(s.substr(i, j-i));
            i = j;
        }    
    }

    return ret;
}
