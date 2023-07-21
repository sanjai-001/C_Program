#include<stdio.h>
#define pi 3.14
int areaofcircle(r)
{
    int area=3.14*(r)*(r);
    return area;
}
int periofcircle(r)
{
    int perimeter=2*3.14*(r);
    return perimeter;
}
int main()
{
    int r,area,perimeter;
    printf("\n enter the radius:");
    scanf("%d",&r);
    area = areaofcircle(r);
    printf("\n area= %d\n",area);
    perimeter=periofcircle(r);
    printf("\n perimeter= %d\n",perimeter);
    return 0;

}
