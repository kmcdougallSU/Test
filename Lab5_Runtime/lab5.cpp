#include <cstdio>
#include <ctime>
#include <cmath>
#include <vector>
#include "Sort.h"
#include "algorithm"
#include "iostream"

using namespace std;

void fortyThousandRunTime();
void eightyThousandRunTime();

int main() {
    fortyThousandRunTime();
    eightyThousandRunTime();
    return 0;
}

void fortyThousandRunTime() {
    vector<int> numbers(40000);
    cout << "\nSorting " << numbers.size() <<  " values..." << endl;

    // MERGE SORT
    // fill vector with random numbers
    generate(numbers.begin(), numbers.end(), rand);
    clock_t tMergeSort;
    tMergeSort = clock();
    mergesort(numbers.begin(), numbers.end());
    tMergeSort = clock() - tMergeSort;
    printf("It took me %lu clicks (%f seconds) for Merge Sort\n",
           tMergeSort, ((float) tMergeSort) / CLOCKS_PER_SEC);

    // HEAP SORT
    generate(numbers.begin(), numbers.end(), rand);
    clock_t tHeapSort;
    tHeapSort = clock();
    heapsort(numbers.begin(), numbers.end());
    tHeapSort = clock() - tHeapSort;
    printf("It took me %lu clicks (%f seconds) for Heap Sort\n",
           tHeapSort, ((float) tHeapSort) / CLOCKS_PER_SEC);

    // QUICK SORT
    generate(numbers.begin(), numbers.end(), rand);
    clock_t tQuickSort;
    tQuickSort = clock();
    quicksort(numbers.begin(), numbers.end());
    tQuickSort = clock() - tQuickSort;
    printf("It took me %lu clicks (%f seconds) for Quick Sort\n",
           tQuickSort, ((float) tQuickSort) / CLOCKS_PER_SEC);

    // STL INTRO SORT
    generate(numbers.begin(), numbers.end(), rand);
    clock_t tIntroSort;
    tIntroSort = clock();
    sort(numbers.begin(), numbers.end());
    tIntroSort = clock() - tIntroSort;
    printf("It took me %lu clicks (%f seconds) for Intro Sort\n",
           tIntroSort, ((float) tIntroSort) / CLOCKS_PER_SEC);

    // INSERTION SORT
    generate(numbers.begin(), numbers.end(), rand);
    clock_t tInsertionSort;
    tInsertionSort = clock();
    insertionSort(numbers.begin(), numbers.end());
    tInsertionSort = clock() - tInsertionSort;
    printf("It took me %lu clicks (%f seconds) for Insertion Sort\n",
           tInsertionSort, ((float) tInsertionSort) / CLOCKS_PER_SEC);

}

void eightyThousandRunTime() {
    vector<int> numbers(80000);
    cout << "\nSorting " << numbers.size() <<  " values..." << endl;

    // MERGE SORT
    // fill vector with random numbers
    generate(numbers.begin(), numbers.end(), rand);
    clock_t tMergeSort;
    tMergeSort = clock();
    mergesort(numbers.begin(), numbers.end());
    tMergeSort = clock() - tMergeSort;
    printf("It took me %lu clicks (%f seconds) for Merge Sort\n",
           tMergeSort, ((float) tMergeSort) / CLOCKS_PER_SEC);

    // HEAP SORT
    generate(numbers.begin(), numbers.end(), rand);
    clock_t tHeapSort;
    tHeapSort = clock();
    heapsort(numbers.begin(), numbers.end());
    tHeapSort = clock() - tHeapSort;
    printf("It took me %lu clicks (%f seconds) for Heap Sort\n",
           tHeapSort, ((float) tHeapSort) / CLOCKS_PER_SEC);

    // QUICK SORT
    generate(numbers.begin(), numbers.end(), rand);
    clock_t tQuickSort;
    tQuickSort = clock();
    quicksort(numbers.begin(), numbers.end());
    tQuickSort = clock() - tQuickSort;
    printf("It took me %lu clicks (%f seconds) for Quick Sort\n",
           tQuickSort, ((float) tQuickSort) / CLOCKS_PER_SEC);

    // STL INTRO SORT
    generate(numbers.begin(), numbers.end(), rand);
    clock_t tIntroSort;
    tIntroSort = clock();
    sort(numbers.begin(), numbers.end());
    tIntroSort = clock() - tIntroSort;
    printf("It took me %lu clicks (%f seconds) for Intro Sort\n",
           tIntroSort, ((float) tIntroSort) / CLOCKS_PER_SEC);

    // INSERTION SORT
    generate(numbers.begin(), numbers.end(), rand);
    clock_t tInsertionSort;
    tInsertionSort = clock();
    insertionSort(numbers.begin(), numbers.end());
    tInsertionSort = clock() - tInsertionSort;
    printf("It took me %lu clicks (%f seconds) for Insertion Sort\n",
           tInsertionSort, ((float) tInsertionSort) / CLOCKS_PER_SEC);
}
