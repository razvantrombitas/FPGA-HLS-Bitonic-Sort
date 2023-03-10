#include "bitonicSort32.h"

//Main block (compare and swap)
BiggerSmaller AscendDescend(const din_t &x, const din_t &y){
	#pragma HLS PIPELINE
	BiggerSmaller s;

    s.bigger = (x > y) ? x : y;
    s.smaller = (x > y) ? y : x;

    return s;
}

void FourinSmaller(const din_t &x0, const din_t &x1, const din_t &x2, const din_t &x3,
					din_t &y0, din_t &y1, din_t &y2, din_t &y3){

	#pragma HLS PIPELINE

	BiggerSmaller res;
        res = AscendDescend(x0, x2);
        y0 = res.smaller; y2 = res.bigger;

        res = AscendDescend(x1, x3);
        y1 = res.smaller; y3 = res.bigger;
}

void FourinBigger(const din_t &x0, const din_t &x1, const din_t &x2, const din_t &x3,
					din_t &y0, din_t &y1, din_t &y2, din_t &y3){

	#pragma HLS PIPELINE

	BiggerSmaller res;
        res = AscendDescend(x0, x2);
        y0 = res.bigger; y2 = res.smaller;

        res = AscendDescend(x1, x3);
        y1 = res.bigger; y3 = res.smaller;
}

void EightinSmaller(const din_t &x0, const din_t &x1, const din_t &x2, const din_t &x3, const din_t &x4, const din_t &x5,
                const din_t &x6, const din_t &x7, din_t &y0, din_t &y1, din_t &y2, din_t &y3, din_t &y4, din_t &y5, din_t &y6, din_t &y7){

	#pragma HLS PIPELINE II=1
	BiggerSmaller res;
        res = AscendDescend(x0, x4);
        y0 = res.smaller; y4 = res.bigger;

        res = AscendDescend(x1, x5);
        y1 = res.smaller; y5 = res.bigger;

        res = AscendDescend(x2, x6);
        y2 = res.smaller; y6 = res.bigger;

        res = AscendDescend(x3, x7);
        y3 = res.smaller; y7 = res.bigger;

}

void EightinBigger(const din_t &x0, const din_t &x1, const din_t &x2, const din_t &x3, const din_t &x4, const din_t &x5,
                const din_t &x6, const din_t &x7, din_t &y0, din_t &y1, din_t &y2, din_t &y3, din_t &y4, din_t &y5, din_t &y6, din_t &y7){

	    #pragma HLS PIPELINE

	BiggerSmaller res;
        res = AscendDescend(x0, x4);
        y0 = res.bigger; y4 = res.smaller;

        res = AscendDescend(x1, x5);
        y1 = res.bigger; y5 = res.smaller;

        res = AscendDescend(x2, x6);
        y2 = res.bigger; y6 = res.smaller;

        res = AscendDescend(x3, x7);
        y3 = res.bigger; y7= res.smaller;

}

void SixteeninSmaller(const din_t &x0, const din_t &x1, const din_t &x2, const din_t &x3, const din_t &x4, const din_t &x5,
                     const din_t &x6, const din_t &x7, const din_t &x8, const din_t &x9, const din_t &x10, const din_t &x11, const din_t &x12,
                     const din_t &x13, const din_t &x14, const din_t &x15, din_t &y0, din_t &y1, din_t &y2, din_t &y3, din_t &y4, din_t &y5, din_t &y6,
                    din_t &y7, din_t &y8, din_t &y9, din_t &y10, din_t &y11, din_t &y12, din_t &y13, din_t &y14, din_t &y15){

        #pragma HLS PIPELINE

	BiggerSmaller res;

        res = AscendDescend(x0, x8);
        y0 = res.smaller; y8 = res.bigger;

        res = AscendDescend(x1, x9);
        y1 = res.smaller; y9 = res.bigger;

        res = AscendDescend(x2, x10);
        y2 = res.smaller; y10 = res.bigger;

        res = AscendDescend(x3, x11);
        y3 = res.smaller; y11 = res.bigger;

        res = AscendDescend(x4, x12);
        y4 = res.smaller; y12 = res.bigger;

        res = AscendDescend(x5, x13);
        y5 = res.smaller; y13 = res.bigger;

        res = AscendDescend(x6, x14);
        y6 = res.smaller; y14 = res.bigger;

        res = AscendDescend(x7, x15);
        y7 = res.smaller; y15 = res.bigger;
}

void SixteeninBigger(const din_t &x0, const din_t &x1, const din_t &x2, const din_t &x3, const din_t &x4, const din_t &x5,
                     const din_t &x6, const din_t &x7, const din_t &x8, const din_t &x9, const din_t &x10, const din_t &x11, const din_t &x12,
                     const din_t &x13, const din_t &x14, const din_t &x15, din_t &y0, din_t &y1, din_t &y2, din_t &y3, din_t &y4, din_t &y5, din_t &y6,
                    din_t &y7, din_t &y8, din_t &y9, din_t &y10, din_t &y11, din_t &y12, din_t &y13, din_t &y14, din_t &y15){

        #pragma HLS PIPELINE

	BiggerSmaller res;

       res = AscendDescend(x0, x8);
        y0 = res.bigger; y8 = res.smaller;

        res = AscendDescend(x1, x9);
        y1 = res.bigger; y9 = res.smaller;

        res = AscendDescend(x2, x10);
        y2 = res.bigger; y10 = res.smaller;

        res = AscendDescend(x3, x11);
        y3 = res.bigger; y11 = res.smaller;

        res = AscendDescend(x4, x12);
        y4 = res.bigger; y12 = res.smaller;

        res = AscendDescend(x5, x13);
        y5 = res.bigger; y13 = res.smaller;

        res = AscendDescend(x6, x14);
        y6 = res.bigger; y14 = res.smaller;

        res = AscendDescend(x7, x15);
        y7 = res.bigger; y15 = res.smaller;
}
//void bitonicSort32(hls::stream<ap_axis<32,2,5,6>> &in, hls::stream<ap_axis<32,2,5,6>> &out){
void bitonicSort32(din_t in[N], din_t out[N]){

//#pragma HLS INTERFACE axis port=in
//#pragma HLS INTERFACE axis port=out
//#pragma hls interface s_axilite port=return

#pragma HLS PIPELINE

// HLS ARRAY_PARTITION: Partitions an array into smaller arrays or individual elements -> increases the amount of read and write ports for the storage.
#pragma HLS ARRAY_PARTITION variable=in
#pragma HLS ARRAY_PARTITION variable=out

	BiggerSmaller result;

//hls::stream<ap_axis<32,2,5,6>> a,b,c,d,e,f,g,h,l,m,n,o,p,q;
din_t a[N], b[N], c[N], d[N], e[N], f[N], g[N], h[N], l[N], m[N], n[N], o[N], p[N], q[N];
#pragma HLS ARRAY_PARTITION variable=a
#pragma HLS ARRAY_PARTITION variable=b
#pragma HLS ARRAY_PARTITION variable=c
#pragma HLS ARRAY_PARTITION variable=d
#pragma HLS ARRAY_PARTITION variable=e
#pragma HLS ARRAY_PARTITION variable=f
#pragma HLS ARRAY_PARTITION variable=g
#pragma HLS ARRAY_PARTITION variable=h
#pragma HLS ARRAY_PARTITION variable=l
#pragma HLS ARRAY_PARTITION variable=m
#pragma HLS ARRAY_PARTITION variable=n
#pragma HLS ARRAY_PARTITION variable=o
#pragma HLS ARRAY_PARTITION variable=p
#pragma HLS ARRAY_PARTITION variable=q

//.........................1st stage..........................//

for(dloop_t i=0; i<N/4; i++){
    #pragma HLS unroll
    result = AscendDescend(in[4*i], in[4*i+1]);
    a[4*i] = result.smaller; a[4*i+1] = result.bigger;
}

for(dloop_t i=0; i<N/4; i++){
    #pragma HLS unroll
    result = AscendDescend(in[4*i+2], in[4*i+3]);
    a[4*i+2] = result.bigger; a[4*i+3] = result.smaller;
}

//.........................2nd stage..........................//

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    FourinSmaller(a[8*i], a[8*i+1], a[8*i+2], a[8*i+3], b[8*i], b[8*i+1], b[8*i+2], b[8*i+3]);
    FourinBigger(a[8*i+4], a[8*i+5], a[8*i+6], a[8*i+7], b[8*i+4], b[8*i+5], b[8*i+6], b[8*i+7]);
}

//.........................3rd stage..........................//

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(b[8*i], b[8*i+1]);
    c[8*i] = result.smaller; c[8*i+1] = result.bigger;

    result = AscendDescend(b[8*i+2], b[8*i+3]);
    c[8*i+2] = result.smaller; c[8*i+3] = result.bigger;
}

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(b[8*i+4], b[8*i+5]);
    c[8*i+4] = result.bigger; c[8*i+5] = result.smaller;

    result = AscendDescend(b[8*i+6], b[8*i+7]);
    c[8*i+6] = result.bigger; c[8*i+7] = result.smaller;
}

//.........................4th stage.........................//

for(dloop_t i=0; i<N/16; i++){
    #pragma HLS unroll
EightinSmaller(c[16*i+0], c[16*i+1], c[16*i+2], c[16*i+3], c[16*i+4], c[16*i+5], c[16*i+6], c[16*i+7],
                 d[16*i+0], d[16*i+1], d[16*i+2], d[16*i+3], d[16*i+4], d[16*i+5], d[16*i+6], d[16*i+7]);
EightinBigger(c[16*i+8], c[16*i+9], c[16*i+10], c[16*i+11], c[16*i+12], c[16*i+13], c[16*i+14], c[16*i+15],
                 d[16*i+8], d[16*i+9], d[16*i+10], d[16*i+11], d[16*i+12], d[16*i+13], d[16*i+14], d[16*i+15]);
}

//.........................5th stage.........................//

for(dloop_t i=0; i<N/16; i++){
    #pragma HLS unroll
        FourinSmaller(d[16*i], d[16*i+1], d[16*i+2], d[16*i+3], e[16*i], e[16*i+1], e[16*i+2], e[16*i+3]);
        FourinSmaller(d[16*i+4], d[16*i+5], d[16*i+6], d[16*i+7], e[16*i+4], e[16*i+5], e[16*i+6], e[16*i+7]);
        FourinBigger(d[16*i+8], d[16*i+9], d[16*i+10], d[16*i+11], e[16*i+8], e[16*i+9], e[16*i+10], e[16*i+11]);
        FourinBigger(d[16*i+12], d[16*i+13], d[16*i+14], d[16*i+15], e[16*i+12], e[16*i+13], e[16*i+14], e[16*i+15]);
}

//.........................6th stage.........................//

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(e[2*i], e[2*i+1]);
    f[2*i] = result.smaller; f[2*i+1] = result.bigger;
}

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(e[2*i+8], e[2*i+9]);
    f[2*i+8] = result.bigger; f[2*i+9] = result.smaller;
}

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(e[2*i+16], e[2*i+17]);
    f[2*i+16] = result.smaller; f[2*i+17] = result.bigger;
}

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(e[2*i+24], e[2*i+25]);
    f[2*i+24] = result.bigger; f[2*i+25] = result.smaller;
}

//.........................7th stage.........................//

SixteeninSmaller(f[0], f[1], f[2], f[3], f[4], f[5], f[6], f[7],
                 f[8], f[9], f[10], f[11], f[12], f[13], f[14], f[15],
                 g[0], g[1], g[2], g[3], g[4], g[5], g[6], g[7], g[8],
                 g[9], g[10], g[11], g[12], g[13], g[14], g[15]);
SixteeninBigger(f[16], f[17], f[18], f[19], f[20], f[21], f[22], f[23],
                 f[24], f[25], f[26], f[27], f[28], f[29], f[30], f[31],
                 g[16], g[17], g[18], g[19], g[20], g[21], g[22], g[23], g[24],
                 g[25], g[26], g[27], g[28], g[29], g[30], g[31]);


//.........................8th stage.........................//

for(dloop_t i=0; i<N/16; i++){
    #pragma HLS unroll
    EightinSmaller(g[8*i], g[8*i+1], g[8*i+2], g[8*i+3], g[8*i+4], g[8*i+5], g[8*i+6], g[8*i+7],
                 h[8*i], h[8*i+1], h[8*i+2], h[8*i+3], h[8*i+4], h[8*i+5], h[8*i+6], h[8*i+7]);
}

for(dloop_t i=0; i<N/16; i++){
    #pragma HLS unroll
    EightinBigger(g[8*i+16], g[8*i+17], g[8*i+18], g[8*i+19], g[8*i+20], g[8*i+21], g[8*i+22], g[8*i+23],
                 h[8*i+16], h[8*i+17], h[8*i+18], h[8*i+19], h[8*i+20], h[8*i+21], h[8*i+22], h[8*i+23]);
}

//.........................9th stage.........................//

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    FourinSmaller(h[4*i], h[4*i+1], h[4*i+2], h[4*i+3], l[4*i], l[4*i+1], l[4*i+2], l[4*i+3]);
}

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    FourinBigger(h[4*i+16], h[4*i+17], h[4*i+18], h[4*i+19], l[4*i+16], l[4*i+17], l[4*i+18], l[4*i+19]);
}

//.........................10th stage.........................//

for(dloop_t i=0; i<N/4; i++)
{
    #pragma HLS unroll
    result = AscendDescend(l[2*i], l[2*i+1]);
    m[2*i] = result.smaller; m[2*i+1] = result.bigger;
}

for(dloop_t i=0; i<N/4; i++){
    #pragma HLS unroll
    result = AscendDescend(l[2*i+16], l[2*i+17]);
    m[2*i+16] = result.bigger; m[2*i+17] = result.smaller;
}

//.........................11th stage.........................//

for(dloop_t i=0; i<N/2; i++){
    #pragma HLS unroll
    result = AscendDescend(m[i], m[i+16]);
    n[i] = result.smaller; n[i+16] = result.bigger;
}

//.........................12th stage.........................//

for(dloop_t i=0; i<N/16; i++){
    #pragma HLS unroll
    SixteeninSmaller(n[16*i], n[16*i+1], n[16*i+2], n[16*i+3], n[16*i+4], n[16*i+5], n[16*i+6], n[16*i+7],
                 n[16*i+8], n[16*i+9], n[16*i+10], n[16*i+11], n[16*i+12], n[16*i+13], n[16*i+14], n[16*i+15],
                 o[16*i+0], o[16*i+1], o[16*i+2], o[16*i+3], o[16*i+4], o[16*i+5], o[16*i+6], o[16*i+7], o[16*i+8],
                 o[16*i+9], o[16*i+10], o[16*i+11], o[16*i+12], o[16*i+13], o[16*i+14], o[16*i+15]);
}

//.........................13th stage.........................//

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    EightinSmaller(o[8*i], o[8*i+1], o[8*i+2], o[8*i+3], o[8*i+4], o[8*i+5], o[8*i+6], o[8*i+7],
                p[8*i], p[8*i+1], p[8*i+2], p[8*i+3], p[8*i+4], p[8*i+5], p[8*i+6], p[8*i+7]);
}

//.........................14th stage.........................//

for(dloop_t i=0; i<N/4; i++){
    #pragma HLS unroll
    FourinSmaller(p[4*i], p[4*i+1], p[4*i+2], p[4*i+3], q[4*i], q[4*i+1], q[4*i+2], q[4*i+3]);
}

//.........................15th stage.........................//

for(dloop_t i=0; i<N/2; i++){
    #pragma HLS unroll
    result = AscendDescend(q[2*i], q[2*i+1]);
    out[2*i] = result.smaller; out[2*i+1] = result.bigger;
}

}
