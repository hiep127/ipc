#ifndef MQHELPER_H
#define MQHELPER_H

#include <sys/errno.h>
#include <sys/msg.h>
#include <sys/ipc.h>
#include <unistd.h>
#include <mqueue.h>
#include <string>
#include <sys/stat.h>
#include <fcntl.h>
#include "IPCDefine.h"

class MqHelper
{
public:
    MqHelper();
    ~MqHelper();
    mqd_t connect();
    int send(mqd_t mqdes, char* text);
    ssize_t receive(mqd_t mqdes, char* text);
};

#endif // MQHELPER_H
