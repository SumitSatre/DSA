#include <iostream>
using namespace std;

template <class T>
class Vector{
    public:
    T* arr;
    int size;

    Vector(int m){
        size = m;
        arr = new T[size];
    }

    T dotproduct(Vector &a);
};

template <class T>
T Vector <T> :: dotproduct(Vector &a){
    T d;
    for(int i= 0  ; i<size ; i++){
        d += ( this->arr[i] * a.arr[i] ) ;
    }
    return d;
}

int main(){
    Vector <float>v1(3);
    v1.arr[0] = 0.3;
    v1.arr[1] = 4.1;
    v1.arr[2] = 6.2;

    Vector <float>v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 2.1;
    v2.arr[2] = 0.5;

    cout<<"The dot product is "<<v2.dotproduct(v1)<<endl;
    return 0;
}