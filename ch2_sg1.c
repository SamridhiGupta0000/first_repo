#include <stdio.h>
#include <math.h>
int main()
{
    float s1,s2,s3,s,ar;
    printf("Enter the three sides of triangle:");
    scanf("%f%f%f",&s1,&s2,&s3);
    s=(s1+s2+s3)/2;
    ar=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("\n Area of the triangle = %f",ar);
    return 0;
}
