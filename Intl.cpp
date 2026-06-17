#include <algorithm>
#include <vector>

#include "Intl.h"
#include "Student_info.h"

using namespace std;

istream& Intl::read(istream& in) {
    Core::read_common(in);
    in >> intl_exam;
    read_hw(in, homework);
    return in;
}

double Intl::grade() const {
    return min(Core::grade(), intl_exam);
}