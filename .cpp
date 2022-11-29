/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
This is the original code which was submitted in IT-145 foundation in application development

import java.util.Scanner;

public class Paint2 {

    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        double wallHeight = 0.0;
        double wallWidth = 0.0;
        double wallArea = 0.0;
        double gallonsPaintNeeded = 0.0;
        final double squareFeetPerGallons = 350.0;
        
        
        
        do {
            System.out.print("Enter wall height (feet): ");
            while (!scnr.hasNextDouble()) {
                
             System.out.printf(" That is not a valid number");
                scnr.next();
            }
            wallHeight = scnr.nextDouble();
        } while (wallHeight < 1);

        
        		
        do{
        	System.out.println("Enter wall width (feet): ");
        	while(!scnr.hasNextDouble()){
       
        System.out.printf("That is not a valid number.");
        scnr.next();
            }
            wallWidth = scnr.nextDouble();
        } while (wallWidth < 1);

        

        // Calculate and output wall area
        wallArea = wallHeight * wallWidth;
        System.out.println("Wall area: " + wallArea + "square feet");
        

        // Calculate and output the amount of paint (in gallons) needed to paint the wall
        
        gallonsPaintNeeded = (wallArea/squareFeetPerGallons);
        
        String cal = String.format("Paint needed: %.17f gallons" , gallonsPaintNeeded);
        System.out.println(cal);
        
        
        // Calculate and output number of cans needed to paint the wall.
        double cansNeeded1 = gallonsPaintNeeded;
        System.out.println("Cans needed: " + Math.ceil(cansNeeded1) + " can(s)");
        
        

    }
}*/




/*The enhanced code with more complexity starts here*/
#include <iostream> // hearder file that allows input and output objects
#include <cmath> // math functions
using namespace std; // use names for objects and variables from the standard library

int main() { 
    double wallHeight = 0.0; // variable that stored in double - stores floating point numbers with decimals
    double wallWidth = 0.0;
    double wallArea = 0.0;
    double gallonsPaintNeeded = 0.0;
    double squareFeetPerGallons = 350.0;
    int selectedPaintType; // variable stored in int - stores numbers without decimals
    double cansNeeded = 0.0;


    
    //object cout to display the following message and accept that input into wall height
    cout << "Welcome to the Paint store.\nToday we will help you find the following:\n1. How much paint do you need?\n2. How many gallons of paint you would need?\n3. How much would it cost for the paint?\nSo let's get started\n\nFirst, What is the height of your wall in feet? "<<endl;
    cin >> wallHeight;
    if (wallHeight < 1){ // if the wall height is less than 1 output the following message
        cout<<"\nPlease enter a valid wall height"<<endl;
    }
    else{ // move to the next step. Another object that accepts the wall width
        cout<<"\n\nSecond, What is the width of your wall in feet?"<<endl;
        cin>>wallWidth;
        if(wallWidth < 1){ // display the following message when the user does not meet the requirements
            cout<<"\nPlease enter a valid wall width in feet?"<<endl;
        }
        else{ 
            wallArea = wallHeight*wallWidth; // calculate the wall area
            cout <<"\n\nThe area of your wall is " << wallArea << " square feet."; // display the wall area

        
            gallonsPaintNeeded = (wallArea/squareFeetPerGallons); // calculate the gallons needed to paint the wall
            
            cout <<"\n\nYou will need " << gallonsPaintNeeded<< " gallons of paint."; // display the gallons needed to paint
            
            cansNeeded = ceil(gallonsPaintNeeded); // The ceil() function computes the smallest integer that is greater than or equal to x.
            cout<<"\n\nThe number of cans needed to paint your wall is " <<cansNeeded<<" can(s)."<<endl;  // display the cans needed
            
        }
    }
    // allow the user to select the type of paint the user likes
    cout<<"\n\nNext, to find the cost of the paint, we will need to know what kind of paint would you like? \nThe list will go from the cheapest paint to the most expensice. Here is the list:\n1. Flat paint\n2. Matt paint\n3. Eggshell paint\n4. Satin paint\n5. Semi-gloss paint\n6. High-gloss paint \nSelect one of the option. You can select by just entering the number"<<endl;
    cin >> selectedPaintType; // accept value
    if (selectedPaintType<1 || selectedPaintType>6){ // if the paint type is selected
        cout<<"Please select a valid number"<<endl;
            cout<<"Here is the list:\n1. Flat paint\n2. Matt paint\n3. Eggshell paint\n4. Satin paint\n5. Semi-gloss paint\n6. High-gloss paint \nSelect one of the option. You can select by just entering the number"<<endl;
            cin>>selectedPaintType;
            if(selectedPaintType == 1){
        double price = cansNeeded*25;
        cout<<"You have selected Flat paint. Each can of paint costs $25.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
        if(selectedPaintType == 2){
        double price = cansNeeded*28;
        cout<<"You have selected Matt paint. Each can of paint costs $28.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
        if(selectedPaintType == 3){
        double price = cansNeeded*30;
        cout<<"You have selected Eggshell paint. Each can of paint costs $30.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
        if(selectedPaintType == 4){
        double price = cansNeeded*32;
        cout<<"You have selected Satin paint. Each can of paint costs $32.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
        if(selectedPaintType == 5){
        double price = cansNeeded*40;
        cout<<"You have selected Semi-gloss paint. Each can of paint costs $40.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
        if(selectedPaintType == 6){
        double price = cansNeeded*60;
        cout<<"You have selected High-gloss paint. Each can of paint costs $60.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
            
            
        
        
    }
    else{
        if(selectedPaintType == 1){
        double price = cansNeeded*25;
        cout<<"You have selected Flat paint. Each can of paint costs $25.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
        if(selectedPaintType == 2){
        double price = cansNeeded*28;
        cout<<"You have selected Matt paint. Each can of paint costs $28.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
        if(selectedPaintType == 3){
        double price = cansNeeded*30;
        cout<<"You have selected Eggshell paint. Each can of paint costs $30.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
        if(selectedPaintType == 4){
        double price = cansNeeded*32;
        cout<<"You have selected Satin paint. Each can of paint costs $32.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
        if(selectedPaintType == 5){
        double price = cansNeeded*40;
        cout<<"You have selected Semi-gloss paint. Each can of paint costs $40.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
        if(selectedPaintType == 6){
        double price = cansNeeded*60;
        cout<<"You have selected High-gloss paint. Each can of paint costs $60.\nYour total would be $"<< price<<". Thank you for using paint store.";
    }
    }
    


}


