#include <stdio.h>

#include "bank.h"

int main(void) {
    struct account *acc = create_account(10);
    if (acc == NULL) {
        printf("kontoen blev ikke oprettet");
    } else printf("kontoen blev oprettet\n");


    add_transaction(acc, "???", 1000, "beskrivelse");
    add_transaction(acc, "???", 343, "beskrivelse");

    int total_balance = balance(*acc);
    printf("der staar %d kr paa kontoen", total_balance);



}
