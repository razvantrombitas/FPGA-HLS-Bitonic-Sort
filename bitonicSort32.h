#ifndef _BITONICSORT32_H_
#define _BITONICSORT32_H_
#include <iostream>
#include "ap_axi_sdata.h"
#include "hls_stream.h"
#include "ap_int.h" //include library for arbitrary precision (or bit-accurate) integer data types
#define N 32

using namespace std;

typedef ap_uint<32> din_t; //32 bit unsigned int
typedef ap_uint<6> dloop_t; //6 bit unsigned int

class BiggerSmaller{
public:
    din_t bigger, smaller;
};

void bitonicSort32(din_t in[N], din_t out[N]);

#endif
