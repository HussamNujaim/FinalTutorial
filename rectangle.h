#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle  {

private:
    int length, width;

public:
    Rectangle(int lenght, int width) //Constructor to initialize the length and the width 
    {
        this->length=lenght;
        this->width=width;
    }
    int GetArea()
    {
        return length * width;
    }
};


#endif // RECTANGLE_H
