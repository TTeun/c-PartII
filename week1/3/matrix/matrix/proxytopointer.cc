#include "matrix.ih"

Matrix::Proxy::operator double*() {
    return d_data;
}
