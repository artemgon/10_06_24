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
	int size, k = 0;
	bool check_var;
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
		for (int j = 0; j < N; j++)
		{
			if (A[i] == B[j])
			{
				check_var = checkFunc(j_array, k, A[i]);
				if (check_var)
				{
					j_array[k] = A[i];
					k++;
				}
				else
					break;
			}
		}
	}
	return j_array;
}
