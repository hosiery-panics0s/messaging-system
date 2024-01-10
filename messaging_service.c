#include "messaging_service.h"
#include <stdio.h>

void initializeMessagingService() {
    // Initialization logic
}

void cleanupMessagingService() {
    // Cleanup logic
}

void sendMessage(User sender, User receiver, const char* message) {
    addMessage(receiver, sender, message);
}

void displayMessages(User user) {
    printf("Messages for user %s:\n", user.name);
    for (int i = 0; i < user.messageCount; ++i) {
        printf("%s: %s\n", user.messages[i].sender.name, user.messages[i].content);
    }
    printf("\n");
}
