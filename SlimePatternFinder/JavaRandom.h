#pragma once

#include <iostream>

/// <summary>
/// Class from TheBjoel2: https://github.com/TheBjoel2/Slime-Chunk-Finder
/// </summary>

class JavaRandom
{
private:
    //need for a randomizer
    uint64_t rseed;

    int32_t next(int32_t bits)
    {
        rseed = (rseed * 0x5DEECE66DLL + 0xBLL) & 0xFFFFFFFFFFFFLL;

        return int32_t((rseed) >> (48 - bits));
    }
public:
    int32_t nextInt(int32_t bound)
    {
        int32_t r = next(31);
        int32_t m = bound - 1;

        if ((bound & m) == 0)
        {
            r = int32_t((bound * (int64_t)(r)) >> 31);
        }
        else for (int32_t u = r; u - (r = u % bound) + m < 0; u = next(31));

        return r;
    }

    void setSeed(int64_t seedIn)
    {
        rseed = (seedIn ^ 0x5DEECE66DLL) & 0xFFFFFFFFFFFFLL;
    }
};

