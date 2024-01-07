
#ifndef AURUM_H
#define AURUM_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

int PHS(void *out, size_t outlen, const void *in, size_t inlen, const void *salt, size_t saltlen, unsigned int t_cost, unsigned int m_cost);
///int (void *K, uint64_t kLen, const void *pwd, uint64_t pwdlen, const void *salt, uint64_t saltlen, uint64_t timeCost, uint64_t nRows, uint64_t nCols);
void aurum_hash(const char* input, char* output, uint32_t size);

#ifdef __cplusplus
}
#endif

#endif
