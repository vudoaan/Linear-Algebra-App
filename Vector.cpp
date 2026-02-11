#include "Vector.h"

Vector::Vector(size_t size) : vec(size) {}
Vector Vector::operator- () const { // Unary - operator (turns vectors negative)
    Vector negVec(vec.size());
    for (int i = 0; i < vec.size(); i++)
        negVec.vec[i] = -vec[i];
    return negVec;
}

// Member Functions
Vector& Vector::operator+= (const Vector& rhs) {
    if (this->vec.size() != rhs.vec.size()) { throw MathError("Vector dimensions must match", this->vec.size(), rhs.vec.size()); }
}
Vector& Vector::operator-= (const Vector& rhs) {
    if (this->vec.size() != rhs.vec.size()) { throw MathError("Vector dimensions must match", this->vec.size(), rhs.vec.size()); }
}
Vector& Vector::operator*= (double scalar) {}
Vector& Vector::operator/= (double scalar) {}

// Non-member Functions
Vector operator+ (const Vector& vec1, const Vector& vec2) {}
Vector operator- (const Vector& vec1, const Vector& vec2) { // Binary - operator

}
double operator* (const Vector& vec1, const Vector& vec2) { // Dot product
    
}
Vector operator* (const Vector& vec1, double scalar) {}
Vector operator* (double scalar, const Vector& vec1) {}
Vector operator/ (const Vector& vec1, double scalar) {}
Vector operator/ (double scalar, const Vector& vec1) {}

// Exceptions

Vector::MathError::MathError(std::string e, int dim1, int dim2) : errorMsg(e) {}

const char* Vector::MathError::what() const noexcept { return; }