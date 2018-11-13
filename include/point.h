#ifndef POINT_H
#define POINT_H
template <class T>
class point
{

    public:
        poInt(){T x=0;T y=0;}
        point(const point &p);
        point(const T a, const T b);
        void offset(const T a, const T b);
        T getx();
        T gety();
    private:
         T x,y;
};

#endif // POINT_H
