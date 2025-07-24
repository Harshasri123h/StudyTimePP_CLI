#include <iostream>
#include <sqlite3.h>
#include "db.h"

sqlite3* db;

bool connectToDatabase() {
    int exit = sqlite3_open("data/studytime.db", &db);
    if (exit) {
        std::cerr << "Error opening DB: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }
    std::cout << "Database connected successfully.\n";
    return true;
}
