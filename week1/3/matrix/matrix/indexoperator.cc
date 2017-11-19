#include "matrix.ih"

Matrix::Proxy Matrix::operator[](size_t const rowIdx){
  return d_data + d_nCols * rowIdx;
}
