#include <stdio.h>

int main() {

    // Step 1: Declare variables
    float radius = 7.65; //declare a float for radius
    double pi = 3.14; //declare a double for the constant pi 

    // Calculate circumference
    double circumference = 2 * pi * radius; //using the above variables calculate for circumference

    // Step 2: Demonstrate type conversion
    int int_circumference = (int)circumference; //Store the floating point circumference as a integer in a new varible

    // Step 3: Use scientific notation
    double plancks_constant = 6.626e-34; //Planck's constant in scientific notation as a double

    // Step 4: Output formatting
    printf("Radius of the circle: %.2f\n", radius); // Radius with 2 decimal places
    printf("Circumference (floating-point): %.3f\n", circumference); // Floating-point circumference with 3 decimal places
    printf("Circumference (integer): %d\n", int_circumference); // Integer-converted circumference
    printf("Planck's constant: %e\n", plancks_constant); // Planck's constant in scientific notation

    // Step 5: Comments
    // Calculate the circumference of a circle using a radius and display it in both floating-point and integer forms

    return 0;
}
