#include<iostream>
using namespace std:

int main()
{
    enum Mealtype;
    struct passenger{
        string name;
        Mealtype MealPref;
        bool isflyerfreq;
        string freqflyNo;
    }

    passenger *p;
    p = new passenger;
    p -> name="Shibajyoti";
    p -> Mealtype = NON VEGETARIAN;
    p -> isflyerfreq = true;
    p -> freqflyNo = "A3487Ib9";
    cout<<passenger.name;
    return 0;
}
