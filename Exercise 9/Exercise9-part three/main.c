/*
 * Programmer: Shayan Mansornia     Date:12/14/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *Numeric addresses for computers on the international network Internet
 */
#include <stdio.h>
#include <string.h>
#define MAX 100
#define SENTINEL "none"
typedef struct {
    int xx;
    int yy;
    int zz;
    int mm;
    char nickname[11];
} address_t;

int scan_address(FILE *input, address_t *address);
void print_address(address_t *address);
int local_address(address_t *address_a, address_t *address_b);

int
main(void){
    FILE *input;
    address_t addresses[MAX];
    int i, j;
    int size;
    int input_status;

    input = fopen("C:\\iptable.txt", "r");

    i = 0;
    input_status = scan_address(input, &addresses[i]);
    while (input_status != 0 && i++ < MAX) {
        input_status = scan_address(input, &addresses[i]);
    }
    size = i;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (local_address(&addresses[i], &addresses[j])) {
                printf("*************************************************************");
                printf("\n  Machines %s and %s are on the same local network.\n",
                       addresses[i].nickname, addresses[j].nickname);
            }
        }
    }

    printf("\nFull list of addresses and nicknames:\n");
    for (i = 0; i < size; i++) {
        print_address(&addresses[i]);
    }

    fclose(input);
    return (0);
}
int
scan_address(FILE *input, address_t *address){
    int input_status;

    input_status = fscanf(input, "%d.%d.%d.%d %s", &address->xx, &address->yy,
                          &address->zz, &address->mm, address->nickname);

    if (input_status != 5) {
        return (0);
    }if (address->xx == 0 && address->yy == 0 && address->zz == 0 &&
        address->mm == 0 && strcmp(address->nickname, SENTINEL) == 0) {
        return (0);
    }

    return (1);
}
void
print_address(address_t *address){
    printf("%d.%d.%d.%d\t%s\n", address->xx, address->yy, address->zz,
           address->mm, address->nickname);
}
int
local_address(address_t *address_a, address_t *address_b){
    return (address_a->xx == address_b->xx &&
            address_a->yy == address_b->yy);
}