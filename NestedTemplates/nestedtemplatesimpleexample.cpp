#include <iostream>



template <typename T>
struct Point2D {
  T x;
  T y;

  Point2D(T a, T b) {
    x = a;
    y = b;
  }
};

template <typename T>
struct Point3D {
  T x;
  T y;
  T z;

  Point3D(T a, T b, T c) {
    x = a;
    y = b;
    z = c;
  }
};


/*                                                                                                                                                                                          
This was some example from internet                                                                                                                                                         
template<typename K, typename V, template<typename Key, typename Value, typename ...> typename C>                                                                                           
struct GenericMap                                                                                                                                                                           
{                                                                                                                                                                                           
    C<K, V> key;                                                                                                                                                                            
};                                                                                                                                                                                          
*/


template<typename T, template<typename U, typename ...> typename Point>
struct Line
{

  // There was no default constructor. The program won't compile if these                                                                                                                   
  // fields are not explicitly initialized. Need to go in detail of it.                                                                                                                     
  Point<T> startpoint = {0.0,0.0};
  Point<T> endpoint = {0.0,0.0};

  Line(Point<T> a, Point<T> b) {
    startpoint = a;
    endpoint = b;
  }
};

int main() {

  Point2D p = Point2D(2.3,3.1);
  Point2D q = Point2D(5.04,6.2);


  Line<double, Point2D> l(p, q);


  std::cout << l.startpoint.x << " " << l.startpoint.y << " " << l.endpoint.x << " " << l.endpoint.y << "\n";

  return 0;
}
