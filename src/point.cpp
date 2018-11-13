#include "point.h"
#include<iostream>
using namespace std;
template<class T>
point<T>::point(const point &p){
    x=p.x;
    y=p.y;
}
template<class T >
void point<T>::offset(const T a,const T b){
    T x=a;
    T y=b;
}
template<class T>
T point<T>::getx(){
    return x;}
template<class T>
T point<T>::gety(){
    return y;
}

