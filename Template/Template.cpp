#include <iostream>

template<class T>
T Max(T arr[],size_t size) {
    
    T max = arr[0];
    for (int ii = 0; ii < size;ii++) {
        if(max < arr[ii]){
            max = arr[ii];
        }
    }
    return max;
}

template<class T>
void sort(T arr[], size_t size) {
    for (int ii = size-1; ii>0; ii--) {
        for (int jj = 0; jj <ii; jj++) {
            if (arr[jj] > arr[jj + 1]) std::swap(arr[jj], arr[jj + 1]);
        }
    }
}

template<class T>
void replace(T arr[], int index, T elem) {
    arr[index] = elem;
}

template<class T>
void FindBin(T arr[],size_t size,T elem) {
    int r =size ; 
    int l = 0; 
    int mid;

    while (l < r) {
        mid = (r + l) / 2;
        if (arr[mid] > elem) r = mid;
        else l = mid + 1;
    }
    r--;
    if (arr[r] == elem) std::cout << "index of elem: " << r << std::endl;
    else std::cout << "no elem in this arr"<<std::endl;
}

int main()
{
    int IntArr[] = { 32,675,898,132,-9,65,-12 };
    int size = sizeof(IntArr) / sizeof(int);
    sort<int>(IntArr, size);
    for (int ii = 0; ii < size; ii++) {
        std::cout << IntArr[ii] << " ";
    }
    std::cout << std::endl;
    FindBin<int>(IntArr, size, 675);
    std::cout << Max<int>(IntArr, size) << std::endl;
    replace<int>(IntArr, 1,23);
    for (int ii = 0; ii < size; ii++) {
        std::cout << IntArr[ii] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    char CharArr[] = { 'a','f','dad','y','z' };
    int sizechar = sizeof(CharArr) / sizeof(char);
    sort<char>(CharArr, sizechar);
    for (int ii = 0; ii < sizechar; ii++) {
        std::cout << CharArr[ii] << " ";
    }
    std::cout << std::endl;
    FindBin<char>(CharArr, sizechar, 'y');
    std::cout << Max<char>(CharArr, sizechar) << std::endl;
    replace<char>(CharArr, 3, 'h');
    for (int ii = 0; ii < sizechar; ii++) {
        std::cout << CharArr[ii] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::string StrArr[] = { "fasf","fasfasd","hrthk","fsfs","fasefe" };
    int sizestr = sizeof(StrArr) / sizeof(std::string);
    sort<std::string>(StrArr, sizestr);
    for (int ii = 0; ii < sizestr; ii++) {
        std::cout << StrArr[ii] << " ";
    }
    std::cout << std::endl;
    FindBin<std::string>(StrArr, sizestr, "fasfasd");
    std::cout << Max<std::string>(StrArr, sizestr) << std::endl;
    replace<std::string>(StrArr, 4, "hello");
    for (int ii = 0; ii < sizestr; ii++) {
        std::cout << StrArr[ii] << " ";
    }
    std::cout << std::endl;

}