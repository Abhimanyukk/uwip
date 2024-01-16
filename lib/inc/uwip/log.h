#ifndef LOG_H
#define LOG_H

typedef void (*log_t)(char *);

#define logInit(x, log) x->log = log
#define logInfo(x, info)                                \
    {                                                   \
        char log_str[500] = {0};                        \
        sprintf(log_str, "[UWIP][INFO]\t%s\r\n", info); \
        x->log(log_str);                                \
    }

#define logWarn(x, warn)                                \
    {                                                   \
        char log_str[500] = {0};                        \
        sprintf(log_str, "[UWIP][WARN]\t%s\r\n", warn); \
        x->log(log_str);                                \
    }

#define logError(x, error)                                \
    {                                                     \
        char log_str[500] = {0};                          \
        sprintf(log_str, "[UWIP][ERROR]\t%s\r\n", error); \
        x->log(log_str);                                  \
    }

#endif /* LOG_H */
