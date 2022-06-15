// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    srand(time(0));
    int question = rand() % 4 + 1;

    int ans;

    switch (question) {
    case 1:{
        std::cout << "What is the name of Spongebob's pet snail?\n\n1: Gary\n2: Sandy\n3: Philip\n4: Eugene\n";
        std::cin >> ans;
        if (ans == 1)
            std::cout << "CORRECT!";
        else 
            std::cout << "INCORRECT!";
        break;
        }
    case 2: {
        std::cout << "What is the name of Pittsburgh's baseball team?\n\n1: Yankees\n2: Mets\n3: Pirates\n4: Rangers\n";
        std::cin >> ans;
        if (ans == 3)
            std::cout << "CORRECT!";
        else
            std::cout << "INCORRECT!";
        break;
    }
    case 3: {
        std::cout << "Which of these is a product of Apple?\n\n1: PC\n2: PS3\n3: XBOX 360\n4: Macbook\n";
        std::cin >> ans;
        if (ans == 4)
            std::cout << "CORRECT!";
        else
            std::cout << "INCORRECT!";
        break;
    }
    case 4: {
        std::cout << "What is the name of the phenomenon in which the moon blocks the sun during the day?\n\n1: Lunar Eclipse\n2: Solar Eclipse\n3: Super Moon\n4: The End of The World\n";
        std::cin >> ans;
        if (ans == 1)
            std::cout << "CORRECT!";
        else
            std::cout << "INCORRECT!";
        break;
    }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
