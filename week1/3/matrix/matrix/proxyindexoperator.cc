#include "matrix.ih"

double &Matrix::Proxy::operator[](size_t const idx) {
    return d_data[idx];
}
