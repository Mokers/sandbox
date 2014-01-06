#include <iostream>
#include "vector.h"

using namespace std;

int main() {
    Vector v (1);
    v[0] = 8;
    cout << v.sum() << ":" << v[0] << endl;
    return 0;
}
