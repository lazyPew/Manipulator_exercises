﻿#include <iostream>
#include <list>

#include "ExerciseController.h"
#include "manipulator.hpp"
#include "pointChecker.hpp"

using namespace std;
//using PointList = std::list<std::pair<double, double>>;

ExerciseController::ExerciseController()
{
}

void ExerciseController::beginWork()
{
    int exercise = -1;

    while (exercise != 0)
    {
        cout << "Select an option: \n"
            << "1) Exercise 1\n"
            << "2) Exercise 2\n"
            << "3) Exercise 3\n"
            << "0) Finish program" << endl;
        cin >> exercise;
        if (!cin.fail()) {
            cout << "Selected option:" << exercise << endl;
            switch (exercise) {
            case 1:
                firstExercise();
                break;
            case 2:
                secondExercise();
                break;
            case 3:
                thirdExercise();
            default:
                break;
            }
        }
        else {
            cout << "Incorrect input" << endl;
        }
    }
}

void ExerciseController::firstExercise()
{
    Manipulator manipulator1_ex1(0,0,5);
    Manipulator manipulator2_ex1({ 5.6, 3 }, 4);
    std::pair<double, double> destination = {10,2};

    PointChecker::checkManipulatorToMove(manipulator1_ex1, manipulator2_ex1, destination.first, destination.second);
}

void ExerciseController::secondExercise()
{
    Manipulator manipulator1_ex2(0, 0, 5);
    Manipulator manipulator2_ex2({ 5.6, 3 }, 4);

    PointList pointList = { {23,4.6},{0,-2},{4, 2.9},{-10,-1},{4,5} };
    PointChecker::moveManipulators(manipulator1_ex2, manipulator2_ex2, pointList);

    cout << "Manipulator 1 points : ";
    manipulator1_ex2.printPoints();
    cout << "Manipulator 2 points : ";
    manipulator2_ex2.printPoints();
}

void ExerciseController::thirdExercise()
{
}
