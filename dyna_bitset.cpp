#include <vector>
#include "dyna_bitset.h"

dyna_bitset::dyna_bitset(int size, bool init)
    : m_bitCount(size), 
    m_bits((size / 64) + ((size % 64) ? 1 : 0), init ? (1ll << 64) - 1 : 0) {

}

void dyna_bitset::set(int bit) {

    if (bit >= m_bitCount) {
        return;
    }

    int idx = bit / 64;
    int pos = bit % 64;

    m_bits[idx] |= 1ll << pos;
}
void dyna_bitset::reset(int bit) {

    if (bit >= m_bitCount) {
        return;
    }

    int idx = bit / 64;
    int pos = bit % 64;

    m_bits[idx] &= ~(1ll << pos);
}

bool dyna_bitset::test(int bit) {

    if (bit >= m_bitCount) {
        return 0;
    }

    int idx = bit / 64;
    int pos = bit % 64;

    return m_bits[idx] & 1ll << pos;
}
