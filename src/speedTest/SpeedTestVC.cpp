#pragma comment(lib, "Winmm")

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
	timeBeginPeriod(1);
	sum = 0;
	t = timeGetTime();
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
	dt = timeGetTime() - t;
	QueryPerformanceFrequency(&freq);
	dqp = double(qp2.QuadPart - qp1.QuadPart) * 1000 / freq.QuadPart;
	timeEndPeriod(1);
	printf("timeGetTime:\t%d\t%d\t%.2f\n", LEN, sum, dt);
	printf("GetTickCount:\t%d\t%d\t%.2f\n", LEN, sum, dtc);
	printf("QueryPerform:\t%d\t%d\t%.2f\n", LEN, sum, dqp);
	delete [] v;
}

//timeGetTime:     1000000        100      67.00
//GetTickCount:    1000000        100      62.00
//QueryPerform:    1000000        100      67.03

//timeGetTime:    10000000        100     666.00
//GetTickCount:   10000000        100     671.00
//QueryPerform:   10000000        100     665.70