#include <iostream>
#include <ChristmasTree.h>

int main() 
{
    try 
    {
        ChristmasTree tree1("Green", 210);

        tree1.addDecoration("Star");
        tree1.addDecoration("Lights");
        tree1.addDecoration("Bells");

        std::cout<<"Tree 1 details:\n";
        tree1.display();

        //folosirea copy constructorului
        ChristmasTree tree2 = tree1;
        std::cout<<"\nTree 2 (copied from Tree 1) details:\n";
        tree2.display();

        //modificarea tree2 pentru a demonstra ca e obiect separat de tree1
        tree2.addDecoration("Red flowers");
        std::cout<<"\nAfter adding decoration to Tree 2:\n";
        tree2.display();

        std::cout<<"\n";

        //folosirea operatorul de atribuire
        ChristmasTree tree3("Pink", 180);
        tree3 = tree1;
        std::cout<<"Tree 3 (assigned from Tree 1) details:\n";
        tree3.display();

        //testarea auto atribuirii
        tree1 = tree1; 
        std::cout<<"\nTree 1 after self-assignment:\n";
        tree1.display();
    } 
    catch (const std::exception &ex) 
    {
        std::cerr<<"Error: "<<ex.what()<<"\n";
    }

    return 0;
}
