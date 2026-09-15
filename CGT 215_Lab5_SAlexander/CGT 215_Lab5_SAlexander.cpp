// Sophia Alexander
//CGT 215 Lab 5
//09/15/2026


//The goal of this assignment is to use a vector (a dynamic array) to map regular letters to thier output opposites. (Correct outputs in assignment)

#include <iostream>

using namespace std;

//this lets us use vectors going forward
#include <vector>

//makes the cypher global so it can be used in all functions including main. Static just ensures the value is kept even after its used in a function
static vector<char> cypher{ 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };

static string choice;

//we'll use this function to test the cypher and make sure everything is coming out right
void test() {

    // Prints the vector elements. Reads 'for # of values in cypher, print position in cypher' essentially.
    for (char initial_letter : cypher) {
        cout << initial_letter << "\n";
    }

    string test = "A"; //in ASCII A = 65. This declares the string 'test' as char A.
    //when a char is converted to an integer, it automatically becomes that letter's ASCII Value. In this case, 65.
    cout << endl << endl << test[0] - 65 << endl; //this should print out 0 because A is 65 when converted to an integer and 65-65=0
}

void Prompt() {

    //this function is meant to present the user with the prompt
    cout << "Welcome! Please enter the letter you would like to be converted: ";
    cin >> choice;

}

void Conversion() {

    //this function is meant to do the conversion from the entered letter and its intended output.
    int result;

    result = choice[0] - 65;

    //cout << result;
    //when testing, A should come out as 0

    cout << endl << endl << cypher[result] << endl << endl; //when testing, A should come out as V

}

int main()
{
    
    //test(); only uncomment when you want to test the code for troubleshooting

    Prompt();

    Conversion();

    
}


