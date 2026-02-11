#include <string>
#include <vector>
#include <exception>

class Vector {
    public:
        Vector(size_t size = 1);
        Vector operator- () const; // Unary - operator (turns vectors negative)
        Vector& operator+= (const Vector& vec);
        Vector& operator-= (const Vector& vec);
        Vector& operator*= (double scalar);
        Vector& operator/= (double scalar);
        std::vector<double> vec;

        class MathError: public std::exception { // Inherits from exception class
            public:
                MathError(std::string, int dim1, int dim2);
                virtual const char* what() const noexcept override; // Function is already there

            private:
                std::string errorMsg;
                int dim1, dim2;
        };
};

//Non-member functions

Vector operator+ (const Vector& vec1, const Vector& vec2);
Vector operator- (const Vector& vect2); // Binary - operator
double operator* (const Vector& vec1, const Vector& vec2); // Dot product
Vector operator* (const Vector& vec1, double scalar);
Vector operator* (double scalar, const Vector& vec1);
Vector operator/ (const Vector& vec1, double scalar);
Vector operator/ (double scalar, const Vector& vec1);