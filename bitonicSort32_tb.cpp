#include "bitonicSort32.h"
#include <iostream>
using namespace std;

int main()
{
    din_t in[N];
    din_t out[N];

    srand((unsigned)time(0));
    cout << "The input array is: "<<endl;
    for(int h=0; h<N; h++)
        {
                in[h] = rand() % 100;
                cout << in[h] <<" ";
        }
    cout<<endl;
    bitonicSort32(in, out);

    cout << "The sorted array is: "<<endl;
    for(int i=0; i<N; i++){
	cout << out[i] << " ";
	}
	cout << endl;
    return 0;
}
