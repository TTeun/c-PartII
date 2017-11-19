#include "main.ih"

int main(int argc, char **argv)
{
    cout << "3 x 3 matrix filled with zeros\n";
    Matrix mat(3, 3);
    show(cout, mat) << '\n';

    cout << "4 x 4 identity matrix\n";
    show(cout, Matrix::identity(4)) << '\n';

    cout << "Changing the 3 x 3 matrix into a 3 x 4 matrix filled with 1..12"
                                                                        "\n";
    mat = Matrix{
                    { 1,  2,  3},
                    { 4,  5,  6},
                    { 7,  8,  9},
                    {10, 11, 12},
                };

    show(cout, mat) << '\n';
    memcpy(mat[2], mat[1], mat.nCols() * sizeof(double));

    cout << "Showing row 2 of matrix\n";
    double *d_data = mat[2];
    mat[2][1] = 100;
    for (size_t col = 0; col != mat.nCols(); ++col, ++d_data)
      cout << *d_data << " ";
    cout << '\n';



    auto b = 1010101_bits;
}
