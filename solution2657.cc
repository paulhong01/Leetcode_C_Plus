#include "solution2657.h"

#include <vector>

namespace Leetcode {

std::vector<int> findThePrefixCommonArray(std::vector<int>& A, std::vector<int>& B) {
    int N = A.size(); 
    std::vector<int> ret(N);
    std::vector<int> seen(N);
    int count = 0;
    for (int i = 0; i < N; i++) {
        seen[A[i]-1]++;
        if (seen[A[i]-1] == 2) {
            count++;
        }

        seen[B[i]-1]++;
        if (seen[B[i]-1] == 2) {
            count++;
        }
        ret[i] = count;
    }
    return ret;
}

}   // namespace Leetcode
