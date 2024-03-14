#include "MemoryGame.hpp"
#include <cstdlib> //srand, rand
#include <ctime>
#include <iomanip> //setw
#include <iostream> //std
#include <vector>
using namespace std;

int* randomize(int numSlots); //function to randomize layout
void swap(int* arr, int i, int j);
void displaySeparateLine(int numSlots);

//TODO: implement by students
MemoryGame::MemoryGame() //default constructor, 
    //set numPairs = 3, numSlots = 2 * numPairs + 2,
    //put 3 pairs of randomly generated ints in [0, 1000)
    //randomly in numSlots blocks. 
    //Note that 2 added after 2 * numPairs means number of 
    //two extra blocks without actual data.
{
    //srand(time(NULL)); //TODO: uncomment this line to see
        //different layouts of numbers in different runnings.
        //time(NULL) is the current running time.
        //use the current running time to grow random sequence
        //Since running time differs,
        //the random sequence looks different
        //at different running time.
    srand(1); //TODO: add this before submitting to gradescope,
        //or autograde script cannot handle random input.

    //TODO: your code here
    numPairs = 3; //do not write int numPairs = 3;
    numSlots = 8; //3 pairs residing in 8 spaces,
                   //there are two empty spaces
    //IMPORTANT:
    //generate three random ints in [0, 1000),
    //randomly set them in the layout of the spaces,
    //that is, set up values array.

    int * genNums = new int[numPairs]; //initializes pointer
    for (int i = 0; i < numPairs; i++) //creates amount of randomize val base on numPairs
    {
        genNums[i] = rand() % 1000; //gen vals 0 - 999
    }
    int * arr = randomize(numSlots);
    values = new string[numSlots]; //values in .hpp file
    for (int i = 0; i < numSlots; i++)
    {
        if (i < numPairs*2) 
        {
            values[arr[i]] = to_string(genNums[i/2]); // converts to string val (i/2) to match pairs
        }
        else
        {
            values[arr[i]] = "";
        }
    }

    delete[] genNums; // rid pointer genNums after generated game
    genNums = nullptr; // does not point to object

    delete[] arr;
    arr = nullptr;
}

//TODO: implement by students
MemoryGame::~MemoryGame()
{
    //When an object is no longer in need,
    //release dynamically allocated memory by 
    //data members of the current object.
    delete[] values;
    values = nullptr;
}

//TODO: implement by students
//randomize is not a member function,
//so there is no MemoryGame:: before function name randomize.
//Return an array of randomly allocated 0, 1, .., size-1
//In constructors, randomly assign the data in dataVector 
//to array values
int* randomize(int size)
{
    //idea to randomize 0, 1, 2, 3, 4, 5,
    //generate a random int in [0, 6), say 3,
    //then move arr[3] to the end,
    //say, 0, 1, 2, 5, 4, 3
    //generate a random int in [0, 5), say 3 again,
    //then swap arr[3], which is 5 now, with arr[4], 
    //get 0, 1, 2, 4, 5, 3
    //generate a random int in [0, 4), say 2,
    //swap arr[2] with the current arr[3]
    //get 0, 1, 4, 2, 5, 3
    //continue to randomize arr[0..2].
    //afterwards, continue to randomize arr[0..1].
    int * arr = new int[size]; 
    int rowCount;
    for (int i = 0; i < size; i++)
    {
        arr[i] = i; // creates values 0 - size
    }
    while(size > 0)
    {
        rowCount = rand() % size; 
        swap(arr, rowCount, size-1); //call function swap
        size--;
    }
    return arr;
}

//TODO: implement by students
//int* arr means int array arr, which implies the address
//of the first element of array arr.
//swap arr[i] and arr[j] in array of ints arr.
void swap(int *arr, int i, int j)
{
    int dummy = arr[i]; //dummy var takes arr[i] val
    arr[i] = arr[j];
    arr[j] = dummy; //swaps
}

//Display -----+ for numSlots times.
//Add an extra + when for the first block (when index i is 0).
//So suppose numSlots is 8, we get
//+-----+-----+-----+-----+-----+-----+-----+-----+
//followed by a new line.
void displaySeparateLine(int numSlots)
{
    for (int i = 0; i < numSlots; i++)
    {
        if (i == 0)
           cout << "+";
        cout << "-----+";
    }
    cout << endl;
}

//TODO: implement by students
//display the items in values array where bShown is true.
void MemoryGame::display(bool* bShown)
{
    cout << " "; // space b4 first label
    for (int i = 0; i < numSlots; i++)
    {
        cout << setw(3) << i << setw(3) << " "; //displays index in 3 space then "" in 3
    }
    cout << endl;
    displaySeparateLine(numSlots); // calls new sep lines

    cout << "|"; //displays a '|' as first char
    for (int i = 0; i < numSlots; i++)
    {
        if (bShown[i])
        {
            cout << setw(5) << values[i];
        }
        else
        {
            cout << setw(5) << "";
        }
        cout << "|"; // creates the box '|'
    }
    cout << endl;
    displaySeparateLine(numSlots);
}

//TODO: implement by students
//rules for a round
//(1) pick a number, flip it
//(2) pick a second number, if the number is the same as
//    previous pick, display the second number,
//    otherwise, unflip the previous pick.
//(3) Finish until every pair are chosen correctly.
void MemoryGame::play()
{   
    bool * bShown = new bool[numSlots];
    for (int i = 0; i < numSlots; i++)
    {
        bShown[i] = false; 
    }

    int pairsFound = 0, numFlips = 0;
    display(bShown);
    int index, first; //index of cards, index of the first card flipped in a round
    while (pairsFound < numPairs) //if numPairs != pairFound
    {
        cout << "Pick a cell to flip: ";
        cin >> index;
        while ((index < 0) || (index > numSlots - 1) || (bShown[index])) //checks if index < 0, index > numSlots - 1, or if BShown is true or false, while it is true
        {
            if ((index < 0) || (index > numSlots - 1)) //index must be in range else print...
            {
                cout << "index needs be in range of [0, " << numSlots - 1 << "]." << endl;
            }
            else
            {
                cout << "The cell indexed at " << index << " is shown." << endl;
            }
            cout << "Re-enter an index: "; //repeats until all pairsFound
            cin >> index;
        }
        if (numFlips % 2 == 0)
        {
            bShown[index] = true;
            first = index;
        }
        else
        {
            if ((values[index] == values[first]) && (values[index] != "")) //matches
            {
                bShown[index] = true;
                pairsFound++;
            }
            else 
            {
                bShown[first] = false; //then iterates loop
            }
        }
        display(bShown); //calls and updates screen
        numFlips++; //tries
    }
    cout << "Congratulations! Take " << numFlips << " steps to find all matched pairs." << endl;
}