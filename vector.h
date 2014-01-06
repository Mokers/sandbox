class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int getSize();
        double sum();
    private:
        int size;
        double* elements;
};
