#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char** arg){
    
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}



double calculateDistance (){
   
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;


    printf("please enter your x values\n");
    scanf("%lf %lf", &x1, &x2);
    printf("please enter your y values\n");
    scanf("%lf %lf", &y1, &y2);

    double Distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 Entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The distance between the two points is %lf\n", Distance);


    return Distance;}






double calculatePerimeter(){
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
  

    double Diameter = calculateDistance();

    double Perimeter = PI * Diameter;

    printf("Point #1 Entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);

    printf("The perimeter of the city encompassed by your request is %lf \n", Perimeter);

    double difficulty2 = 3.6489;
    return difficulty2;

}



double calculateArea(){
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;


    double Diameter = calculateDistance();
    double Radius = Diameter/2;

    double Area = PI * pow(Radius, 2);

    printf("Point #1 Entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);

    printf("The area of the city encompassed by your request is %lf \n", Area);

    double difficulty3 = 3.201;

    return difficulty3;

}

double calculateWidth(){
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;


    double Diameter = calculateDistance();
    double Width = Diameter;

    printf("Point #1 Entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);

    printf("The width of the city encompassed by your request is %lf\n ", Width);

    double difficulty4 = 2.205;

    return difficulty4;
}


double calculateHeight(){
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;


    double Diameter = calculateDistance();
    double Height = Diameter;

    printf("Point #1 Entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);

    printf("The height of the city encompassed by your request is %lf\n ", Height);

    double difficulty5 = 1.224;

    return difficulty5;

}










