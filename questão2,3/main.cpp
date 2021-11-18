#include <iostream>
#include <vector>
#include "Rectangle.h"
using namespace std;

const Rectangle &findMax(const vector<Rectangle> &arr)
{
    int maxIndex = 0;

    for (int i = 1; i < arr.size(); i++)
        if (arr[maxIndex] < arr[i])
            maxIndex = i;

    return arr[maxIndex];
}

ostream &operator<<(ostream &out, const Rectangle &rhs)
{
    rhs.read(out);
    return out;
}

int main()
{
    vector<Rectangle> arr;
    arr.push_back(Rectangle(10, 15));
    arr.push_back(Rectangle(45, 15));
    arr.push_back(Rectangle(30, 21));
    cout << findMax(arr);
}