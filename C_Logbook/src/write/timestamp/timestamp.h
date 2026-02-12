#include <stdint.h>
#include <stdbool.h>

#ifndef TIMESTAMP_H
#define TIMESTAMP_H

#define MONTH_STRING_SIZE 14

typedef enum {	MONTH = 0,
				DAY,
				HOUR,
				MINUTE } TimestampSections;

extern char monthString[MONTH_STRING_SIZE];

extern bool computeTimestamp(void);
extern uint8_t getTimestampData(TimestampSections type);
extern bool printStartingTimestampWrite(void);

#endif
