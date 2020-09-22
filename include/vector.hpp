#ifndef VECHEADER
#define VECHEADER

template<typename T>
inline auto GetLength(const T& v) {
    return v.length();
}

template<int N>
class Vec {
    private:
        double data[N];
    public:
};

class vec {
    private:
        double* pData;
        int pLength;
    public:
        // Basic access operators
        inline int length() const { return pLength; }
        double& operator[](int pos);
        double operator[](int pos) const;
        double& operator()(int pos);

        // Definition of the default copy constructor and initialize with dimension
        vec();
        vec(const vec& otherVec);
        vec(const int& dim);
        ~vec();
        vec& operator=(const vec& otherVec);
        // TODO: Declaration of a vector from file, sparse or full
        
        // Definition of the given binary operations of sum and product by a scalar
        vec operator+(const vec& otherVec);
        vec operator-(const vec& otherVec);
        vec operator*(const double& a);
        vec operator/(const double& a);

        // Definition of the same operations for constant vectors as arguments
        vec operator+(const vec& otherVec) const;
        vec operator-(const vec& otherVec) const;
        vec operator*(const double& a) const;
        vec operator/(const double& a) const;

        // Holder norms and seminorms
        // TODO: Possibly add euclidian norms, associated to a scalar product
        double HoldNorm(const unsigned int& p);
        double HoldSemiNorm(const unsigned int& p); // useful for the M function
};

double HoldNorm(const vec& v, double p);
double HoldSemiNorm(const vec& v, double p);

#endif