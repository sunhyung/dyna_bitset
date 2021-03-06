#ifndef DYNA_BITSET
#define DYNA_BITSET

#include <vector>

class dyna_bitset {
public:
    dyna_bitset(int size, bool init = false);

    //set n-th bit as true
    void set(int bit);
    //set n-th bit as false
    void reset(int bit);
    //get boolean value of n-th bit
    bool test(int bit);

private:
    int m_bitCount;
    std::vector<long long> m_bits;
};

#endif