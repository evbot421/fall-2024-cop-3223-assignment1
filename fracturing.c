//********************************************************
// Fracturing.c
// Author: Evan Amaya
// Date: 9/8/2024
// Class: COP 3223, Professor Parra
// Purpose: The purpose of this program is to collect values
// of points from the user. The program then outputs certain 
// measurements obtained from the values of the points, as well
// as repeating the values of the points back to the user.
// Algorithm: This program assumes the distance measured acts as 
// the diameter of a circle. From that, the program first calculates
// distance using the distance formula. Assuming this distance acts
// as diameter of the circle, the program calculates area perimeter 
// by using perimeter equlas pi times the diameter, area by using 
// area equals pi times radius squared, and both width and height 
// equal the diameter or distance between points.
//
// Input: This program requires the user to input 2 x values and
// 2 y values 5 times. In total the user will need to provide 20 
// values, 10 x and 10 y.
// Output: (to the command line) Measurements obtained from the
// values of the points obtained from the user. Those measurements 
// are distance, perimeter, area, height, and width. Lastly, the 
// program repeats the points back to the user.
// This program has only been modified by me with some help from chatgpt.
// However I mostly used chatgpt to figure out how to use commands in the
// terminal, as well as slight debug help to fix some rounding problems. 
// I completed rough drafts on the main repository, but not much modification
// history exists on this program. The only true modification was last minute 
// fixing of my code to match rubric guidlines.
// //******************************************************** 



// Including my libraries that are needed for this program
#include <stdio.h>
#include <math.h>
#define PI 3.14159


// Establishing Prototypes
double askForUserInput();
double DistanceFormula();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();


// Main function
int main(int argc, char** arg){
    
    //Calling all of my required functions for the assignment. 
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}


// Helper Function for collecting user Input
double askForUserInput(){
   
    double value = 0.0;
    printf("please enter your x/y value\n");
    scanf("%lf",&value); //collecting user input
    
    return value;
}

// Helper Function for calculating distances to be called in other functions
double DistanceFormula(){


    double x1 = askForUserInput(); // calling User input function to get points
    double x2= askForUserInput();
    double y1= askForUserInput();
    double y2= askForUserInput();



    double Distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Distance formula
    printf("Point #1 Entered: x1 = %.3f ; y1 = %.3f \n", x1, y1); // required output that 
    printf("Point #2 entered: x2 = %.3f ; y2 = %.3f \n", x2, y2); // will be used in each function

    
    return Distance;


}


// Function for calulating and outputting distance
double calculateDistance (){
   
    
    double x1=0.0; 
    double x2=0.0;
    double y1=0.0;
    double y2=0.0;



    double Distance = DistanceFormula(); // Running distance formula function

    // Required output for distance
    printf("The distance between the two points is %.3f\n", Distance);


    return Distance;}


// Function for calculating and outputtin Perimeter
double calculatePerimeter(){
    
    
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
  
   

    double Diameter = DistanceFormula(); // Running distance formula for diameter

    double Perimeter = PI * Diameter; // Perimeter formula for circle

    // Requried output for perimeter
    printf("The perimeter of the city encompassed by your request is %.3f \n", Perimeter);

    
    // Returing the double for how difficult this function was to create
    double difficulty2 = 3.6489;
    return difficulty2;

}



// Function for calculating and outputting Area
double calculateArea(){
   
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;

 

    double Diameter = DistanceFormula(); // Getting Diameter from Distanceformula
    double Radius = Diameter/2; // formula for radius, radius is half of diameter

    double Area = PI * pow(Radius, 2); // formula for Area of a cirlce 


    // Required output for Area
    printf("The area of the city encompassed by your request is %.3f \n", Area);


    // Returning a value matching the difficulty of this function
    double difficulty3 = 3.201;

    return difficulty3;

}



// Function for calculating and outputting Width
double calculateWidth(){
    
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;

  

    double Diameter = DistanceFormula(); //Running distance formula function
    double Width = Diameter; // Width = Diameter of a circle

    // Required output for width
    printf("The width of the city encompassed by your request is %.3f\n ", Width);

    // Returning value matching difficulty of this functon
    double difficulty4 = 2.205;

    return difficulty4;
}



// Function for calculating and outputting Height 
double calculateHeight(){
    double x1 = 0.0; 
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;

  

    double Diameter = DistanceFormula(); // Running the distance function
    double Height = Diameter; // Formula for height, same as diameter 

    
    // Required output for height 
    printf("The height of the city encompassed by your request is %.3f\n ", Height);

   
    // Returning the value that matches difficulty of the fucntion
    double difficulty5 = 1.224;

    return difficulty5;

}





















