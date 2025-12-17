// Structured version of code
#include <stdio.h>
#include <math.h>

// Define a "Point" data structure
struct Point {   
    double x;
    double y;
};

// Define a routine to calculate the radius
double r(struct Point p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

int main() {
  struct Point p[2]; // construct an array of two points
  // Initialize the data
  p[0].x = 3.;
  p[0].y = 4.;
  p[1].x = 5.;
  p[1].y = 12.;

  // Loop over the points
  for (int i=0;i<2;i++) {
    // Call the radius routine with each point
    double rad = r(p[i]);             
    printf("Radius %d = %f\n",i,rad);  // Print it out
  }
  
  return(0);
}

