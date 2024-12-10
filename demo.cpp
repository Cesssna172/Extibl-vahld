//it is only demonstration of possibilities of this library

#include "vahld.h"

int main() {
    Extibl vec;
    int l;
    cout << "Enter length of array\n";
    cin >> l;
    vec.ext(l);
    for (int i = 0; i < vec.size; i++) {
        vec.arr[i] = i;
    }

    system("cls");

    cout << "It is your array\n\n";

    for (int i = 0; i < vec.size; i++) {
        cout << vec.arr[i] << " ";
    }
    
    cout << "\n";
    int a = 0;
    cin >> a;

    system("cls");

    int array[] = { 1,2,3,4,5 };

    cout << "1) append function \n It works like vec.append(num)\n\nenter your number\n";
    cin >> a;
    vec.append(a);
    cout << "\n\n";
    cout << "now array looks like this\n";
    vec.output();
    cin >> a;

    system("cls");
    cout << "2)extend function\nit adds a new array into array\n Works like vec.extend(length,array)\n it will add five new digits";
    vec.extend(5, array);
    cin >> a;
    cout << "\n\n";
    cout << "now array looks like this\n";
    vec.output();
    cin >> a;

    system("cls");
    cout << "3) insert function\nit adds a number in exact position\nvec.insert(position,number)\nit will enter 1 in th 5th pos";
    vec.insert(5, 1);
    cin >> a;
    cout << "\n\now array looks like this\n";
    vec.output();
    cin >> a;

    system("cls");
    cout << "pop function deletes number inside of array\nnow it will delete 5th number of list";
    vec.pop(5);
    cin >> a;

    system("cls");
    cout << "also there is technical extension which will add or delete any amount of numbers, but you can use it";
    cout << "\n\nWill make search functions, exceptional delete,exceptional replace, etc\n\n\ncssn.";
}   
