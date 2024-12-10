#include "vahld.h"


//beginning of ext
int* Extibl::copy(int* arr1, int* arr2, int size)
{
    for (int i = 0; i < size; i++) {                            //копирование массива при помощи цикла
        arr2[i] = arr1[i];
    }
    return arr2;
}

void Extibl::create(int length)
{
    Extibl::size = length;                                      //создание дополнительного массива для копирования

    arr = new int[length] { {0} };                              //освобождение памяти
}

void Extibl::ext(int amount) {

    size += amount;                                         //увеличивает число, обозначающие размер
    //не является фактическим размером
    int* new_arr = new int[size] { {0}};                    //освобождение памяти под новый массив
    copy(arr, new_arr, size - amount);                      //копирование массива

    delete[] arr;
    arr = new_arr;
}
//eof ext

void Extibl::append(int num)
{                                                               //увеличивает массив на один
    ext(1);                                                     // и добавляет значение в конец
    arr[size - 1] = num;
}

void Extibl::extend(int length_nns, int* new_nums)
{
    ext(length_nns);
    for (int i = 0; i < length_nns; i++) {                      //добавляет значения в конец
        arr[size - (length_nns - i)] = new_nums[i];             // добавление от конца в начало второго 
        //добавляемого массива
    }
}

//функции работающие с серединой массива

void Extibl::insert(int position, int number)
{
    int* tempArr;
    tempArr = new int[size];                                    //создание нового массива

    copy(arr, tempArr, size);

    ext(1);                                                     //увеличивает массив на один элемент
    arr[position] = number;

    for (int i = position + 1; i < size; i++) {                 //начинает с середины и идет в конец
        arr[i] = tempArr[i - 1];                                // Обратите внимание на i - 1 
    }                                                           // это корректирует позицию индекса
    delete[] tempArr;
}

void Extibl::pop(int index)
{
    if (index<0 || index>size - 1) {                            //проверка на существование индекса
        cout << "invalid index";
        return;
    }

    int* tempArr;
    tempArr = new int[size];                                    //создание нового массива

    copy(arr, tempArr, size);

    ext(-1);

    for (int i = 0; i < index; i++) {
        arr[i] = tempArr[i];
    } for (int i = index + 1; i < size + 1; i++) {
        arr[i - 1] = tempArr[i];
    }
}

// вывод
void Extibl::output() const
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
