#include <iostream>
#include <vector>
#include "BigInteger.h"

using namespace std;

int main() {

BigInteger bi = BigInteger("18446744073709551627");

cout << bi.ToString() << endl;

}