#include <math.h>
#include <stdio.h>

int main(){
float val = 37.777779;

float rounded_down = floorf(val * 100) / 100;   /* Result: 37.77 */
float nearest = roundf(val * 100) / 100;  /* Result: 37.78 */
float rounded_up = ceilf(val * 100) / 100;      /* Result: 37.78 */

printf("%.1f\n%.1f\n%.1f", rounded_down, nearest, rounded_up);
}