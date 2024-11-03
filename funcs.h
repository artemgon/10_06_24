#include "libs.h" 

template<class T>
T* joinFunc(T* p_array_1, T* p_array_2, int M, int N)
{
	T* j_array = new T[M + N];
	for (int i = 0, j = 0; i < M + N; i++)
	{
		if (i < M)
		{
			j_array[i] = p_array_1[i];
		}
		else
		{
			j_array[i] = p_array_2[j];
			j++;
		}
	}
	return j_array;
}

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