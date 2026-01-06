//
// Created by jochk on 05-01-2026.
//

#ifndef BANK4_BANK_H
#define BANK4_BANK_H

struct transaction {
    char *type;
    int amount;
    char *description;
};


struct account {
    struct transaction *transactions;
    int count;
    int max;
};


struct account *create_account(int num_entries);
bool add_transaction(struct account *account, char * type, int amount, char * description);
int balance(struct account account);


#endif //BANK4_BANK_H