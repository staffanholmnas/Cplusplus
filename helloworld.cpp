#include <iostream>       // <string> might also be included in <iostream>.
#define _USE_MATH_DEFINES // Macro that adds more constants to the cmath library, including M_PI.
#include <cmath>
#include <string>  // Use string datatypes. Ohterwise C-style strings might be used.
#include "dog.h"   // Inlcude the header file "dog.h".
#include <fstream> // Read, write and read/write from files with ifstream, ofstream and fstream.

using namespace std;
using namespace dog;

void print_c_style(); // Function prototype.
void print_strings(); // Declare a funtion (method) so it can be used after main().
void print_sum_of_matrices();
void write_to_file();
void add_text_to_file();

void MultipleChoices(int n) // Switch statement.
{
    int three = 3;
    switch (n)
    {
    case 1:
    case 2:
        cout << "You chose 1 or 2";
        break;
    case 4:
        cout << "You chose 4";
        break;
    case 3:
        cout << "You chose " << three;
        break;
    default:
        cout << "You chose something other than 1, 2, 3 and 4";
        break;
    }
}

void unary_operators()
{
    int luku, luku2;

    cout << "Enter an integer: ";
    cin >> luku;

    luku2 = luku;
    cout << "Variable luku is " << luku << " and variable luku2"
         << " value is " << luku2 << endl;

    // note the ++ operators before and after the variable
    cout << "The value now:" << endl;
    cout << "luku == " << ++luku;
    cout << " and luku2 == " << luku2++ << endl;

    cout << "And now luku == " << luku << " and luku2 == " << luku2 << endl;
}

void calculateArea()
{
    double area, radius;

    cout << "Enter Radius: " << endl;
    cin >> radius;

    area = M_PI * pow(radius, 2); // #define _USE_MATH_DEFINES and #include <cmath> to use M_PI.

    cout << "The area is: " << area << "\n";
}

int main()
{
    // Calculate hypotenuse using cmath.
    int e = 34, f = 11;
    double hypo;
    hypo = sqrt(pow(e, 2) + pow(f, 2));
    cout << hypo << endl;

    // Order of operations exercise.
    int a = 10, b = 6;
    a |= -b++;
    bool c = a > c;

    // boolalpha changes all booleans below it when printed, from 1 and 0 to true and false.
    cout << boolalpha;
    cout << a << "\t" << b << "\t" << c << endl;

    // Order of operations exercise.
    int number_1 = 10, number_2;
    number_2 = number_1++;
    int unary_operator = 2;
    ++unary_operator;
    unary_operator++;
    bool is_it_true = !(6 > 8);
    cout << unary_operator << endl
         << is_it_true << endl
         << number_2 << "\t" << number_1 << endl;

    // Boolean exercise.
    int x = 7, y = 3;
    bool tosiko = (x != 2 * y + 1);
    cout << tosiko << endl;
    int eka, toka;
    bool tosi_epatosi;
    eka = 9, toka = 8;
    tosi_epatosi = (eka >= toka);
    int answer = 2 * 4 + 16 / 8;
    int number1 = 7, number2 = 3, number3 = 0;
    number3 = number1 % number2;
    cout << number3 << " " << answer << "\t" << tosi_epatosi << endl;

    // Order of operations.
    int first, second;
    first = 100;
    second = --first;
    cout << second << endl;
    int counter = 100;
    counter = counter + 1;
    counter++;
    cout << counter << endl;

    // How to print indices, quotations etc...
    cout << "First sentence \" hi \". \t Second sentence \\. \nThird sentence. \t Fourth sentence." << endl;

    // Char arrays...
    /*
    char prompt [] = "Enter text: ", input_text [30];
    cout << prompt;
    cin.get(input_text, 30);
    cout << "Text you typed: " << input_text << endl;
    */

    // calculateArea();

    // unary_operators();

    // Switch statement call.
    /*
    cout << "Choose 1, 2, 3 or 4!" << endl; 
    int n;
    cin >> n;
    MultipleChoices(n);
    cout << endl;*/

    for (int i = 0;;) // Essentially a while loop.
    {
        if (i != 4)
        {
            cout << i;
            i++;
        }
        else
        {
            break;
        }
    }

    cout << endl;

    // do-while loop
    int q = 1;
    do
    {
        cout << q << " ";
        q++;
    } while (q < 9);

    cout << endl;

    // C-style strings
    char word[] = "C++";
    char word2[10] = "string";
    char str[4] = {'C', '+', '+', '\0'}; // The last is for ASCII null, added automatically.
    cout << word << endl
         << word2 << endl
         << str << endl;

    // C-style strings with more than one word:
    // print_c_style();

    // Print strings:
    // print_strings();

    int array[12] = {0, 1, 2, 3, 4, 5};
    cout << array[3] << endl;

    // Method that prints the sum of 2 matrices.
    print_sum_of_matrices();

    // Classes:
    Dog first_dog;
    first_dog.PrintInformation();
    first_dog.Bark();
    first_dog.GiveName("Gerry");
    first_dog.GiveAge(7);
    first_dog.PrintInformation();

    Dog second_dog("Bobby", "dalmatian", 5);
    second_dog.PrintInformation();
    second_dog.GiveName("Tom");
    second_dog.GiveAge(12);
    second_dog.PrintInformation();

    // Read text from file line by line then print it.
    ifstream text("example.txt");
    string row;
    while (getline(text, row))
    {
        cout << row << endl;
    }

    // Read text from file a single word at a time.
    ifstream text2;
    text2.open("example.txt");
    if (text2.is_open()) // Checks if file can be opened. Optional.
    {
        string single_word;
        while (text2 >> single_word)
        {
            cout << single_word << endl;
        }
    }
    else
    {
        cout << "Error: could not open the file!" << endl;
        exit(-1); // Exits the program (unnecessarily).
    }

    // Write text to a file. Note, opening a file with ofstream deletes it's content!
    // write_to_file();

    // Write text to file, adds new text after the previous write.
    // add_text_to_file();

    // Read float-variables from a file, then print them.
    ifstream read_floats("floats.txt");
    float fnumber;
    bool loppu = false;
    while (!loppu)
    {
        read_floats >> fnumber;
        if (read_floats.eof())
        {
            loppu = true;
        }
        else
        {
            cout << fnumber << endl;
        }
    }

    // Read text and prices from a shopping list.
    ifstream textfile2("shoppinglist.txt");
    
    if (!textfile2.is_open()) {
        cout << "Could not open text file!" << endl;
        exit(-1);
    }

    string product_names;
    int products = 0;
    float price, sum_of_products = 0;
    
    cout << "SHOPPING LIST" << endl;
    while(textfile2 >> product_names && textfile2 >> price) {
        products++;
        sum_of_products += price;
        cout << product_names << ": " << price << " euro" << endl;
    }
    cout << "products: " << products << " pcs" << endl;
    cout << "sum of products: " << sum_of_products << " euro" << endl;

    return 0;
}

void print_c_style()
{
    char word3[100];
    cout << "Enter a string: " << endl;
    cin.get(word3, 100);
    cout << "You entered: " << word3 << endl;
}

void print_strings()
{
    // Declaring a string object.
    string str;
    cout << "Please enter a string: ";
    getline(cin, str);
    cout << "You have entered: " << str << endl;
}

void print_sum_of_matrices()
{
    int eka_matriisi[5][5] = {
        2, 34, 23, 21, 58,
        3, 6, 56, 2, 9,
        76, 92, 2, 4, 77,
        1, 45, 45, 8, 33,
        99, 3, 34, 5, 78};

    int toka_matriisi[5][5] = {
        45, 3, 34, 6, 77,
        2, 45, 67, 3, 2,
        21, 23, 54, 67, 67,
        43, 2, 45, 99, 0,
        54, 76, 88, 63, 5};

    int y, x;
    int sum_of_products_matriisi[5][5];

    for (y = 0; y < 5; y++)
    {
        for (x = 0; x < 5; x++)
        {
            sum_of_products_matriisi[y][x] = eka_matriisi[y][x] + toka_matriisi[y][x];

            if (x == 4)
            {
                cout << sum_of_products_matriisi[y][x] << "\n";
            }
            else
            {
                cout << sum_of_products_matriisi[y][x] << "\t";
            }
        }
    }
}

void write_to_file()
{
    ofstream text3("story.txt"); // A new file is automagically created if no file exists. Deletes existing text.
    if (!text3.is_open())
    {
        cout << "An error occured when trying to open the file." << endl;
    }
    string lines;
    bool story_not_finished = true;
    cout << "Write your story, quit by pressing enter twice. 2 x [enter]" << endl;
    cout << "----------------------------" << endl;
    while (story_not_finished)
    {
        getline(cin, lines);

        if (lines.compare("") == 0) // Enter empty line to quit loop.
        {
            story_not_finished = false;
        }
        else
        {
            text3 << lines << endl;
        }
    }
    text3.close();
}

void add_text_to_file()
{
    fstream textfile("textfile.txt", ios_base::out | ios_base::app);
    if (!textfile.is_open())
        cout << "An error occured when trying to open the file." << endl;
    string lines;
    bool story_finished = false;
    cout << "Write your story, quit by pressing enter twice. 2 x [enter]" << endl;
    cout << endl;
    while (!story_finished)
    {
        getline(cin, lines);
        // Enter empty line to quit loop.
        if (lines.compare("") == 0)
            story_finished = true;
        else
            textfile << lines << endl;
    }
    textfile.close();
}
