#ifndef UWIP_H
#define UWIP_H

/**
 * Here we include all necessary includes for the library
*/
#include <stdio.h>
#include "protcols.h"
#include "error.h"
#include "context.h"

u_error_t UWIP_Init(uwip_t *uwip, log_t log);

#endif  /* UWIP_H */
