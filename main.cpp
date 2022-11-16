#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include "Student.h"

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

bool operator < ( const Student &s1, const Student &s2)
{
    return s1.getName() < s2.getName();
}

int main() {
    vector<int> vInt{2, 5, 1, 4, 3, 7};
    vector<Student> vS{Student("Miguel", 2), Student("Ana", 5), Student("Joana", 5), Student("Zacarias", 5)};
    set<int, inverseOrderSetStruct> sInt;

    sInt.insert(5);
    sInt.insert(1);
    sInt.insert(4);
    sInt.insert(2);
    sInt.insert(3);
    sInt.insert(7);

    sort(vInt.begin(), vInt.end(), inverseOrder);
    sort(vS.begin(), vS.end());
    for (auto number : vInt)
    {
        cout << number << endl;
    }
    for (auto number : sInt)
    {
        cout << number << endl;
    }
    for (auto student : vS)
    {
        cout << student.getName() << ";" << student.getAge() << endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
