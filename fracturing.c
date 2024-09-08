








#include <stdio.h>
#include <math.h>
#define PI 3.14159

double askForUserInput();
double DistanceFormula();
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

double askForUserInput(){
    double value = 0.0;
    printf("please enter your value\n");
    scanf("%lf",&value);
    return value;
}

double DistanceFormula(){


    double x1 = askForUserInput();
    double x2= askForUserInput();
    double y1= askForUserInput();
    double y2= askForUserInput();




    double Distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 Entered: x1 = %.3f ; y1 = %.3f \n", x1, y1);
    printf("Point #2 entered: x2 = %.3f ; y2 = %.3f \n", x2, y2);

    return Distance;


}



double calculateDistance (){
   
    double x1=0.0;
    double x2=0.0;
    double y1=0.0;
    double y2=0.0;



    double Distance = DistanceFormula();


    printf("The distance between the two points is %.3f\n", Distance);


    return Distance;}






double calculatePerimeter(){
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
  
   

    double Diameter = DistanceFormula();

    double Perimeter = PI * Diameter;


    printf("The perimeter of the city encompassed by your request is %.3f \n", Perimeter);

    double difficulty2 = 3.6489;
    return difficulty2;

}



double calculateArea(){
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;

 

    double Diameter = DistanceFormula();
    double Radius = Diameter/2;

    double Area = PI * pow(Radius, 2);



    printf("The area of the city encompassed by your request is %.3f \n", Area);

    double difficulty3 = 3.201;

    return difficulty3;

}

double calculateWidth(){
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;

  

    double Diameter = DistanceFormula();
    double Width = Diameter;

  
    printf("The width of the city encompassed by your request is %.3f\n ", Width);

    double difficulty4 = 2.205;

    return difficulty4;
}


double calculateHeight(){
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;

  

    double Diameter = DistanceFormula();
    double Height = Diameter;

    

    printf("The height of the city encompassed by your request is %.3f\n ", Height);

    double difficulty5 = 1.224;

    return difficulty5;

}





















