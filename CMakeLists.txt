cmake_minimum_required(VERSION 3.30)
project(GuessingGame)
project(DataTypes)
project(UserDataTypes)

set(CMAKE_CXX_STANDARD 14)

include_directories(DataTypes)
include_directories(GuessingGame)
include_directories(UserDataTypes)

add_executable(GuessingGame
    GuessingGame/Game.cpp
    GuessingGame/Game.h
    GuessingGame/GuessingGame.cpp
)
add_executable(DataTypes
        DataTypes/DataTypes.cpp
        DataTypes/Employee.cpp
        DataTypes/Employee.h
)
add_executable(UserDataTypes
        UserDataTypes/Sandwich.cpp
        UserDataTypes/Sandwich.h
        UserDataTypes/UserDatatypes.cpp
)