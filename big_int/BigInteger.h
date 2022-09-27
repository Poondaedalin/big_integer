#ifndef BIGINTEGER_H
#define BIGINTEGER_H

using namespace std;

#include <string>
#include <vector>


class BigInteger {

    public:
        BigInteger::BigInteger(string newint) {
        
            for (size_t i = 0; i < newint.size(); i++) {
                vec_int.push_back(newint.at(i));
            }
            
        }

        string BigInteger::ToString() {
            string temp = "";
            for (size_t i = 0; i < vec_int.size(); i++) {
                temp.append(to_string(vec_int.at(i)));
            }
            return temp;
        }

    private:
        vector<int> vec_int;

};

#endif