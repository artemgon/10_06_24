#include "libs.h" 

template<class T>
T* randomArr(int size)
{
	T* new_array = new T[size];
	for (int i = 0; i < size; i++) {
		new_array[i] = rand() % 10;
	}
	return new_array;
}

template<class T>
void printArr(T* array, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
template<class T>
bool checkFunc(T* array, int size, T elem)
{
	bool c_var = true;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == elem)
		{
			c_var = false;
			break;
		}
	}
	return c_var;
}

template<class T>
T* joinFunc(T* A, T* B, int M, int N)
{
	int size, k = 0, l;
	bool fc_var, sc_var;
	if (M < N || M == N)
	{
		size = M;
	}
	else
	{
		size = N;
	}
	T* j_array = new T[size];
	for (int i = 0; i < size; i++)
	{
		j_array[i] = -1;
	}
	for (int i = 0; i < M; i++)
	{
		fc_var = checkFunc(B, N, A[i]);
		sc_var = checkFunc(j_array, size, A[i]);
		if (fc_var && sc_var)
		{
			j_array[k] = A[i];
			k++;
		}
		else
			continue;
	}
	l = k;
	k = 0;
	for (int i = l; i < N; i++)
	{
		fc_var = checkFunc(A, M, B[i]);
		sc_var = checkFunc(j_array, size, B[i]);
		if (fc_var && sc_var)
		{
			j_array[l] = B[i];
			l++;
		}
		else
			continue;
	}
	return j_array;
}
