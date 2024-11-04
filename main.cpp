#include "funcs.h"

int main()
{
	srand(time(NULL));
	int M, N, size;
	cout << "Size of 1-st array:";
	cin >> M;
	cout << "Size of 2-nd array:";
	cin >> N;
	int* A = randomArr<int>(M);
	int* B = randomArr<int>(N);
	cout << "1-st array: " << endl;
	printArr<int>(A, M);
	cout << "2-nd array: " << endl;
	printArr<int>(B, N);
	int* C = joinFunc<int>(A, B, M, N);
	if (M > N || M == N)
	{
		size = M;
	}
	else if (N > M)
	{
		size = N;
	}
	printArr<int>(C, size);
	delete[] A;
	delete[] B;
	delete[] C;
	return 0;
}