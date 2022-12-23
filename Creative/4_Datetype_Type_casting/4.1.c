// 4.1	WAP to Calculate Area and Circumference of circle(Area of Circle = PI*R2/Circumference of Circle=2*PI*R)
/*The formula to find the circle area is pi * radius * radius, where pi or π is the mathematical constant and radius is the radius of the circle. The value π is 3.14159 approximately.*/

int main()
{
    float radius, area,circumference;
    float pi = 3.14159;

    printf("Enter radius of circle :");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area of circle : %0.4f\n", area);

    // Circumference of Circle = 2 X PI x Radius
    circumference = 2*pi*radius;
        printf("circumference of circle : %0.4f\n", circumference);




    return 0;
}