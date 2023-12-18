#include <iostream>
#include <string>
#include<conio.h>
#include <limits>  // for numeric_limits

using namespace std;

int main()
{
    cout << "Hello\n";
    cout << "In case of problem\n";
    cout << "Error 01: Bot\n";
    cout << "Error 02: Not having health salah\n";

    cout << "be barname sabte iran khodro bara sabtename mashin khosh amadid\n\n\n" << std::endl;

    int x = 0;
    int y = 5;
    int s = 0;

    cout << "Answer the following question so that we can make sure that you are not a bot\n\n";
    cout << "*Find the product of two numbers = x * y ?\nx = 0 \nand \ny = 5\n";
    cout << "Answer :";
    cin >> s;

    if (s == 0)
    {
        bool answer = false;
        int k = 0;

        while (!answer) {
            string firstName, lastName, Evidence, place, mon;
            int phone = 0, age = 0, dr = 0, c = 0;

            cout << "**welcome**\n";
            cout << "name :";
            cin >> firstName;

            cout << "last name :";
            cin >> lastName;

            cout << "phone number:";
            cin >> phone;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "age:";
            cin >> age;

            cout << "Evidence:";
            cin >> Evidence;

            cout << "place of residence:";
            cin >> place;

            cout << "Enter 1 to register yes and 0 to register no\n";
            cout << "driving license : ";
            cin >> dr;

            cout << "how many children do you have ?";
            cin >> c;

            cout << "Check your information, if it is correct, enter true, otherwise, enter false\n\n";
            cout << "name: " << firstName << "\n";
            cout << "last name: " << lastName << "\n";
            cout << "Evidence: " << Evidence << "\n";
            cout << "place of residence: " << place << "\n";
            cout << "phone: " << phone << "\n";
            cout << "age: " << age << "\n";
            cout << "\n";
            k = dr + c;

            cout << "Answer :";
            cin >> mon;

            if (mon == "true") {
                answer = true;
            }
        }
        int card_number = 0, cvv2 = 0, expiration_date = 0, second_password = 0; // پرداخت
        string ravesh_pardakh, kash, Second_password_request, Comment;//نظر سنجی;
        string apshen, asport;// ezafe kardan apshen
        char choise = 0;
        int R = 1540650000, T = 680000000, Y = 372475000, U = 318628000, I = 355193000, O = 259000000, P = 323803000, S = 260214000;
        int D = 343555000, F = 383030000;
        if (k >= 4)
        {
            cout << "**welcome** to group A\n\n";//تقسیم بندی سهمیه ای از ای تا سی برا خرید ماشین
            cout << "Group A Farads are allowed to buy all our tires on demand\n\n";

            cout << "Title          	  Factory price   	      market price \n*-*Peugeot 2008 	       0	        2, 100, 000, 000\n";
            cout << "*R*Photon diesel      1, 540, 650, 000  	1, 430, 000, 000\n";
            cout << "*T*Automatic tare V4    680, 000, 000      905, 000, 000\n*Y*Soren Plus 	    372, 475, 000        610, 000, 000\n*U*Peugeot 207i  	    318, 628, 000	       605, 000, 000\n*I*Samand Soren 	    355, 193, 000	       600, 000, 000\n";
            cout << "*O*206 Type 3  	   259, 000, 000	       535, 000, 000\n";
            cout << "*P*207i Tu3	   323, 803, 000	       530, 000, 000\n";
            cout << "*S*PARS Peugeot       260, 214, 000	       515, 000, 000\n";
            cout << "*D*Rana Plus 	   343, 555, 000	       515, 000, 000\n";
            cout << "*F*PARS Peugeot Plus	   383, 030, 000	       385, 000, 000\n";
            cout << "Enter the car you want to buy between ** (- means non-existent):";
            cin >> choise;
            switch (choise)
            {
            case 'R':
                cout << "Selected car and payment price\n";
                cout << "Photon diesel      1, 540, 650, 000  \n";
                break;
            case 'T':
                cout << "Selected car and payment price";
                cout << "\nAutomatic tare V4    680, 000, 000\n ";
                break;
            case 'Y':
                cout << "Selected car and payment price\n";
                cout << "Soren Plus 	    372, 475, 000 \n  ";
                break;
            case 'U':
                cout << "Selected car and payment price\n";
                cout << "Peugeot 207i  	    318, 628, 000\n	";
            case 'I':
                cout << "Selected car and payment price\n";
                cout << "*Samand Soren 	    355, 193, 000\n";
                break;
            case 'O':
                cout << "Selected car and payment price\n";
                cout << "*206 Type 3  	   259, 000, 000\n";
                break;
            case 'P':
                cout << "Selected car and payment price\n";
                cout << "207i Tu3	   323, 803, 000\n";
                break;
            case'S':
                cout << "Selected car and payment price\n";
                cout << "PARS Peugeot       260, 214, 000";
                break;
            case 'D':
                cout << "Selected car and payment price\n";
                cout << "*Rana Plus 	   343, 555, 000";
                break;
            case 'F':
                cout << "Selected car and payment price\n";
                cout << "PARS Peugeot Plus	   383, 030, 000";
                break;




            }
            //*****
            cout << "Having the option of covering the inside of the car (cost 3 million)\n:";
            cin >> apshen;
            cout << "Having the sport ring option (cost 5 million)\n:";
            cin >> asport;
            // apshen

            cout << "\n";
            cout << "Choose a payment method. For cash method enter gesty otherwise enter kash.\n";
            cout << "ravesh_pardakh:";
            cin >> ravesh_pardakh;
            if (ravesh_pardakh == "kash")
            {
                cout << "Cash payment method in the amount below\n";
                cout << "\n\n";
                cout << "To pay, complete the following (your card must have a second password)\n\n";


                cout << "card number:";
                cin >> card_number;
                cout << " cvv2:";
                cin >> cvv2;
                cout << "expiration date:";
                cin >> expiration_date;
                cout << "If you want to request a second password, enter yes, otherwise enter no\n";
                cout << "Second password request:";
                cin >> Second_password_request;
                cout << "second password:";
                cin >> second_password;
                cout << "What do you think about our website in great words.\nExcellent. Good. Normal . Bad. \nWrite a comment";
                cout << "Comment:";
                cin >> Comment;
                cout << "the end";
            }
            else
            {
                cout << "You pay 100 million in installments now and you pay the rest in 2 months, which includes 8% interest.";

                cout << "To pay, complete the following (your card must have a second password)\n\n";

                cout << "card number:";
                cin >> card_number;
                cout << " cvv2:";
                cin >> cvv2;
                cout << "expiration date:";
                cin >> expiration_date;
                cout << "If you want to request a second password, enter yes, otherwise enter no\n";
                cout << "Second password request:";
                cin >> Second_password_request;
                cout << "second password:";
                cin >> second_password;
                cout << "What do you think about our website in great words.\nExcellent. Good. Normal . Bad. \nWrite a comment";
                cout << "Comment:";
                cin >> Comment;
                cout << "the end";
            }




        }



        else if (3 == k or k == 2)
        {
            cout << "**welcome** to group B";
            cout << "Group B Farads are allowed to buy all of our tires, but they are not required to buy\n\n";

            cout << "Title          	  Factory price   	      market price \n*-*Peugeot 2008 	       0	        2, 100, 000, 000\n";
            cout << "*R*Photon diesel      1, 540, 650, 000  	1, 430, 000, 000\n";
            cout << "*T*Automatic tare V4    680, 000, 000      905, 000, 000\n*Y*Soren Plus 	    372, 475, 000        610, 000, 000\n*U*Peugeot 207i  	    318, 628, 000	       605, 000, 000\n*I*Samand Soren 	    355, 193, 000	       600, 000, 000\n";
            cout << "*O*206 Type 3  	   259, 000, 000	       535, 000, 000\n";
            cout << "*P*207i Tu3	   323, 803, 000	       530, 000, 000\n";
            cout << "*S*PARS Peugeot       260, 214, 000	       515, 000, 000\n";
            cout << "*D*Rana Plus 	   343, 555, 000	       515, 000, 000\n";
            cout << "*F*PARS Peugeot Plus	   383, 030, 000	       385, 000, 000\n";
            cout << "Enter the car you want to buy between ** (- means non-existent):";

            cin >> choise;
            switch (choise)
            {
            case 'R':
                cout << "Selected car and payment price\n";
                cout << "Photon diesel      1, 540, 650, 000  \n";
                break;
            case 'T':
                cout << "Selected car and payment price";
                cout << "\nAutomatic tare V4    680, 000, 000\n ";
                break;
            case 'Y':
                cout << "Selected car and payment price\n";
                cout << "Soren Plus 	    372, 475, 000 \n  ";
                break;
            case 'U':
                cout << "Selected car and payment price\n";
                cout << "Peugeot 207i  	    318, 628, 000\n	";
            case 'I':
                cout << "Selected car and payment price\n";
                cout << "*Samand Soren 	    355, 193, 000\n";
                break;
            case 'O':
                cout << "Selected car and payment price\n";
                cout << "*206 Type 3  	   259, 000, 000\n";
                break;
            case 'P':
                cout << "Selected car and payment price\n";
                cout << "207i Tu3	   323, 803, 000\n";
                break;
            case's':
                cout << "Selected car and payment price\n";
                cout << "PARS Peugeot       260, 214, 000";
                break;
            case 'D':
                cout << "Selected car and payment price\n";
                cout << "*Rana Plus 	   343, 555, 000";
                break;
            case 'F':
                cout << "Selected car and payment price\n";
                cout << "PARS Peugeot Plus	   383, 030, 000";
                break;




            }

            //*****
            cout << "Having the option of covering the inside of the car (cost 3 million)\n:";
            cin >> apshen;
            cout << "Having the sport ring option (cost 5 million)\n:";
            cin >> asport;
            // apshen

            cout << "\n";

            cout << "Cash payment method in the amount below\n";

            cout << "\n\n";
            cout << "To pay, complete the following (your card must have a second password)\n\n";


            cout << "card number:";
            cin >> card_number;
            cout << " cvv2:";
            cin >> cvv2;
            cout << "expiration date:";
            cin >> expiration_date;
            cout << "If you want to request a second password, enter yes, otherwise enter no\n";
            cout << "Second password request:";
            cin >> Second_password_request;
            cout << "second password:";
            cin >> second_password;
            cout << "What do you think about our website in great words.\nExcellent. Good. Normal . Bad. \nWrite a comment";
            cout << "Comment:";
            cin >> Comment;
            cout << "the end";

        }

        else if (k == 1) {
            cout << "**welcome** togroup C";
            cout << "Group C people are not allowed to buy short-term. Selected cars available for purchase\n\n";

            cout << "Title       	Factory price   	market price\n";

            cout << "*O*206 Type 3  	   259, 000, 000	       535, 000, 000\n";
            cout << "*P*207i Tu3	   323, 803, 000	       530, 000, 000\n";
            cout << "*S*PARS Peugeot       260, 214, 000	       515, 000, 000\n";
            cout << "*D*Rana Plus 	   343, 555, 000	       515, 000, 000\n";
            cout << "*F*PARS Peugeot Plus	   383, 030, 000	       385, 000, 000\n";
            cout << "Enter the car you want to buy between ** (- means non-existent):";



            cin >> choise;
            switch (choise)
            {
            case 'R':
                cout << "Selected car and payment price\n";
                cout << "Photon diesel      1, 540, 650, 000  \n";
                break;
            case 'T':
                cout << "Selected car and payment price";
                cout << "\nAutomatic tare V4    680, 000, 000\n ";
                break;
            case 'Y':
                cout << "Selected car and payment price\n";
                cout << "Soren Plus 	    372, 475, 000 \n  ";
                break;
            case 'U':
                cout << "Selected car and payment price\n";
                cout << "Peugeot 207i  	    318, 628, 000\n	";
            case 'I':
                cout << "Selected car and payment price\n";
                cout << "*Samand Soren 	    355, 193, 000\n";
                break;
            case 'O':
                cout << "Selected car and payment price\n";
                cout << "*206 Type 3  	   259, 000, 000\n";
                break;
            case 'P':
                cout << "Selected car and payment price\n";
                cout << "207i Tu3	   323, 803, 000\n";
                break;
            case's':
                cout << "Selected car and payment price\n";
                cout << "PARS Peugeot       260, 214, 000";
                break;
            case 'D':
                cout << "Selected car and payment price\n";
                cout << "*Rana Plus 	   343, 555, 000";
                break;
            case 'F':
                cout << "Selected car and payment price\n";
                cout << "PARS Peugeot Plus	   383, 030, 000";
                break;




            }

            //*****
            cout << "Having the option of covering the inside of the car (cost 3 million)\n:";
            cin >> apshen;
            cout << "Having the sport ring option (cost 5 million)\n:";
            cin >> asport;
            // apshen

            cout << "\n";

            cout << "Cash payment method in the amount below\n";

            cout << "\n\n";
            cout << "To pay, complete the following (your card must have a second password)\n\n";


            cout << "card number:";
            cin >> card_number;
            cout << " cvv2:";
            cin >> cvv2;
            cout << "expiration date:";
            cin >> expiration_date;
            cout << "If you want to request a second password, enter yes, otherwise enter no\n";
            cout << "Second password request:";
            cin >> Second_password_request;
            cout << "second password:";
            cin >> second_password;
            cout << "What do you think about our website in great words.\nExcellent. Good. Normal . Bad. \nWrite a comment";
            cout << "Comment:";
            cin >> Comment;
            cout << "the end";
        }
        else
        {
            cout << "Error 02\n";
            cout << "the end";
        }


    }
    else
    {
        cout << "Error 01\n";
        cout << "the end";
    }

    return 0;
}
