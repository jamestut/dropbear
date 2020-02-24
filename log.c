#include "log.h"
#include <stdio.h>

/*log levels function (placeholder)*/
/*at the moment we won't output anything as it interferes w/ SFTP client.*/
void error(const char * fmt, ...) {
    va_list args;
    va_start(args, fmt);
    // vfprintf(stderr, fmt, args);
}

void fatal(const char * fmt, ...) {
    va_list args;
    va_start(args, fmt);
    // vfprintf(stderr, fmt, args);
}

void logit(const char * fmt, ...) {
    va_list args;
    va_start(args, fmt);
    // vfprintf(stderr, fmt, args);
}

void verbose(const char * fmt, ...) {
    va_list args;
    va_start(args, fmt);
    // vfprintf(stderr, fmt, args);
}

void debug(const char * fmt, ...) {
    va_list args;
    va_start(args, fmt);
    // vfprintf(stderr, fmt, args);
}

void debug2(const char * fmt, ...) {
    va_list args;
    va_start(args, fmt);
    // vfprintf(stderr, fmt, args);
}

void debug3(const char * fmt, ...) {
    va_list args;
    va_start(args, fmt);
    // vfprintf(stderr, fmt, args);
}
/*end log levels function (placeholder)*/

/*dummy functions*/
void     log_init(char * p1, LogLevel p2, SyslogFacility p3, int p4) {}

LogLevel	log_level_number(char * p1) {
    return SYSLOG_LEVEL_INFO;
}

SyslogFacility	log_facility_number(char * p1) {
    return SYSLOG_FACILITY_LOCAL0;
}
