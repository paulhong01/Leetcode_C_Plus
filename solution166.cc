#include "solution166.h"

#include <string>
#include <map>

namespace Leetcode {

std::string Solution166::fractionToDecimal(long numerator, long denominator) {
    if (numerator == 0) {
        return "0";
    }
    bool positive = true;
    if (numerator < 0) {
        numerator = numerator * -1;
        positive = !positive;
    }
    if (denominator < 0) {
        denominator = denominator * -1;
        positive = !positive;
    }
    std::string ret = (numerator/denominator == 0)?"0":std::to_string(numerator/denominator);
    if (!positive) {
        ret = "-" + ret;
    }
    numerator %= denominator;
    if (numerator == 0) {
        return ret;
    }
    ret += ".";
    std::map<long, int> seen;
    while (numerator != 0) {
        numerator *= 10;
        if (auto it = seen.find(numerator); it != seen.end()) {
            ret.insert(it->second, "(");
            ret += ')';
            return ret;
        }
        seen[numerator] = ret.size();
        ret += (numerator/denominator == 0)?"0":std::to_string(numerator/denominator);
        numerator %= denominator;
    }

    return ret;
}

}   // namespace Leetcode
