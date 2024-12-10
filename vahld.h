#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::string;

#ifndef Extibl_h
#define Extibl_h

class Extibl {
public:
	int size = 0;

	void output() const;								//regular output
	void sort();										//quicksort
		void quickSort(int* arr, int low, int high);
		int partition(int* arr, int low, int high);
	void ext(int amount = 1);							//func itself
		int* arr{};
		int* copy(int* arr1, int* arr2, int size);		// эти функции преимущественно технические 
		void create(int length = 0);					// и преимущественно используются в коде функций
										
	void append(int num);								//добавляет в конец массива значение
	void extend(int length_nns,int* new_nums);			//увеличивает значение на массив значений добавляя их в конец
	void insert(int position, int number);				//вставляет число в середину массива, сдвигая все значения
	void pop(int index);								//удаляет число по указанному индексу
	void remove(int number);
};
#endif
