#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool inverseOrder(int &i1, int &i2)
{
    return i1 > i2;
}

struct inverseOrderSetStruct
{
    bool operator () (const int &i1, const int & i2) const
    {
        return i1 > i2;
    }
};

int main() {
    vector<int> vInt{2, 5, 1, 4, 3, 7};
    set<int, inverseOrderSetStruct> sInt;

    sInt.insert(5);
    sInt.insert(1);
    sInt.insert(4);
    sInt.insert(2);
    sInt.insert(3);
    sInt.insert(7);
    sort(vInt.begin(), vInt.end(), inverseOrder);
    for (auto number : vInt)
    {
        cout << number << endl;
    }
    for (auto number : sInt)
    {
        cout << number << endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
