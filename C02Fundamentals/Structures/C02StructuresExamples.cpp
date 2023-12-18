#include <iostream>

#include "C02StructuresExamples.h"
#include "Rectangle.h"
#include "Student.h"
#include "Card.h"

void checkStructSize() {
    Rectangle rect; 
    std::cout << "sizeof Rectangle: " << sizeof(rect) << std::endl;
    std::cout << "sizeof Rectangle: " << sizeof(Rectangle) << std::endl;
    
    struct Rectangle secRect;       //declaration
    secRect.height = 5;
    secRect.width = 10;
    
    struct Rectangle thirdRec{10, 20}; //declaration plus initialization
    printf("Area of rectangle is: %d\n", (thirdRec.height * thirdRec.width));
}

void checkStudentSize() {
    std::cout << "Size of a Student Structure: " << sizeof(Student) << std::endl;
    Student first;
    std::cout << "Size of a Student first: " << sizeof(first) << std::endl;
    std::cout << "Size of a Student first.rollN: " << sizeof(first.rollN) << std::endl;
    std::cout << "Size of a Student first.name: " << sizeof(first.name) << std::endl;
    std::cout << "Size of a Student first.departed: " << sizeof(first.departed) << std::endl;
    std::cout << "Size of a Student first.address: " << sizeof(first.address) << std::endl;
}

void deckOfCards() {
    struct Card deck[52];
    std::cout << "sizeof deck: " << sizeof(deck) << std::endl;
}

void testSimpleTest() {
    std::cout << "sizeof SimpleTest: " << sizeof(SimpleTest) << std::endl;
}