#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "DataStruct.h"

using max::DataStruct;
using max::cmpDataStruct;

int main() {
    std::vector<DataStruct> data;
    std::copy(std::istream_iterator<DataStruct>(std::cin),
              std::istream_iterator<DataStruct>(),
              std::back_inserter(data));
    std::sort(data.begin(), data.end(), cmpDataStruct);
    std::copy(data.begin(), data.end(),
              std::ostream_iterator<DataStruct>(std::cout, "\n"));
    return 0;
}
