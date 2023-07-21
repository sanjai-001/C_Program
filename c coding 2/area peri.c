#include<stdio.h>
void area_peri(float, float*, float*);
int main()
{
    float radius, area, perimeter;
    printf("Enter radius : ");
    scanf("%f", &radius);
    area_peri(radius, &area, &perimeter);
    printf("\nArea = %0.2f\n", area);
    printf("Perimeter = %0.2f\n", perimeter);
    return 0;
}
void area_peri(float r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}
