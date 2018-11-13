#include "pointArray.h"
#include"point.h";
template<class U>
pointArray<U>::pointArray()
{
    this->size=0;
    this->points=new point<U>[size];
}
template<class U>
pointArray<U>::pointArray(const point<U> pts[],const int size ){
    this->size=size;
    this->points=new point<U>[size];
    for(int i=0;i<size;i++)
        points[i]=pts[i];
}
template<class U>
pointArray<U>::pointArray(const pointArray &p){
    this->size=p.size;
    this->points =new point<U>[p.size];
    for(int i=0;i<p.size;i++)
        points[i]=p.points[i];
}
template<class U>
void pointArray<U>::resize(int nv){
     point<U> *pts=new point<U>[nv];
     int mi=(nv>size)?size:nv;
     for(int i=0;i<mi;i++)
        pts[i]=points[i];
    delete[]points;
    size=nv;
    points=pts;
}
template <class U>
void pointArray<U>::push(const point<U>& p){
    resize(size+1);
    points[size-1]=p;
}
template<class U>
void pointArray<U>::inserta(const U pos, const point<U> &p){
    resize(size +1);
    for(int i=size-1;i>pos;i--)
        points[i]=points[i-1];
    points[pos]=p;
}
template<class U>
void pointArray<U>::remov(const U pos){
    if(pos>=0 && pos<size)
        for(int i=pos;i<size-2;i++){
            points[i]=points[i+1];
        }
        resize(size-1);
    }
template<class U>
pointArray<U>::~pointArray()
{
    delete [] points;
    //dtor
}
