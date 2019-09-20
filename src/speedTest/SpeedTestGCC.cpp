#include <windows.h>
#include <stdio.h>

const int LEN = 1000000;
const int REP_NUM = 100;

int main() {
	__int32 *v = new __int32[LEN];
	for (int i = 0; i < LEN; i++) {
		v[i] = i % 2 * 2 - 1;
	}

	LARGE_INTEGER qp1, qp2, freq;
	DWORD t, tc;
	double dqp, dtc, dt;
	int sum, i, rep;
	sum = 0;
	tc = GetTickCount();
	QueryPerformanceCounter(&qp1);
	for (rep = 0; rep < REP_NUM; rep++) {
		for (i = 0; i < LEN; i++) {
			if ((i >= 0) && (i < LEN)) {
				sum += v[i];
			}
		}
		++sum;
	}
	QueryPerformanceCounter(&qp2);
	dtc = GetTickCount() - tc;
	QueryPerformanceFrequency(&freq);
	dqp = double(qp2.QuadPart - qp1.QuadPart) * 1000 / freq.QuadPart;
	printf("GetTickCount:\t%d\t%d\t%.2f\n", LEN, sum, dtc);
	printf("QueryPerform:\t%d\t%d\t%.2f\n", LEN, sum, dqp);
	delete [] v;
}
//g++ -O3 -funroll-loops SpeedTest.cpp
//
//GetTickCount:   1000000         100      47.00
//QueryPerform:   1000000         100      44.99
//
//GetTickCount:   10000000        100     406.00
//QueryPerform:   10000000        100     414.30
