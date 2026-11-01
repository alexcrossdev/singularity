#include "singularity/log.h"
#include <singularity/processor.h>

int main(void)
{
    VALIDATE_PROCESSOR();

    SG_LOG_TRACE("Test");

    return 0;
}
