//
// Created by jochk on 05-01-2026.
//

#include "bank.h"

#include <stdlib.h>
#include <string.h>

struct account *create_account(int num_entries){
    if (num_entries < 0) {
        return NULL;
    }

    struct account *account = malloc(sizeof(struct account));
    account->transactions = malloc(num_entries * sizeof(struct transaction));
    account->count = 0;
    account->max = num_entries;

    return account;
}

bool add_transaction(struct account *account, char * type, int amount, char * description) {
    if (account == NULL) {
        return false;
    }

    if (account->count > account->max) {
        return false;
    }

    account->transactions[account->count].type = strdup(type);
    account->transactions[account->count].amount = amount;
    account->transactions[account->count].description = strdup(description);
    account->count += 1;

    return true;
}

int balance(struct account account) {
    int total = 0;
    for (int i = 0; i< account.count; i++) {
        total += account.transactions[i].amount;
    }
    return total;
}