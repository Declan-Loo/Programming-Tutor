#include <stdio.h>

// how to define a struct

/*
struct struct_name {
    data_type member1;
    data_type member2;
    ...
};

struct struct_name variable_name; // variable declaration
variable_name.member1 = value1; // accessing members
variable_name.member2 = value2;


*/

struct Point {
    int x;
    int y;
};

// alternatively - typedef (recommended) - you don't need to use struct keyword when defining a variable

typedef struct {
    char name[50];
    int age;
} Person;

double get_distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

Person* create_person(char *name, int age) {
    Person* p = malloc(sizeof(Person));
    strcpy(p->name, name);
    p->age = age;
    return p;

}

int main() {
    // initialize a struct and assign values (x,y) using struct keyword - via initailiser list
    struct Point p1 = {1, 2};
    struct Point p2 = {3, 4};

    // how to declare a struct and assign values (x,y) using struct keyword - via dot operator
    struct Point p3;
    p3.x = 5;
    p3.y = 6;

    printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
    printf("p2.x = %d, p2.y = %d\n", p2.x, p2.y);

    printf("Distance between p1 and p2: %f\n", get_distance(p1, p2));

    // using typedef
    Person person;
    strcpy(person.name, "John Doe");
    person.age = 40;
    printf("Name: %s, Age: %d\n", person.name, person.age);

    // changing age
    

    return 0;
}