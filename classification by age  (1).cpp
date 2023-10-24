#include <stdio.h>

int main () {
    int age;

    printf ("Enter age of the person\n");
    scanf ("%d", &age);

    if(age>=18) {
        printf ("The person Is an adult");
    }
    else {
        printf ("The person is an under age");
    }
    return 0;
}



