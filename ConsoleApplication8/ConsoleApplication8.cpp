#include <iostream>
using namespace std;

//Завдання 1
//int maxNumber(int* a, int* b) {
//    if (*a > *b)
//        return *a;
//    else
//        return *b;
//}

//Завдання 2
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}

//Завдання 3
//void arrSumMult(const int* const arr, int size, int* sumP, int* multP) {
//    int sum = 0;
//    int mult = 1;
//
//    for (int i = 0; i < size; ++i) {
//        sum += *(arr + i);
//        mult *= *(arr + i);
//    }
//
//    *sumP = sum;
//    *multP = mult;
//}

//Завдання 4
//void countElements(int* arr, int size, int* negative, int* positive, int* zeros) {
//    *negative = 0;
//    *positive = 0;
//    *zeros = 0;
//
//    for (int i = 0; i < size; ++i) {
//        if (*(arr + i) < 0)
//            ++(*negative);
//        else if (*(arr + i) > 0)
//            ++(*positive);
//        else
//            ++(*zeros);
//    }
//}

//Завдання 5
//int* findSubarray(int* A, int sizeA, int* B, int sizeB) {
//    if (sizeB > sizeA || sizeB <= 0)
//        return nullptr;
//
//    for (int i = 0; i <= sizeA - sizeB; ++i) {
//        int j = 0;
//
//        while (j < sizeB && *(A + i + j) == *(B + j)) {
//            ++j;
//        }
//
//        if (j == sizeB)
//            return A + i;
//    }
//
//    return nullptr;
//}

//void printArr(int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << *(arr + i) << ' ';
//    }
//    cout << '\n';
//}

int main() {
    //Завдання 1
    //int a = 10, b = 12;

    //cout << "Max = " << maxNumber(&a, &b) << '\n';

    //Завдання 2
    //cout << "Before: " << a << ' ' << b << '\n';
    //swap(&a, &b);
    //cout << "After: " << a << ' ' << b << '\n';

    //Завдання 3
    //int arr[] = { 2, 4, 10 };
    //int size = 3;
    //int sum, mult;

    //arrSumMult(arr, size, &sum, &mult);

    //cout << "Array: ";
    //printArr(arr, size);
    //cout << "Sum = " << sum << '\n';
    //cout << "Product = " << mult << '\n';

    //Завдання 4
    //int arr2[] = { -3, 0, 5, -1, 8, 0 };
    //int negative, positive, zeros;

    //countElements(arr2, 6, &negative, &positive, &zeros);

    //cout << "Negative = " << negative << '\n';
    //cout << "Positive = " << positive << '\n';
    //cout << "Zeros = " << zeros << '\n';

    //Завдання 5
    //int A[] = { 1, 2, 3, 4, 5, 6 };
    //int B[] = { 3, 4, 5 };

    //int* result = findSubarray(A, 6, B, 3);

    //if (result != nullptr) {
    //    cout << "Subarray found: ";
    //    printArr(result, 3);
    //}
    //else {
    //    cout << "Subarray not found\n";
    //}

    //return 0;
}