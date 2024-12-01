#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class ChristmasTree 
{
    private:
        std::string color; 
        int height;        
        std::vector<std::string> decorations;

    public:
        ChristmasTree(const std::string &color="Green", int height=150)
            : color(color), height(height) {}

        ChristmasTree(const ChristmasTree &other)
            : color(other.color), height(other.height), decorations(other.decorations) 
        {
            std::cout<<"Copy constructor called\n";
        }

        //operator de atribuire
        ChristmasTree& operator=(const ChristmasTree &other) 
        {
            std::cout<<"Assignment operator called\n";

            //Handle assignment to self in operator=
            if (this == &other) 
            {
                return *this;
            }

            //Copy all parts of an object
            color = other.color;
            height = other.height;
            decorations = other.decorations;

            //Have assignment operators return a reference to *this
            return *this; 
        }

        void addDecoration(const std::string &decoration) 
        {
            decorations.push_back(decoration);
        }

        void display()  
        {
            std::cout<<"Christmas Tree ["<<color<<", "<<height<<" cm]:\n";
            std::cout<<"Decorations: ";

            for (const auto &deco : decorations)
            {
                std::cout<<deco<<" ";
            }
            
            std::cout<<"\n";
        }
};