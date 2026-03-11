//fature_classes: defintions file
//Programmer: Noah Julius

#include "plan_classes.hpp"
using std::string;

class DailyDietPlan
{
//private(implicitly)
int goalCalories;
std::string name;
std::string date;

public:

//constructor/desctructor
DailyDietPlan(int newGoalCalories = 0, std::string newName = "Uknown", std::string newDate = "Uknown")//default constructor
{
    this->goalCalories = newGoalCalories;
    this->name = newName;
    this->date = newDate; 
}
DailyDietPlan(const DailyDietPlan& dietPlan)//copy constructor
{
    //only need a shallow copy(because no pointers need to be copied over), no definiton needed
}
~DailyDietPlan()//destructor
{
    //nothing on heap, leave blank
}

//setters
bool setGoal(int newGoal)//returns true if valid goal ( >= 0 ) is passed
{
    if(newGoal < 0)
    {
        return false;
    }
    this->goalCalories = newGoal;
    return true;
}
void setName(std::string newName)
{
    this->name = newName;
}
void setDate(std::string newDate)
{
    this->date = newDate;
}

//getters
int getGoal()
{
    return goalCalories;
}
std::string getName()
{
    return name;
}
std::string getDate()
{
    return date;
}

//other member functions
void printPlan()//prints outs plan for the day
{

}
void editGoal()//prompts user for a new goal, loops until valid goal entered
{
    int newGoal = 0;
    std::cout << "Enter your new caloric goal:\n -> " << std::endl;

   do//loops until setGoal returns true (valid entry)
   {
        std::cin >> newGoal;
   }while(!setGoal(newGoal));    
}
};