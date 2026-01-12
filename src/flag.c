#include "flag.h"

void bhStFlg(unsigned int* flg, unsigned int bit)
{
    flg[bit / 32] |= 0x80000000 >> (bit & 31); 
} 

void bhCrFlg(unsigned int* flg, unsigned int bit)
{
    flg[bit / 32] &= ~(0x80000000 >> (bit & 31));
}

int bhCkFlg(unsigned int* flg, unsigned int bit)
{
    return flg[bit / 32] & (0x80000000 >> (bit & 31)); 
} 
