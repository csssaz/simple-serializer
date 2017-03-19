#ifndef _COMMON_H_
#define _COMMON_H_

#include <falconn/lsh_nn_table.h>

#include <vector>

namespace ir {

using std::vector;

typedef falconn::DenseVector<float> Point;

void normalize(vector<Point> *dataset) {
    for (auto &x: *dataset) {
        x.normalize();
    }
}

};

#endif
