#include <vector>

class Vector {
    public:
        Vector(size_t size = 1);
        Vector operator- () const; // Unary - operator (turns vectors negative)
        Vector& operator+= (const Vector& vec);
        Vector& operator-= (const Vector& vec);
        Vector& operator*= (double scalar);
        Vector& operator/= (double scalar);
    private:
        std::vector<int> vector;
};

//Non-member functions

Vector operator+ (const Vector& vec1, const Vector& vec2);
Vector operator- (const Vector& vect2); // Binary - operator
Vector operator* (const Vector& vec1, const Vector& vec2); // Dot product
Vector operator* (const Vector& vec1, double scalar);
Vector operator* (double scalar, const Vector& vec1);
Vector operator/ (const Vector& vec1, double scalar);
Vector operator/ (double scalar, const Vector& vec1);