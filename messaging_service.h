#ifndef MESSAGING_SERVICE_H
#define MESSAGING_SERVICE_H

#include "user.h"

void initializeMessagingService();
void cleanupMessagingService();
void sendMessage(User sender, User receiver, const char* message);
void displayMessages(User user);

#endif // MESSAGING_SERVICE_H
