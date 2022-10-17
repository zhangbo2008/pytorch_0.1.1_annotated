#ifndef TH_BLAS_INC
#define TH_BLAS_INC

#include "THGeneral.h"

#define THBlas_(NAME) TH_CONCAT_4(TH,Real,Blas_,NAME) //用于拼接函数名字.

#include "generic/THBlas.h"
#include "THGenerateAllTypes.h"

#endif
