
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <GL/glu.h> 
#define WIDTH 80
#define HEIGHT 24

int main() {
  float a, b, c; // angles for rotation
  float r1, r2; // radii of donut

  r1 = 5; // inner radius
  r2 = 10; // outer radius

  for (;;) { // infinite loop for animation
    system("clear"); // clear screen

    for (int y = 0; y < HEIGHT; y++) {
      for (int x = 0; x < WIDTH; x++) {
        a = atan2(y - HEIGHT / 2, x - WIDTH / 2);
        b = a + sin(2 * a) * 0.1; // add wobble
        c = sin(b) * r2 + cos(b) * r1;

        float distance = sqrt(pow(x - WIDTH / 2, 2) + pow(y - HEIGHT / 2, 2));
        // draw character based on distance from center

        if (distance > r1 - 1 && distance < r2 + 1) {
          printf("@");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }

    a += 0.01; // increment rotation angle
    b += 0.02;

    usleep(1); // delay for animation
  }

  return 0;
}
