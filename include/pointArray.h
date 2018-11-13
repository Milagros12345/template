#ifndef POINTARRAY_H
#define POINTARRAY_H
#include<point.h>
template<class U>
class pointArray
{
    public:
        pointArray();
        pointArray(const point<U> pts[],const int size);
        pointArray(const pointArray &p);
        ~pointArray();
        void push(const point<U> &p);
        void inserta(const U pos, const point<U> &p);
        void remov(const U pos);
    private:
        int size;
        point<U> *points;
        void resize(int nv);
};

#endif // POINTARRAY_H
