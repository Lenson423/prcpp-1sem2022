project(lab04)

add_library(solutions task1.cpp task2.cpp task3.cpp task4.cpp task5.cpp task6.cpp task7.cpp task8.cpp)

add_executable(main main.cpp)
target_link_libraries(main solutions)
