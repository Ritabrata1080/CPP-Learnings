/**
 Created by Ritabrata, 30/08/2024
*/


#include<iostream>
#include<string>
using namespace std; 

int main() {
    /**
    Different ways to declare a string
    */

    // Normal string initialization with no space tolerance
    string str;
    std:: cout << "Enter string : ";
    cin >> str;
    cout << "String is : " << str << endl;

    // If we want to initialize a string of 5 size with all same characters
    string strAllSameCharacters(5, 'r');
    cout << strAllSameCharacters << endl;

    // To input a string of words having space in between
    string strWithSpacesInBetween;
    getline(cin, strWithSpacesInBetween);  // `cin >>` will take only the first argument in a sentence
    cout << strWithSpacesInBetween << endl;

    /**
    Concatenating two strings
    */

    string s1 = "fam", s2 = "ily";
    // Append method will change the first string by appending the second string to it
    s1.append(s2);
    cout << s1 << endl;
    // Another way to concatenate two strings is to use the '+' operator
    s1 = "fam";
    string appendedString;
    appendedString = s1 + s2;
    cout << appendedString << endl;\

    /**
    Accessing characters of a string is just as accessing characters in a character array.
    In c++, string is basically stored as a character array
    */
    cout << appendedString[4] << endl;

    /**
    Clearing a string content using .clear() method
    */
    string strContentToClear = "Hi, I am a developer";
    strContentToClear.clear();
    cout << "Cleared string is : " << strContentToClear << endl;

    /**
    Comparing two strings using the .compare().
    If it returns positive, the string getting compared is bigger lexicographically
    else if its negative, the string getting compared is smaller lexicographically
    else the strings are equal
    */

    string firstStrToCompare = "abcd";
    string secondStrToCompare = "xyz";
    cout << s1.compare(s2) << endl;

    // Checking equality of strings 
    if(s1.compare(s2) == 0) {
        cout << "Strings are equal" << endl;
    }
    else {
        cout << "String are not equal" << endl;
    }

    // Checking if a string is empty
    string isEmptyString = "abcd";
    if(isEmptyString.empty()){
        cout << "String is empty" << endl;
    }
    else {
        cout << "String is not empty" << endl;
    }


    /*
        Restricted deletion inside a string : Deleting certain consecutive characters 
        in a string, from a certain index
    */
    string strErase = "I am a coder";
    strErase.erase(3, 3); // .erase(deletefrom, deleteNumberOfCharacters)
    //strErase.erase(4); // If 2nd param is not mentioned, it will erase all chars starting from pos 4
    cout << strErase << endl;

    /*
        Trimming a string
    */
    cout << "Hi" << endl;
    string paddedStringInBothEnds = "Coding is  a passion  ";
    size_t firstNonSpaceChar = paddedStringInBothEnds.find_first_not_of(' ');
    if (firstNonSpaceChar == std::string::npos){
        cout << paddedStringInBothEnds << endl;
    }
    else{
        size_t lastNonSpaceChar = paddedStringInBothEnds.find_last_not_of(' ');
        cout << paddedStringInBothEnds.substr(firstNonSpaceChar, (lastNonSpaceChar - firstNonSpaceChar + 1)) << endl;
    }
    return 0;
}
