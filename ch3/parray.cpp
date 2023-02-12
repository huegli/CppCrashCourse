#include <cstdio>

struct College {
    char name[256];
};

void print_name(College* college_ptr) {
    printf("%s College\n", college_ptr->name);
}

int main() {
    College best_colleges[] = { "Magdalen", "Nuffield", "Kellog" };
    print_name(best_colleges);
}