#include <iostream>
#include "common.h"

class Num{

};

using google::protobuf::internal::VersionString;

int main() {
    int version = 1001079;
    std::cout << VersionString(version) << std::endl;
    return 0;
}
