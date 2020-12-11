// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program is for week number

#include <iostream>

int main() {
    // this fuction is for week number
    std::string week_day;
    int week_day_int;

    // input
    std::cout << "Enter a week day number: ";
    std::cin >> week_day;

    // process & output
    try {
        week_day_int = std::stoi(week_day);
        if (week_day_int <= 5 && week_day_int >= 1) {
            if (week_day_int == 1) {
                std::cout << "Monday";
            } else if (week_day_int == 2) {
                std::cout << "Tuesday";
            } else if (week_day_int == 3) {
                std::cout << "Wednesday";
            } else if (week_day_int == 4) {
                std::cout << "Thursday";
            } else {
                std::cout << "Friday";
            }
        } else {
            std::cout << "It is not a weekday number";
        }
    } catch (std::invalid_argument) {
        std::cout << "It not a integer";
    }
}
