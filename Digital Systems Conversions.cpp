#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class numericalsystems {

public:


    void IN_Introduction();
    int Convertbinarytodecimal(long long);
    int Convertdecimaltobinary(long long);
    int Convertoctaltodecimal(long long);
    int Convertdecimaltooctal(long long);
    int Convertbinarytooctal(long long);
    int Convertoctaltobinary(long long);


};


void ::numericalsystems::IN_Introduction()
{

    int ok;

    cout << " Enter what kind of numerical system you would like to know about (defined): " << endl;
    cin >> ok;
    cout << endl;

    if (ok == 1) {


        cout << " 1) Decimal numbers:";
        cout << " Decimal numbers are used to represent numbers that are smaller than 1 unit." << endl;
        cout << " Decimals are written to the right of the units place separated by a period." << endl;



        cout << endl;

    }

    else if (ok == 2) {

        cout << " 2) Binary number: ";
        cout << "In mathematics and digital electronics, a binary number is a number expressed in the base-2 numeral system or " << endl;
        cout << "binary numeral system,";
        cout << "which uses only two symbols: typically 0 (zero) and 1 (one)." << endl;
        cout << endl;
        cout << " Each digit is referred to as a bit, or binary digit. Because of its straightforward implementation " << endl;
        cout << " in digital electronic circuitry using logic gates, the binary system " << endl;
        cout << " is used by almost all modern computers and computer-based devices, as a preferred system of use," << endl;
        cout << " over various other human techniques of communication, because of the simplicity of the language. " << endl;
        cout << endl;


        cout << endl;
    }

    else if (ok == 3) {

        cout << "3) The octal numeral system, or oct for short, is the base-8 number system, and uses the digits 0 to 7." << endl;
        cout << "   Octal numerals can be made from binary numerals " << endl;
        cout << "   by grouping consecutive binary digits into groups of three (starting from the right). " << endl;

    }

    else {

        cout << " You are out of the specific range !!" << endl;

    }

}





int Convertbinarytodecimal(long long binaryNumber)
{

    int decimalNumber = 0, i = 0, remainder;

    while (binaryNumber != 0) {

        remainder = binaryNumber % 10;

        decimalNumber += remainder * pow(2, i);
        ++i;

        binaryNumber /= 10;

    }

    return decimalNumber;

}


int Convertdecimaltobinary(long long decimalNumber1)
{
    long long binaryNumber1 = 0;
    int i = 1, remainder;

    while (decimalNumber1 != 0)
    {
        remainder = decimalNumber1 % 2;

        binaryNumber1 += remainder * i;
        i *= 10;

        decimalNumber1 /= 2;


    }

    return binaryNumber1;
}


int Convertoctaltodecimal(long long octalNumber2)
{

    long long decimalNumber2 = 0;
    int i = 0, remainder;

    while (octalNumber2 != 0)
    {

        remainder = octalNumber2 % 10;

        decimalNumber2 += remainder * pow(8, i);
        ++i;

        octalNumber2 /= 10;

    }

    return decimalNumber2;
}



int Convertdecimaltooctal(long long decimalNumber3)
{

    long long octalNumber3 = 0;
    int i = 1, remainder;

    while (decimalNumber3 != 0)
    {

        remainder = decimalNumber3 % 8;

        octalNumber3 += remainder * i;

        i *= 10;

        decimalNumber3 /= 8;

    }

    return octalNumber3;

}


int Convertbinarytooctal(long long binaryNumber4)
{

    int decimalNumber4 = 0;
    int octalNumber4 = 0;
    int remainder, i = 0;

    while (binaryNumber4 != 0)
    {



        remainder = binaryNumber4 % 10;

        decimalNumber4 += remainder * pow(2, i);

        ++i;

        binaryNumber4 /= 10;

    }


    i = 1;

    while (decimalNumber4 != 0)
    {


        remainder = decimalNumber4 % 8;

        octalNumber4 += remainder * i;

        i *= 10;

        decimalNumber4 /= 8;

    }


    return octalNumber4;
}



int Convertoctaltobinary(long long octalNumber5)
{

    int remainder;
    int decimalNumber5 = 0, i = 0;
    int binaryNumber = 0;

    while (octalNumber5 != 0)
    {

        remainder = octalNumber5 % 10;

        decimalNumber5 += remainder * pow(8, i);

        ++i;

        octalNumber5 /= 10;
    }

    i = 1;

    while (decimalNumber5 != 0)
    {

        remainder = decimalNumber5 % 2;

        binaryNumber += remainder * i;

        i *= 10;

        decimalNumber5 /= 2;
    }

    return binaryNumber;
}



int main() {

    numericalsystems object;

    int choice;
    string option;
    cout << " Welcome to the program written by Homam AL safadi " << endl;
    cout << endl;

    do {

        cout << " This program is a template for converting various digital systems from one to another: " << endl;
        cout << " 1.Binary  2.Decimal  3.Octal  " << endl;
        cout << " What is the kind of numerical system that you want to convert ? , choose one of the following option: " << endl;
        cout << " 1.    Define or give a little idea about each digital system. " << endl;
        cout << " 2.    Convert from binary number to decimal. " << endl;
        cout << " 3.    Convert from decimal number to binary. " << endl;
        cout << " 4.    Convert from octal number to decimal. " << endl;
        cout << " 5.    Convert from decimal number to octal. " << endl;
        cout << " 6.    Convert from binary number to octal.  " << endl;
        cout << " 7.    Convert from octal number to binary.  " << endl;
        cout << " 8.    Quit" << endl;


        cin >> choice;

        switch (choice)
        {


        case 1:

            cout << "Define or give a little idea about each digital system." << endl;

            object.IN_Introduction();
            break;


        case 2:


            cout << " Convert from binary number digital system to decimal number digital system: " << endl;

            long long int binaryNumber;

            cout << "Enter a binary number: ";
            cin >> binaryNumber;

            cout << binaryNumber << " in binary = " << Convertbinarytodecimal(binaryNumber) << " in decimal" << endl;


            break;


        case 3:

            cout << " Convert from decimal number digital system to binary number digital system: " << endl;

            long long int decimalNumber1;

            cout << " Enter a decimal: " << endl;
            cin >> decimalNumber1;

            cout << decimalNumber1 << " in decimal = " << Convertdecimaltobinary(decimalNumber1) << " in binary " << endl;


            break;



        case 4:

            cout << " Convert from octal number digital system to decimal number digital system: " << endl;

            int octalNumber2;

            cout << endl;

            cout << " Enter an octal number: " << endl;
            cin >> octalNumber2;

            cout << octalNumber2 << " in octal = " << Convertoctaltodecimal(octalNumber2) << " in decimal " << endl;

            break;


        case 5:

            cout << " Convert from decimal number digital system to octal number digital system: " << endl;

            long long decimalNumber3;

            cout << endl;

            cout << " Enter a decimal number: " << endl;
            cin >> decimalNumber3;

            cout << decimalNumber3 << " in decimal = " << Convertdecimaltooctal(decimalNumber3) << " in octal " << endl;


            break;


        case 6:

            cout << " Convert from binary number digital system to octal number digital system: " << endl;
            cout << endl;

            int binaryNumber4;

            cout << " Enter a binary number: " << endl;
            cin >> binaryNumber4;

            cout << binaryNumber4 << " in binary = " << Convertbinarytooctal(binaryNumber4) << " in octal " << endl;

            break;


        case 7:

            cout << " Convert from octal number digital system to binary number digital system: " << endl;
            cout << endl;

            int octalNumber5;

            cout << " Enter an octal number: " << endl;
            cin >> octalNumber5;

            cout << octalNumber5 << " in octal = " << Convertoctaltobinary(octalNumber5) << " in decimal " << endl;

            break;




        default:

            cout << " You are out of the specific range !! , you are allowed you enter a number from 1 to 6 only . " << endl;


        }

        cout << endl;
        cout << " would you like to continue the progress in the the program ? " << endl;
        cin >> option;
    } while (option == "Yes" || option == "yes");


    system("pause");
    return 0;
}