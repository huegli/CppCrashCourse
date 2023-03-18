#include <cstdio>

int main() {
    int original = 100;
    int& original_ref = original;
    printf("Originial: %d\n", original);
    printf("Reference: %d\n", original_ref);

    int new_value = 200;
    original_ref = new_value;
    printf("Originial: %d\n", original);
    printf("New Value: %d\n", new_value);
    printf("Reference: %d\n", original_ref);

}
