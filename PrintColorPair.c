#include<stdio.h>
#include "GetColorPair.c"
#include <assert.h>

void PrintColorCodingReference()
{
    printf("Color Coding Reference Manual:\n");
    for (int major = 0; major < numberOfMajorColors; ++major)
      {
        for (int minor = 0; minor < numberOfMinorColors; ++minor)
          {
            ColorPair colorPair = { (enum MajorColor)major, (enum MinorColor)minor };
            int pairNumber = GetPairNumberFromColor(&colorPair);
            char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
            ColorPairToString(&colorPair, colorPairNames);
            printf("Pair Number %d: %s\n", pairNumber, colorPairNames);
        }
    }
}
