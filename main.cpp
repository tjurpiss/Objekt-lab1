#include <textwindow.h>
#include "Header.h"
#include <point.h>
using namespace ShapeLib;

void task1()
{

    TextWindow uppg1;   //klass och objekt
    uppg1.print("hello world!");
    uppg1.start();      //startar textrutan
}

void printPoint(TextWindow &textWindow, Point point)
{

    textWindow.print("(");
    textWindow.print(point.getX());
    textWindow.print(", ");
    textWindow.print(point.getY());
    textWindow.print(")");
}

void task2()
{
    TextWindow uppg2;
    Point point1 = Point(7, 3);
    Point point2 = Point();
    uppg2.print("The distance from origin to (7,3) is ");
    uppg2.print(point2.getDistanceTo(point1));
    uppg2.start();
}

void task3()
{
    TextWindow uppg3;
    Point point1 = Point(1, 2);
    Point point2 = Point(3, 4);
    uppg3.print("Before: ");
    printPoint(uppg3, point1);
    printPoint(uppg3, point2);
    uppg3.print("\nAfter: ");
    point2.setTo(point1);






    uppg3.start();

}

int main(int argc, char *argv[]){
    //TextWindow textWindow;
   // textWindow.print("It's working!");
   // textWindow.start();

    //task1();
    //  printPoint(TextWindow, Point(7, 3));
    //task2();
    task3();


    return 0;

}







