#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
int bool
unsigned int
float
double
char
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int age = 32;
    int numberOfStrings = 6;
    int optimalNumberOfGuitars = 2000;

    bool practicingGuitar = true;
    bool feedingCat = true;
    bool onABeach = false;

    unsigned int a = 1000;
    unsigned int cost = 23432;
    unsigned int amountRequired = 765980;

    float hardDriveSpace = 233.1f;
    float fuelEfficiency = 28.3f;
    float distance = 33.7f;

    double calories = 2276.30;
    double cableLength = 37.798;
    double profit = 32.9980;

    char playerOne = p;
    char startingPosition = a;
    char correctAnswer = c;

    
    ignoreUnused(number, age, numberOfStrings, optimalNumberOfGuitars, practicingGuitar, feedingCat, onABeach, a, cost, amountRequired, hardDriveSpace, fuelEfficiency, distance, calories, cableLength, profit, playerOne, startingPosition, correctAnswer); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

    int getCatFood(int cost, bool inStock = true);
{
    ignoreUnused(cost, inStock);
    return {};
}
/*
 2)
 */
    bool isGuitarStringInTune(float centAmount = 0.01f, char = note);
{
    ignoreUnused(centAmount, note);
    return{};
}
/*
 3)
 */
    float getPaycheckAmount(int hoursWorked, float wagePerHour = 20.5f);
{
    ignoreUnused(hoursWorked, wagePerHour);
    return{};
}
/*
 4)
 */
    bool isMicrophoneTurnedOn(bool phantomPower = true, float gainAmount = 15.2f, bool clippingTheInterface = false);
{
    ignoreUnused(phantomPower, gainAmount, clippingTheInterface);
    return{};
}
/*
 5)
 */
    int getNewShoes(char brandName, bool onSale = false, float totalCostWithTax = 99.01f);
{
    ignoreUnused(brandName, onSale, totalCostWithTax);
    return{};
}
/*
 6)
 */
    Float getTotalMonthlyProfit(double monthlyProfit, bool unexpectedExpenses = false);
{
    ignoreUnused(monthlyProfit, unexpectedExpenses);
    return{};
}
/*
 7)
 */
    unsigned int getFood(char foodGrade, bool isFresh = false, unsigned int amountAtStore = 65784);
{
    ignoreUnused(foodGrade, isFresh, amountAtStore);
    return{};
}
/*
 8)
 */
    int playMidi(char note, int velocity);
{
    ignoreUnused(note, velocity);
    return{};
}
/*
 9)
 */
    bool isSignalPassingThrough(bool statusLightOn = false, int volumeLevel, bool bypassOff = false);
{
    ignoreUnused(statusLightOn, volumeLevel, bypassOff);
    return{};
}
/*
 10)
 */
   int getCoffee(int cupSize, bool hotTemp = True);
{
    ignoreUnused(cupSize, hotTemp);
    return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto gotCatFood = getCatFood(32, true);
    //2)
    auto guitarStringInTune = isGuitarStringInTune(0.01f, a);
    //3)
    auto paycheckAmount = getPaycheckAmount(40, 20.5f);
    //4)
    auto MicrophoneOn = isMicrophoneTurnedOn(true, 15.2f, false);
    //5)
    auto newShoes = getNewShoes(Converse, false, 99.01f);
    //6)
    auto monthlyProfit = getMonthlyProfit(1765.012, false);
    //7)
    auto currentFood = getFood(a, true, 22);
    //8)
    auto midi = playMidi(a, 127);
    //9)
    auto signalpassing = isSignalPassingThrough(true, 100, true);
    //10)
    auto gotcoffee = getCoffee(3, true);
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
