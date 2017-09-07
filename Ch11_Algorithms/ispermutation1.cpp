// Chapter 11 Algorithms -- is_permutation
#include "algostuff.hpp"
using namespace std;


bool bothEvenOrOdd(int elem1, int elem2)
{
    return elem1 % 2 == elem2 % 2;
}


int main()
{
    vector<int> coll1{1,1,2,3,4,5,6,7,8,9};
    list<int> coll2{1,9,8,7,6,5,4,3,2,1};
    deque<int> coll3{11,12,13,19,18,17,16,15,14,11};

    PRINT_ELEMENTS(coll1, "coll1:  ");
    PRINT_ELEMENTS(coll2, "coll2:  ");
    PRINT_ELEMENTS(coll3, "coll3:  ");

    // check whether both collections have equal elements in any order
    if(is_permutation(coll1.cbegin(), coll1.cend(),
                      coll2.cbegin())){
        cout << "coll1 and coll2 have equal elements" << endl;
    }
    else{
        cout << "coll1 and coll2 don't have equal elements" << endl;
    }

    // check for corresponding number of even and odd elements
    if(is_permutation(coll1.cbegin(), coll1.cend(),
                      coll3.cbegin(),
                      bothEvenOrOdd)){
        cout << "number of even and odd elements match" << endl;
    }
}
