// Object Oriented version
#include <stdio.h>
#include <math.h>

// Define a "Point" class
class Point {   
  public:
    double x;
    double y;
    // Define the radius routine *within* the object
    double r() {
       return sqrt(x * x + y * y);
    }
};


// Define a routine to calculate the radius

int main() {
  Point p[2]; // construct an array of two objects
  
  // Initialize the data
  p[0].x = 3.;
  p[0].y = 4.;
  p[1].x = 5.;
  p[1].y = 12.;

  // Loop over the points
  for (int i=0;i<2;i++) {
    // Implement the r() method of the object
    double rad = p[i].r();                
    printf("Radius %d = %f\n",i,rad);  // Print it out
  }
  
  return(0);
}

