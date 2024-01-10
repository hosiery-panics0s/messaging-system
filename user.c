#include "user.h"
#include <string.h>

void addMessage(User user, User sender, const char* content) {
    // Add message logic
    // For simplicity, assuming messages are stored in an array within the User structure
}

User createUser(const char* name) {
    User user;
    strcpy(user.name, name);
    return user;
}
