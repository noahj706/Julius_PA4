//feature_classes: header file
//Programmer: Noah Julius

#include <iostream>

class DailyDietPlan
{
//private(implicitly)

int goalCalories;
std::string name;
std::string date;

void printPlan();

public:

//constructor/desctructor
DailyDietPlan(int goalCalories = 0, std::string name = "Uknown", std::string date = "Uknown");//default constructor
DailyDietPlan(const DailyDietPlan& dietPlan);//copy constructor
~DailyDietPlan();//destructor

//setters
bool setGoal(int goal);//returns true if valid goal ( > 0 ) is passed
void setName(std::string name);
void setDate(std::string date);
//getters
int getGoal();
std::string getName();
std::string getDate();

//other member functions
void printPlan();//prints outs plan for the day
void editGoal();//prompts user for a new goal, loops until valid goal entered

};

class DailyExercisePlan
{
int goalSteps;
std::string name;
std::string date;

public:

//constructor/desctructor
DailyExercisePlan(int goalSteps = 0, std::string name = "Uknown", std::string date = "Uknown");//default constructor
DailyExercisePlan(const DailyExercisePlan& exercisePlan);//copy constructor
~DailyExercisePlan();//destructor


};