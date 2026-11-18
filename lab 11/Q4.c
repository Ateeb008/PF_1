#include<stdio.h>

struct Address
{
    char city [30];
    int zipCode;
    char state[30];
};

struct Student{
    char rollNo[15];
    char name[50];
    float cgpa;
    struct Address studentAddress;
};

int main(){
    struct Student student1 = 
    {
        "26k-6068",
        "Muhammad YAseen",
        3.85,
        {"Karachi", 75300, "Sindh"}
    };
    
    printf("---Student Profile ---\n");
    printf("Roll No: %s \n", student1.rollNo);
    printf("Name: %s \n", student1.name);
    printf("CGPA: %.2f\n", student1.cgpa);
    printf("City: %s\n", student1.studentAddress.city);
    printf("Zip Code: %d\n",student1.studentAddress.zipCode);
    printf("State: %s\n", student1.studentAddress.state);

    return 0;

}

