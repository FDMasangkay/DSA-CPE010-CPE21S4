// C++ code to illustrate queue in Standard Template Library (STL)
#include <iostream>
#include <queue>

void display(std::queue <std::string> a)
{
    std::queue <std::string> c = a;
    while (!c.empty())
    {
    std::cout << " " << c.front();
    c.pop();
    }
    std::cout << "\n";
}

int main()
{

std::queue <std::string> student;
std::string names[5] = {"fred", "fred1", "fred2", "fred3", "fred4"};

for (int i = 0; i < 5; i++)
{
    student.push(names[i]);
}

std::cout << "The queue a is :";
display(student);

std::cout << "student.empty() :" << student.empty() << "\n";
std::cout << "student.size() : " << student.size() << "\n";
std::cout << "student.front() : " << student.front() << "\n";

std::cout << "student.back() : " << student.back() << "\n";
std::cout << "student.pop() : ";
student.pop();
display(student);
student.push("Fred5");
std::cout << "The queue a is :";
display(student);

return 0;
}
