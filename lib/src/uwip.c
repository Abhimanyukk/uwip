#include "uwip/uwip.h"

u_error_t UWIP_Init(uwip_t *uwip, log_t log)
{
    logInit(uwip, log);
    logInfo(uwip, "Init");
    logWarn(uwip, "Warn");
    logError(uwip, "Error");
}
