#ifndef TEST_CLASS
#define TEST_CLASS

class cl_test_class{
    private:
        int a;
        int b;
        int c;

    public:
      cl_test_class(const int a = 0, const int b = 0, const int c = 0);
      void print() const;
};

#endif