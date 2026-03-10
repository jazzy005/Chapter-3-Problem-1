/*Chapter 3 Problem 1 Distance Per Tank of Gas
Jasmine Beale
3/10/26
Requirements:
 1. A cookie recipe makes 48 cookies.
 2. The recipe uses:
     - 1.5 cups of sugar
     - 1 cup of butter
     - 2.75 cups of flour
 3. Ask the user how many cookies they want to make.
 4. Calculate the required ingredients based on the number of cookies.
 5. Display the adjusted ingredient amounts.
*/
#include <iostream>
using namespace std;
int main()
{
  // The ingredient for the recipe
    const int Batch_of_cookies = 48;
    const float sugar_per_48 = 1.5;
    const float butter_per_48 = 1.0;
    const float flour_per_48 = 2.75;
 // Defining the users inputs and calculates amounts
    int desired_cookies;
    float total_suger, total_butter, total_flour;
 // The start of the program
    printf("Hello, Welcome to the Ingredient Adjuster program for yout baking needs<3.\n");
    printf("This program was made to calculate the necessary ingredients for a specific number of cookies.\n\n");
 // Asking for the number of cookis
    printf("Please enter the amount of cookies that you would like to make. ");
    cin >> desired_cookies;

 // The calculats for the desired to original cookies
    float factor = (float)desired_cookies / Batch_of_cookies;
    //cout << "So you want to make " << (float)desired_cookies << " of cookies?\n";
   // cout << "If not please close the program and retry.\n";
    printf("Ok,thank you I will get those numbers for you <3.\n");
   
 // The calculats for the new ingredient amounts
    total_suger = sugar_per_48 * factor;
    total_butter= butter_per_48 * factor;
    total_flour= flour_per_48 * factor;
    // Displaying the results
    printf("\nTo make the desired amount of cookies you want, you will need:\n\n");
    cout << "You will need " << total_suger << " cups of suger." << endl;
    cout << "You will need " << total_butter << " cups of butter." << endl;
    cout << "You will need " << total_flour << " cups of flour." << endl;
}

