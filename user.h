#ifndef USER_H
#define USER_H

#define MAX_MESSAGES 100
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
} User;

typedef struct {
    User sender;
    User receiver;
    char content[MAX_NAME_LENGTH];
} Message;

void addMessage(User user, User sender, const char* content);
User createUser(const char* name);

#endif // USER_H
