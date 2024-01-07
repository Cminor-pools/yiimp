
#ifndef AURUM_H
#define AURUM_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void aurum_hash(const char* input, char* output, uint32_t size);

#ifdef __cplusplus
}
#endif

#endif
