#include <stdio.h>
#include <math.h>
#include<string.h>
#include<windows.h>
#define PI 3.142
#define lld long long int

void triangle() {
	int s, a, b, c, area;
	
    printf("Enter the values of a, b and c \n");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of a triangle = %d \n", area);
}
 
void circle() {
	float radius, area;
	
    printf("Enter the radius of a circle \n");
    scanf("%f", &radius);
    area = PI * pow(radius, 2);
    printf("Area of a circle = %5.2f\n", area);
}

void trapezium() {
	float a, b, h;
    float area;
 
    printf("Enter the value for two bases & height of the trapezium: \n");
    scanf("%f%f%f", &a, &b, &h);
    area = 0.5 * (a + b) * h ;
    printf("Area of the trapezium is: %.3f", area);
}

void rhombus() {
	float diagonal1, diagonal2;
    float area;
 
    printf("Enter diagonals of the given rhombus: \n ");
    scanf("%f%f", &diagonal1, &diagonal2);
    area = 0.5 * diagonal1 * diagonal2;
    printf("Area of rhombus is: %.3f \n", area);
}

void parallelogram() {
	float base, altitude;
    float area;
 
    printf("Enter base and altitude of the given Parallelogram: \n ");
    scanf("%f%f", &base, &altitude);
    area = base * altitude;
    printf("Area of Parallelogram is: %.3f\n", area);
}

void cube() {
	float side, surfacearea, volume;
 
    printf("Enter the length of a side \n");
    scanf("%f", &side);
    surfacearea = 6.0 * side * side;
    volume = pow(side, 3);
    printf("Surface area = %6.2f and Volume = %6.2f \n", surfacearea,
     volume);
}

void cylinder() {
	float radius, height;
    float surface_area, volume;
 
    printf("Enter  value for  radius and height of a cylinder : \n");
    scanf("%f%f", &radius, &height);
    surface_area = 2 * (22 / 7) * radius * (radius + height);
    volume = (22 / 7) * radius * radius * height;
    printf("Surface area of cylinder is: %.3f", surface_area);
    printf("\n Volume of cylinder is : %.3f", volume);
}

void cuboid() {
	float width, length, height;
    float surfacearea, volume;
 
    printf("Enter value of width, length & height of the cuboids:\n");
    scanf("%f%f%f", &width, &length, &height);
    surfacearea = 2 *(width * length + length * height +
    height * width);
    volume = width * length * height;
    printf("Surface area of cuboids is: %.3f", surfacearea);
    printf("\n Volume of cuboids is : %.3f", volume);
}

void cone() {
	float radius, height;
    float surface_area, volume;
 
    printf("Enter value of radius and height of a cone :\n ");
    scanf("%f%f", &radius, &height);
    surface_area = (22 / 7) * radius * (radius + sqrt(radius * radius + height * height));
    volume = (1.0/3) * (22 / 7) * radius * radius * height;
    printf("Surface area of cone is: %.3f", surface_area);
    printf("\n Volume of cone is : %.3f", volume);
}

void sphere() {
	float radius;
    float surface_area, volume;
 
    printf("Enter radius of the sphere : \n");
    scanf("%f", &radius);
    surface_area =  4 * (22/7) * radius * radius;
    volume = (4.0/3) * (22/7) * radius * radius * radius;
    printf("Surface area of sphere is: %.3f", surface_area);
    printf("\n Volume of sphere is : %.3f", volume);
}

void rtriangle() {
	float height, width;
    float area;
 
    printf("Enter height and width of the given triangle:\n ");
    scanf("%f%f", &height, &width);
    area = 0.5 * height * width;
    printf("Area of right angled triangle is: %.3f\n", area);
}

void choice() {
	
	printf("\n\nSelect the below options to calculate the area or volume of the mentioned figure: \n\n");
	printf("Enter...\n\n");
	printf("... 1 to calculate the area of a triangle\n");
	printf("... 2 to calculate the area of a circle\n");
	printf("... 3 to calculate the area of a trapezium\n");
	printf("... 4 to calculate the area of a rhombus\n");
	printf("... 5 to calculate the area of a parallelogram\n");
	printf("... 6 to calculate the surface area and volume of a cube\n");
	printf("... 7 to calculate the surface area and volume of a cylinder\n");
	printf("... 8 to calculate the surface area and volume of a cuboid\n");
	printf("... 9 to calculate the surface area and volume of a cone\n");
	printf("... 10 to calculate the surface area and volume of a sphere\n");
	printf("... 11 to calculate the area of a right angle triangle\n");
	
	int n;
	printf("\n\nEnter your choice: ");
	scanf("%d",&n);
	switch(n){
		case 1:
			triangle();
			break;
		case 2:
			circle();
			break;
		case 3:
			trapezium();
			break;
		case 4:
			rhombus();
			break;
		case 5:
			parallelogram();
			break;
		case 6:
			cube();
			break;
		case 7:
			cylinder();
			break;
		case 8:
			cuboid();
			break;
		case 9:
			cone();
			break;
		case 10:
			sphere();
			break;
		case 11:
			rtriangle();
			break;
		default: printf("\n\nYou have entered the invalid choice...");
			sleep(2);							
	}

}
 int main()
{
	printf("\n\n");
	int i = 0,kk;
	char cc;
	char c[] = "............................Welcome to area calculator...............................";
	while(c[i] != '\0') {
		printf("%c", c[i]);
		i++;
	}
	printf("");
	while(1) {
		choice();
		printf("\n..............................................................................\n\n");
		printf("..............................................................................\n");
		printf("\n\nDo you want to calculate more (Y/N): ");
		scanf("%d",&kk);
		scanf("%c",&cc);
		if(cc == 'N' || cc == 'n')
		{
			break;
		}
	}
}
