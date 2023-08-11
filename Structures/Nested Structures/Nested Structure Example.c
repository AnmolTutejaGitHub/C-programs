#include <stdio.h>

// Define the inner structure
struct Address {
    char street[50];
    char city[50];
    char state[20];
};

// Define the outer structure with a nested structure inside
struct Person {
    char name[50];
    int age;
    struct Address address; // Nested structure
};

int main() {
    // Declare and initialize a structure with nested structures
    struct Person person1 = {
        "John Doe",
        25,
        {"123 Main St", "Cityville", "CA"}
    };

    // Access and print the information using nested structure notation
    printf("Person Name: %s\n", person1.name);
    printf("Person Age: %d\n", person1.age);
    printf("Person Address: %s, %s, %s\n", person1.address.street, person1.address.city, person1.address.state);

    return 0;
}
