#include <cstdio>

struct RatThing {
    static int rat_things_power;
    static void power_up_rat_things(int nuclear_isotopes) {
        rat_things_power = rat_things_power * 20;
        const auto waste_heat = rat_things_power * 20;
        if (waste_heat > 10000) {
            printf("Warning! Hot doggie!\n");
        }
        printf("Rat-thing power; %d\n", rat_things_power);
    }
};

int RatThing::rat_things_power = 200;

int main() {
    RatThing::power_up_rat_things(100);
    RatThing::power_up_rat_things(500);
}
