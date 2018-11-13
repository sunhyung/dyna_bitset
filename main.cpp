#include <iostream>
#include "dyna_bitset.h"

int main()
{
    int bitsetSize = 30;
    dyna_bitset dbitset(bitsetSize, false);

    for (int i = 0; i < 10; i++)
    {
        int index = rand() % 30;
        dbitset.set(index);
        std::cout << "Set " << index << "bit as true" << std::endl;
    }

    for (int i = 0; i < bitsetSize; i++)
    {
        std::cout << i << " bit : " << (dbitset.test(i) ? "true" : "false") << std::endl;
    }
}
