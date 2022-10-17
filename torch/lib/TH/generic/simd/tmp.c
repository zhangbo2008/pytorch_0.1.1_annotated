# 1 "convolve5x5_sse.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "convolve5x5_sse.c"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 1 3 4
# 32 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/tmmintrin.h" 1 3 4
# 31 "/usr/lib/gcc/x86_64-linux-gnu/7/include/tmmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/pmmintrin.h" 1 3 4
# 31 "/usr/lib/gcc/x86_64-linux-gnu/7/include/pmmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/emmintrin.h" 1 3 4
# 31 "/usr/lib/gcc/x86_64-linux-gnu/7/include/emmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 1 3 4
# 31 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/mmintrin.h" 1 3 4
# 42 "/usr/lib/gcc/x86_64-linux-gnu/7/include/mmintrin.h" 3 4

# 42 "/usr/lib/gcc/x86_64-linux-gnu/7/include/mmintrin.h" 3 4
typedef int __m64 __attribute__ ((__vector_size__ (8), __may_alias__));



typedef int __m64_u __attribute__ ((__vector_size__ (8), __may_alias__, __aligned__ (1)));



typedef int __v2si __attribute__ ((__vector_size__ (8)));

typedef short __v4hi __attribute__ ((__vector_size__ (8)));

typedef char __v8qi __attribute__ ((__vector_size__ (8)));

typedef long long __v1di __attribute__ ((__vector_size__ (8)));

typedef float __v2sf __attribute__ ((__vector_size__ (8)));



extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_empty (void)
{
  __builtin_ia32_emms ();

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_empty (void)
{
  _mm_empty ();

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_si64 (int __i)
{
  return (__m64) __builtin_ia32_vec_init_v2si (__i, 0);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_from_int (int __i)
{
  return _mm_cvtsi32_si64 (__i);

}





extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_from_int64 (long long __i)
{
  return (__m64) __i;

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_m64 (long long __i)
{
  return (__m64) __i;

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_si64 (long long __i)
{
  return (__m64) __i;

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi64x (long long __i)
{
  return (__m64) __i;

}



extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_si32 (__m64 __i)
{
  return __builtin_ia32_vec_ext_v2si ((__v2si)__i, 0);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_to_int (__m64 __i)
{
  return _mm_cvtsi64_si32 (__i);

}





extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_to_int64 (__m64 __i)
{
  return (long long)__i;

}

extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtm64_si64 (__m64 __i)
{
  return (long long)__i;

}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_si64x (__m64 __i)
{
  return (long long)__i;

}





extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packsswb ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_packsswb (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pi16 (__m1, __m2);

}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packssdw ((__v2si)__m1, (__v2si)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_packssdw (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pi32 (__m1, __m2);

}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packuswb ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_packuswb (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pu16 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhbw ((__v8qi)__m1, (__v8qi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckhbw (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi8 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhwd ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckhwd (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi16 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhdq ((__v2si)__m1, (__v2si)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckhdq (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi32 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpcklbw ((__v8qi)__m1, (__v8qi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpcklbw (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi8 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpcklwd ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpcklwd (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi16 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckldq ((__v2si)__m1, (__v2si)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckldq (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi32 (__m1, __m2);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddb ((__v8qi)__m1, (__v8qi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddb (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi8 (__m1, __m2);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddw ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddw (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi16 (__m1, __m2);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddd ((__v2si)__m1, (__v2si)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddd (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi32 (__m1, __m2);

}
# 322 "/usr/lib/gcc/x86_64-linux-gnu/7/include/mmintrin.h" 3 4
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddq ((__v1di)__m1, (__v1di)__m2);

}







extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddsb ((__v8qi)__m1, (__v8qi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddsb (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pi8 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddsw ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddsw (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pi16 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pu8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddusb ((__v8qi)__m1, (__v8qi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddusb (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pu8 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddusw ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddusw (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pu16 (__m1, __m2);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubb ((__v8qi)__m1, (__v8qi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubb (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi8 (__m1, __m2);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubw ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubw (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi16 (__m1, __m2);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubd ((__v2si)__m1, (__v2si)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubd (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi32 (__m1, __m2);

}
# 434 "/usr/lib/gcc/x86_64-linux-gnu/7/include/mmintrin.h" 3 4
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubq ((__v1di)__m1, (__v1di)__m2);

}







extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubsb ((__v8qi)__m1, (__v8qi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubsb (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pi8 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubsw ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubsw (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pi16 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pu8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubusb ((__v8qi)__m1, (__v8qi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubusb (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pu8 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubusw ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubusw (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pu16 (__m1, __m2);

}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_madd_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmaddwd ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmaddwd (__m64 __m1, __m64 __m2)
{
  return _mm_madd_pi16 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmulhw ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmulhw (__m64 __m1, __m64 __m2)
{
  return _mm_mulhi_pi16 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mullo_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmullw ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmullw (__m64 __m1, __m64 __m2)
{
  return _mm_mullo_pi16 (__m1, __m2);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psllw ((__v4hi)__m, (__v4hi)__count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllw (__m64 __m, __m64 __count)
{
  return _mm_sll_pi16 (__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psllwi ((__v4hi)__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllwi (__m64 __m, int __count)
{
  return _mm_slli_pi16 (__m, __count);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_pslld ((__v2si)__m, (__v2si)__count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pslld (__m64 __m, __m64 __count)
{
  return _mm_sll_pi32 (__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_pslldi ((__v2si)__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pslldi (__m64 __m, int __count)
{
  return _mm_slli_pi32 (__m, __count);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_si64 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psllq ((__v1di)__m, (__v1di)__count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllq (__m64 __m, __m64 __count)
{
  return _mm_sll_si64 (__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_si64 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psllqi ((__v1di)__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllqi (__m64 __m, int __count)
{
  return _mm_slli_si64 (__m, __count);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psraw ((__v4hi)__m, (__v4hi)__count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psraw (__m64 __m, __m64 __count)
{
  return _mm_sra_pi16 (__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrawi ((__v4hi)__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrawi (__m64 __m, int __count)
{
  return _mm_srai_pi16 (__m, __count);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrad ((__v2si)__m, (__v2si)__count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrad (__m64 __m, __m64 __count)
{
  return _mm_sra_pi32 (__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psradi ((__v2si)__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psradi (__m64 __m, int __count)
{
  return _mm_srai_pi32 (__m, __count);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrlw ((__v4hi)__m, (__v4hi)__count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlw (__m64 __m, __m64 __count)
{
  return _mm_srl_pi16 (__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrlwi ((__v4hi)__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlwi (__m64 __m, int __count)
{
  return _mm_srli_pi16 (__m, __count);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrld ((__v2si)__m, (__v2si)__count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrld (__m64 __m, __m64 __count)
{
  return _mm_srl_pi32 (__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrldi ((__v2si)__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrldi (__m64 __m, int __count)
{
  return _mm_srli_pi32 (__m, __count);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_si64 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrlq ((__v1di)__m, (__v1di)__count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlq (__m64 __m, __m64 __count)
{
  return _mm_srl_si64 (__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_si64 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrlqi ((__v1di)__m, __count);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlqi (__m64 __m, int __count)
{
  return _mm_srli_si64 (__m, __count);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_pand (__m1, __m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pand (__m64 __m1, __m64 __m2)
{
  return _mm_and_si64 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_pandn (__m1, __m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pandn (__m64 __m1, __m64 __m2)
{
  return _mm_andnot_si64 (__m1, __m2);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_por (__m1, __m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_por (__m64 __m1, __m64 __m2)
{
  return _mm_or_si64 (__m1, __m2);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_pxor (__m1, __m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pxor (__m64 __m1, __m64 __m2)
{
  return _mm_xor_si64 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqb ((__v8qi)__m1, (__v8qi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpeqb (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi8 (__m1, __m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtb ((__v8qi)__m1, (__v8qi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpgtb (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi8 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqw ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpeqw (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi16 (__m1, __m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtw ((__v4hi)__m1, (__v4hi)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpgtw (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi16 (__m1, __m2);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqd ((__v2si)__m1, (__v2si)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpeqd (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi32 (__m1, __m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtd ((__v2si)__m1, (__v2si)__m2);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpgtd (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi32 (__m1, __m2);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_si64 (void)
{
  return (__m64)0LL;

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi32 (int __i1, int __i0)
{
  return (__m64) __builtin_ia32_vec_init_v2si (__i0, __i1);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi16 (short __w3, short __w2, short __w1, short __w0)
{
  return (__m64) __builtin_ia32_vec_init_v4hi (__w0, __w1, __w2, __w3);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi8 (char __b7, char __b6, char __b5, char __b4,
      char __b3, char __b2, char __b1, char __b0)
{
  return (__m64) __builtin_ia32_vec_init_v8qi (__b0, __b1, __b2, __b3,
            __b4, __b5, __b6, __b7);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pi32 (int __i0, int __i1)
{
  return _mm_set_pi32 (__i1, __i0);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pi16 (short __w0, short __w1, short __w2, short __w3)
{
  return _mm_set_pi16 (__w3, __w2, __w1, __w0);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pi8 (char __b0, char __b1, char __b2, char __b3,
       char __b4, char __b5, char __b6, char __b7)
{
  return _mm_set_pi8 (__b7, __b6, __b5, __b4, __b3, __b2, __b1, __b0);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pi32 (int __i)
{
  return _mm_set_pi32 (__i, __i);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pi16 (short __w)
{
  return _mm_set_pi16 (__w, __w, __w, __w);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pi8 (char __b)
{
  return _mm_set_pi8 (__b, __b, __b, __b, __b, __b, __b, __b);

}
# 32 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/mm_malloc.h" 1 3 4
# 27 "/usr/lib/gcc/x86_64-linux-gnu/7/include/mm_malloc.h" 3 4
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long unsigned int size_t;

# 328 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef int wchar_t;

# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;

# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;

    int rem;

  } div_t;




typedef struct
  {
    long int quot;

    long int rem;

  } ldiv_t;






__extension__ typedef struct
  {
    long long int quot;

    long long int rem;

  } lldiv_t;

# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;


extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;


extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;



extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long int __u_long;



typedef signed char __int8_t;

typedef unsigned char __uint8_t;

typedef signed short int __int16_t;

typedef unsigned short int __uint16_t;

typedef signed int __int32_t;

typedef unsigned int __uint32_t;


typedef signed long int __int64_t;

typedef unsigned long int __uint64_t;








typedef long int __quad_t;

typedef unsigned long int __u_quad_t;








typedef long int __intmax_t;

typedef unsigned long int __uintmax_t;

# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long int __ino_t;

typedef unsigned long int __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long int __nlink_t;

typedef long int __off_t;

typedef long int __off64_t;

typedef int __pid_t;

typedef struct { int __val[2];
 } __fsid_t;

typedef long int __clock_t;

typedef unsigned long int __rlim_t;

typedef unsigned long int __rlim64_t;

typedef unsigned int __id_t;

typedef long int __time_t;

typedef unsigned int __useconds_t;

typedef long int __suseconds_t;


typedef int __daddr_t;

typedef int __key_t;



typedef int __clockid_t;



typedef void * __timer_t;



typedef long int __blksize_t;





typedef long int __blkcnt_t;

typedef long int __blkcnt64_t;



typedef unsigned long int __fsblkcnt_t;

typedef unsigned long int __fsblkcnt64_t;



typedef unsigned long int __fsfilcnt_t;

typedef unsigned long int __fsfilcnt64_t;



typedef long int __fsword_t;


typedef long int __ssize_t;



typedef long int __syscall_slong_t;


typedef unsigned long int __syscall_ulong_t;




typedef __off64_t __loff_t;

typedef char *__caddr_t;



typedef long int __intptr_t;



typedef unsigned int __socklen_t;





typedef int __sig_atomic_t;

# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __u_char u_char;

typedef __u_short u_short;

typedef __u_int u_int;

typedef __u_long u_long;

typedef __quad_t quad_t;

typedef __u_quad_t u_quad_t;

typedef __fsid_t fsid_t;





typedef __loff_t loff_t;




typedef __ino_t ino_t;

# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;





typedef __gid_t gid_t;





typedef __mode_t mode_t;





typedef __nlink_t nlink_t;





typedef __uid_t uid_t;






typedef __off_t off_t;

# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;






typedef __id_t id_t;





typedef __ssize_t ssize_t;






typedef __daddr_t daddr_t;

typedef __caddr_t caddr_t;






typedef __key_t key_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;

# 128 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;

# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;

# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;

# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;





# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;

typedef __int16_t int16_t;

typedef __int32_t int32_t;

typedef __int64_t int64_t;

# 157 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 178 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));

typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));

typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));

typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));


typedef int register_t __attribute__ ((__mode__ (__word__)));

# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);

}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);

}
# 61 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;

}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;

}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;

}
# 62 "/usr/include/endian.h" 2 3 4
# 195 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];

} __sigset_t;

# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;

# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;

  __suseconds_t tv_usec;

};

# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 9 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;

  __syscall_slong_t tv_nsec;

};

# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;






typedef long int __fd_mask;

# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];



  } fd_set;







typedef __fd_mask fd_mask;

# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);

# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);

# 126 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 198 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sysmacros.h" 1 3 4
# 42 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 2 3 4
# 71 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


extern unsigned int gnu_dev_major (__dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern unsigned int gnu_dev_minor (__dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern __dev_t gnu_dev_makedev (unsigned int __major, unsigned int __minor) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

# 85 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 206 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4






typedef __blksize_t blksize_t;







typedef __blkcnt_t blkcnt_t;




typedef __fsblkcnt_t fsblkcnt_t;




typedef __fsfilcnt_t fsfilcnt_t;

# 254 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;

  unsigned int __writers;

  unsigned int __wrphase_futex;

  unsigned int __writers_futex;

  unsigned int __pad3;

  unsigned int __pad4;


  int __cur_writer;

  int __shared;

  signed char __rwelision;





  unsigned char __pad1[7];



  unsigned long int __pad2;



  unsigned int __flags;

# 99 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
};

# 78 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;

  struct __pthread_internal_list *__next;

} __pthread_list_t;

# 118 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;

  unsigned int __count;

  int __owner;


  unsigned int __nusers;

# 148 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
  int __kind;

 




  short __spins;
 short __elision;

  __pthread_list_t __list;

# 165 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
 
};





struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;

    struct
    {
      unsigned int __low;

      unsigned int __high;

    } __wseq32;

  };

  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;

    struct
    {
      unsigned int __low;

      unsigned int __high;

    } __g1_start32;

  };

  unsigned int __g_refs[2] ;

  unsigned int __g_size[2];

  unsigned int __g1_orig_size;

  unsigned int __wrefs;

  unsigned int __g_signals[2];

};

# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;





typedef union
{
  char __size[4];

  int __align;

} pthread_mutexattr_t;





typedef union
{
  char __size[4];

  int __align;

} pthread_condattr_t;




typedef unsigned int pthread_key_t;




typedef int pthread_once_t;



union pthread_attr_t
{
  char __size[56];

  long int __align;

};


typedef union pthread_attr_t pthread_attr_t;





typedef union
{
  struct __pthread_mutex_s __data;

  char __size[40];

  long int __align;

} pthread_mutex_t;



typedef union
{
  struct __pthread_cond_s __data;

  char __size[48];

  __extension__ long long int __align;

} pthread_cond_t;






typedef union
{
  struct __pthread_rwlock_arch_t __data;

  char __size[56];

  long int __align;

} pthread_rwlock_t;


typedef union
{
  char __size[8];

  long int __align;

} pthread_rwlockattr_t;






typedef volatile int pthread_spinlock_t;





typedef union
{
  char __size[32];

  long int __align;

} pthread_barrier_t;


typedef union
{
  char __size[4];

  int __align;

} pthread_barrierattr_t;

# 255 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));



extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));






extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));








struct random_data
  {
    int32_t *fptr;

    int32_t *rptr;

    int32_t *state;

    int rand_type;

    int rand_deg;

    int rand_sep;

    int32_t *end_ptr;

  };


extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));


extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));








extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));

extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));

extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));

extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));

extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






struct drand48_data
  {
    unsigned short int __x[3];

    unsigned short int __old_x[3];

    unsigned short int __c;

    unsigned short int __init;

    __extension__ unsigned long long int __a;


  };



extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;


extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

# 563 "/usr/include/stdlib.h" 3 4
extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));







# 567 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;





extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));








extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 644 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));

# 672 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 685 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;

# 707 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;

# 728 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 781 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;

# 797 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;







typedef int (*__compar_fn_t) (const void *, const void *);

# 817 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;








extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

# 837 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 869 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;





extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;





extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;





extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;

extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;

extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;





extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));


extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));



extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));



extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));




extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 954 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;

# 1006 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 1016 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1017 "/usr/include/stdlib.h" 2 3 4
# 1026 "/usr/include/stdlib.h" 3 4

# 28 "/usr/lib/gcc/x86_64-linux-gnu/7/include/mm_malloc.h" 2 3 4




extern int posix_memalign (void **, size_t, size_t);





static __inline void *
_mm_malloc (size_t __size, size_t __alignment)
{
  void *__ptr;

  if (__alignment == 1)
    return malloc (__size);

  if (__alignment == 2 || (sizeof (void *) == 8 && __alignment == 4))
    __alignment = sizeof (void *);

  if (posix_memalign (&__ptr, __alignment, __size) == 0)
    return __ptr;

  else
    return ((void *)0);

}

static __inline void
_mm_free (void *__ptr)
{
  free (__ptr);

}
# 35 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 2 3 4


enum _mm_hint
{

  _MM_HINT_ET0 = 7,
  _MM_HINT_ET1 = 6,
  _MM_HINT_T0 = 3,
  _MM_HINT_T1 = 2,
  _MM_HINT_T2 = 1,
  _MM_HINT_NTA = 0
};

# 69 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 3 4
typedef float __m128 __attribute__ ((__vector_size__ (16), __may_alias__));



typedef float __m128_u __attribute__ ((__vector_size__ (16), __may_alias__, __aligned__ (1)));



typedef float __v4sf __attribute__ ((__vector_size__ (16)));

# 109 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 3 4
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_undefined_ps (void)
{
  __m128 __Y = __Y;

  return __Y;

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_ps (void)
{
  return __extension__ (__m128){ 0.0f, 0.0f, 0.0f, 0.0f };

}





extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_addss ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_subss ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_mulss ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_divss ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_sqrtss ((__v4sf)__A);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rcp_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_rcpss ((__v4sf)__A);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rsqrt_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_rsqrtss ((__v4sf)__A);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_minss ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_maxss ((__v4sf)__A, (__v4sf)__B);

}



extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A + (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A - (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A * (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A / (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_sqrtps ((__v4sf)__A);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rcp_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_rcpps ((__v4sf)__A);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rsqrt_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_rsqrtps ((__v4sf)__A);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_minps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_maxps ((__v4sf)__A, (__v4sf)__B);

}



extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_andps (__A, __B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_andnps (__A, __B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_orps (__A, __B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_xorps (__A, __B);

}





extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpeqss ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpltss ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpless ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpltss ((__v4sf) __B,
        (__v4sf)
        __A));

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpless ((__v4sf) __B,
        (__v4sf)
        __A));

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpneqss ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnltss ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnless ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpnltss ((__v4sf) __B,
         (__v4sf)
         __A));

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpnless ((__v4sf) __B,
         (__v4sf)
         __A));

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpordss ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpunordss ((__v4sf)__A, (__v4sf)__B);

}





extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpeqps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpltps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpleps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpgtps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpgeps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpneqps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnltps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnleps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpngtps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpngeps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpordps ((__v4sf)__A, (__v4sf)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpunordps ((__v4sf)__A, (__v4sf)__B);

}




extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comieq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comieq ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comilt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comilt ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comile_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comile ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comigt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comigt ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comige_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comige ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comineq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comineq ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomieq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomieq ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomilt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomilt ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomile_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomile ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomigt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomigt ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomige_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomige ((__v4sf)__A, (__v4sf)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomineq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomineq ((__v4sf)__A, (__v4sf)__B);

}



extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_si32 (__m128 __A)
{
  return __builtin_ia32_cvtss2si ((__v4sf) __A);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_ss2si (__m128 __A)
{
  return _mm_cvtss_si32 (__A);

}






extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_si64 (__m128 __A)
{
  return __builtin_ia32_cvtss2si64 ((__v4sf) __A);

}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_si64x (__m128 __A)
{
  return __builtin_ia32_cvtss2si64 ((__v4sf) __A);

}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pi32 (__m128 __A)
{
  return (__m64) __builtin_ia32_cvtps2pi ((__v4sf) __A);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_ps2pi (__m128 __A)
{
  return _mm_cvtps_pi32 (__A);

}


extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttss_si32 (__m128 __A)
{
  return __builtin_ia32_cvttss2si ((__v4sf) __A);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtt_ss2si (__m128 __A)
{
  return _mm_cvttss_si32 (__A);

}





extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttss_si64 (__m128 __A)
{
  return __builtin_ia32_cvttss2si64 ((__v4sf) __A);

}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttss_si64x (__m128 __A)
{
  return __builtin_ia32_cvttss2si64 ((__v4sf) __A);

}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttps_pi32 (__m128 __A)
{
  return (__m64) __builtin_ia32_cvttps2pi ((__v4sf) __A);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtt_ps2pi (__m128 __A)
{
  return _mm_cvttps_pi32 (__A);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_ss (__m128 __A, int __B)
{
  return (__m128) __builtin_ia32_cvtsi2ss ((__v4sf) __A, __B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_si2ss (__m128 __A, int __B)
{
  return _mm_cvtsi32_ss (__A, __B);

}





extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_ss (__m128 __A, long long __B)
{
  return (__m128) __builtin_ia32_cvtsi642ss ((__v4sf) __A, __B);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_ss (__m128 __A, long long __B)
{
  return (__m128) __builtin_ia32_cvtsi642ss ((__v4sf) __A, __B);

}




extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi32_ps (__m128 __A, __m64 __B)
{
  return (__m128) __builtin_ia32_cvtpi2ps ((__v4sf) __A, (__v2si)__B);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_pi2ps (__m128 __A, __m64 __B)
{
  return _mm_cvtpi32_ps (__A, __B);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi16_ps (__m64 __A)
{
  __v4hi __sign;

  __v2si __hisi, __losi;

  __v4sf __zero, __ra, __rb;





  __sign = __builtin_ia32_pcmpgtw ((__v4hi)0LL, (__v4hi)__A);



  __losi = (__v2si) __builtin_ia32_punpcklwd ((__v4hi)__A, __sign);

  __hisi = (__v2si) __builtin_ia32_punpckhwd ((__v4hi)__A, __sign);



  __zero = (__v4sf) _mm_setzero_ps ();

  __ra = __builtin_ia32_cvtpi2ps (__zero, __losi);

  __rb = __builtin_ia32_cvtpi2ps (__ra, __hisi);


  return (__m128) __builtin_ia32_movlhps (__ra, __rb);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpu16_ps (__m64 __A)
{
  __v2si __hisi, __losi;

  __v4sf __zero, __ra, __rb;



  __losi = (__v2si) __builtin_ia32_punpcklwd ((__v4hi)__A, (__v4hi)0LL);

  __hisi = (__v2si) __builtin_ia32_punpckhwd ((__v4hi)__A, (__v4hi)0LL);



  __zero = (__v4sf) _mm_setzero_ps ();

  __ra = __builtin_ia32_cvtpi2ps (__zero, __losi);

  __rb = __builtin_ia32_cvtpi2ps (__ra, __hisi);


  return (__m128) __builtin_ia32_movlhps (__ra, __rb);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi8_ps (__m64 __A)
{
  __v8qi __sign;





  __sign = __builtin_ia32_pcmpgtb ((__v8qi)0LL, (__v8qi)__A);



  __A = (__m64) __builtin_ia32_punpcklbw ((__v8qi)__A, __sign);


  return _mm_cvtpi16_ps(__A);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpu8_ps(__m64 __A)
{
  __A = (__m64) __builtin_ia32_punpcklbw ((__v8qi)__A, (__v8qi)0LL);

  return _mm_cvtpu16_ps(__A);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi32x2_ps(__m64 __A, __m64 __B)
{
  __v4sf __zero = (__v4sf) _mm_setzero_ps ();

  __v4sf __sfa = __builtin_ia32_cvtpi2ps (__zero, (__v2si)__A);

  __v4sf __sfb = __builtin_ia32_cvtpi2ps (__sfa, (__v2si)__B);

  return (__m128) __builtin_ia32_movlhps (__sfa, __sfb);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pi16(__m128 __A)
{
  __v4sf __hisf = (__v4sf)__A;

  __v4sf __losf = __builtin_ia32_movhlps (__hisf, __hisf);

  __v2si __hisi = __builtin_ia32_cvtps2pi (__hisf);

  __v2si __losi = __builtin_ia32_cvtps2pi (__losf);

  return (__m64) __builtin_ia32_packssdw (__hisi, __losi);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pi8(__m128 __A)
{
  __v4hi __tmp = (__v4hi) _mm_cvtps_pi16 (__A);

  return (__m64) __builtin_ia32_packsswb (__tmp, (__v4hi)0LL);

}
# 755 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 3 4
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_unpckhps ((__v4sf)__A, (__v4sf)__B);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_unpcklps ((__v4sf)__A, (__v4sf)__B);

}



extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadh_pi (__m128 __A, __m64 const *__P)
{
  return (__m128) __builtin_ia32_loadhps ((__v4sf)__A, (const __v2sf *)__P);

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeh_pi (__m64 *__P, __m128 __A)
{
  __builtin_ia32_storehps ((__v2sf *)__P, (__v4sf)__A);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movehl_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movhlps ((__v4sf)__A, (__v4sf)__B);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movelh_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movlhps ((__v4sf)__A, (__v4sf)__B);

}



extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadl_pi (__m128 __A, __m64 const *__P)
{
  return (__m128) __builtin_ia32_loadlps ((__v4sf)__A, (const __v2sf *)__P);

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storel_pi (__m64 *__P, __m128 __A)
{
  __builtin_ia32_storelps ((__v2sf *)__P, (__v4sf)__A);

}


extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_ps (__m128 __A)
{
  return __builtin_ia32_movmskps ((__v4sf)__A);

}


extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_getcsr (void)
{
  return __builtin_ia32_stmxcsr ();

}


extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_EXCEPTION_STATE (void)
{
  return _mm_getcsr() & 0x003f;

}

extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_EXCEPTION_MASK (void)
{
  return _mm_getcsr() & 0x1f80;

}

extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_ROUNDING_MODE (void)
{
  return _mm_getcsr() & 0x6000;

}

extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_FLUSH_ZERO_MODE (void)
{
  return _mm_getcsr() & 0x8000;

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setcsr (unsigned int __I)
{
  __builtin_ia32_ldmxcsr (__I);

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_EXCEPTION_STATE(unsigned int __mask)
{
  _mm_setcsr((_mm_getcsr() & ~0x003f) | __mask);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_EXCEPTION_MASK (unsigned int __mask)
{
  _mm_setcsr((_mm_getcsr() & ~0x1f80) | __mask);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_ROUNDING_MODE (unsigned int __mode)
{
  _mm_setcsr((_mm_getcsr() & ~0x6000) | __mode);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_FLUSH_ZERO_MODE (unsigned int __mode)
{
  _mm_setcsr((_mm_getcsr() & ~0x8000) | __mode);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_ss (float __F)
{
  return __extension__ (__m128)(__v4sf){ __F, 0.0f, 0.0f, 0.0f };

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_ps (float __F)
{
  return __extension__ (__m128)(__v4sf){ __F, __F, __F, __F };

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_ps1 (float __F)
{
  return _mm_set1_ps (__F);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_ss (float const *__P)
{
  return _mm_set_ss (*__P);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load1_ps (float const *__P)
{
  return _mm_set1_ps (*__P);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_ps1 (float const *__P)
{
  return _mm_load1_ps (__P);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_ps (float const *__P)
{
  return *(__m128 *)__P;

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadu_ps (float const *__P)
{
  return *(__m128_u *)__P;

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadr_ps (float const *__P)
{
  __v4sf __tmp = *(__v4sf *)__P;

  return (__m128) __builtin_ia32_shufps (__tmp, __tmp, (((0) << 6) | ((1) << 4) | ((2) << 2) | (3)));

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_ps (const float __Z, const float __Y, const float __X, const float __W)
{
  return __extension__ (__m128)(__v4sf){ __W, __X, __Y, __Z };

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_ps (float __Z, float __Y, float __X, float __W)
{
  return __extension__ (__m128)(__v4sf){ __Z, __Y, __X, __W };

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_ss (float *__P, __m128 __A)
{
  *__P = ((__v4sf)__A)[0];

}

extern __inline float __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_f32 (__m128 __A)
{
  return ((__v4sf)__A)[0];

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_ps (float *__P, __m128 __A)
{
  *(__m128 *)__P = __A;

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeu_ps (float *__P, __m128 __A)
{
  *(__m128_u *)__P = __A;

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store1_ps (float *__P, __m128 __A)
{
  __v4sf __va = (__v4sf)__A;

  __v4sf __tmp = __builtin_ia32_shufps (__va, __va, (((0) << 6) | ((0) << 4) | ((0) << 2) | (0)));

  _mm_storeu_ps (__P, __tmp);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_ps1 (float *__P, __m128 __A)
{
  _mm_store1_ps (__P, __A);

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storer_ps (float *__P, __m128 __A)
{
  __v4sf __va = (__v4sf)__A;

  __v4sf __tmp = __builtin_ia32_shufps (__va, __va, (((0) << 6) | ((1) << 4) | ((2) << 2) | (3)));

  _mm_store_ps (__P, __tmp);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_move_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf)__A, (__v4sf)__B);

}
# 1060 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 3 4
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_pi16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmaxsw ((__v4hi)__A, (__v4hi)__B);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmaxsw (__m64 __A, __m64 __B)
{
  return _mm_max_pi16 (__A, __B);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmaxub ((__v8qi)__A, (__v8qi)__B);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmaxub (__m64 __A, __m64 __B)
{
  return _mm_max_pu8 (__A, __B);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_pi16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pminsw ((__v4hi)__A, (__v4hi)__B);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pminsw (__m64 __A, __m64 __B)
{
  return _mm_min_pi16 (__A, __B);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pminub ((__v8qi)__A, (__v8qi)__B);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pminub (__m64 __A, __m64 __B)
{
  return _mm_min_pu8 (__A, __B);

}


extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_pi8 (__m64 __A)
{
  return __builtin_ia32_pmovmskb ((__v8qi)__A);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmovmskb (__m64 __A)
{
  return _mm_movemask_pi8 (__A);

}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_pu16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmulhuw ((__v4hi)__A, (__v4hi)__B);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmulhuw (__m64 __A, __m64 __B)
{
  return _mm_mulhi_pu16 (__A, __B);

}
# 1162 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 3 4
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_maskmove_si64 (__m64 __A, __m64 __N, char *__P)
{
  __builtin_ia32_maskmovq ((__v8qi)__A, (__v8qi)__N, __P);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_maskmovq (__m64 __A, __m64 __N, char *__P)
{
  _mm_maskmove_si64 (__A, __N, __P);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pavgb ((__v8qi)__A, (__v8qi)__B);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pavgb (__m64 __A, __m64 __B)
{
  return _mm_avg_pu8 (__A, __B);

}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_pu16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pavgw ((__v4hi)__A, (__v4hi)__B);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pavgw (__m64 __A, __m64 __B)
{
  return _mm_avg_pu16 (__A, __B);

}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sad_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_psadbw ((__v8qi)__A, (__v8qi)__B);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psadbw (__m64 __A, __m64 __B)
{
  return _mm_sad_pu8 (__A, __B);

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_pi (__m64 *__P, __m64 __A)
{
  __builtin_ia32_movntq ((unsigned long long *)__P, (unsigned long long)__A);

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_ps (float *__P, __m128 __A)
{
  __builtin_ia32_movntps (__P, (__v4sf)__A);

}



extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sfence (void)
{
  __builtin_ia32_sfence ();

}
# 1252 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/emmintrin.h" 1 3 4
# 1253 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 2 3 4
# 1264 "/usr/lib/gcc/x86_64-linux-gnu/7/include/xmmintrin.h" 3 4
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_pause (void)
{
  __builtin_ia32_pause ();

}
# 32 "/usr/lib/gcc/x86_64-linux-gnu/7/include/emmintrin.h" 2 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/emmintrin.h" 3 4
typedef double __v2df __attribute__ ((__vector_size__ (16)));

typedef long long __v2di __attribute__ ((__vector_size__ (16)));

typedef unsigned long long __v2du __attribute__ ((__vector_size__ (16)));

typedef int __v4si __attribute__ ((__vector_size__ (16)));

typedef unsigned int __v4su __attribute__ ((__vector_size__ (16)));

typedef short __v8hi __attribute__ ((__vector_size__ (16)));

typedef unsigned short __v8hu __attribute__ ((__vector_size__ (16)));

typedef char __v16qi __attribute__ ((__vector_size__ (16)));

typedef signed char __v16qs __attribute__ ((__vector_size__ (16)));

typedef unsigned char __v16qu __attribute__ ((__vector_size__ (16)));




typedef long long __m128i __attribute__ ((__vector_size__ (16), __may_alias__));

typedef double __m128d __attribute__ ((__vector_size__ (16), __may_alias__));



typedef long long __m128i_u __attribute__ ((__vector_size__ (16), __may_alias__, __aligned__ (1)));

typedef double __m128d_u __attribute__ ((__vector_size__ (16), __may_alias__, __aligned__ (1)));







extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_sd (double __F)
{
  return __extension__ (__m128d){ __F, 0.0 };

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pd (double __F)
{
  return __extension__ (__m128d){ __F, __F };

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pd1 (double __F)
{
  return _mm_set1_pd (__F);

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pd (double __W, double __X)
{
  return __extension__ (__m128d){ __X, __W };

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pd (double __W, double __X)
{
  return __extension__ (__m128d){ __W, __X };

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_undefined_pd (void)
{
  __m128d __Y = __Y;

  return __Y;

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_pd (void)
{
  return __extension__ (__m128d){ 0.0, 0.0 };

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_move_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df)__A, (__v2df)__B);

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_pd (double const *__P)
{
  return *(__m128d *)__P;

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadu_pd (double const *__P)
{
  return *(__m128d_u *)__P;

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load1_pd (double const *__P)
{
  return _mm_set1_pd (*__P);

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_sd (double const *__P)
{
  return _mm_set_sd (*__P);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_pd1 (double const *__P)
{
  return _mm_load1_pd (__P);

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadr_pd (double const *__P)
{
  __m128d __tmp = _mm_load_pd (__P);

  return __builtin_ia32_shufpd (__tmp, __tmp, (((0) << 1) | (1)));

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_pd (double *__P, __m128d __A)
{
  *(__m128d *)__P = __A;

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeu_pd (double *__P, __m128d __A)
{
  *(__m128d_u *)__P = __A;

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_sd (double *__P, __m128d __A)
{
  *__P = ((__v2df)__A)[0];

}

extern __inline double __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_f64 (__m128d __A)
{
  return ((__v2df)__A)[0];

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storel_pd (double *__P, __m128d __A)
{
  _mm_store_sd (__P, __A);

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeh_pd (double *__P, __m128d __A)
{
  *__P = ((__v2df)__A)[1];

}



extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store1_pd (double *__P, __m128d __A)
{
  _mm_store_pd (__P, __builtin_ia32_shufpd (__A, __A, (((0) << 1) | (0))));

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_pd1 (double *__P, __m128d __A)
{
  _mm_store1_pd (__P, __A);

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storer_pd (double *__P, __m128d __A)
{
  _mm_store_pd (__P, __builtin_ia32_shufpd (__A, __A, (((0) << 1) | (1))));

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi128_si32 (__m128i __A)
{
  return __builtin_ia32_vec_ext_v4si ((__v4si)__A, 0);

}



extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi128_si64 (__m128i __A)
{
  return ((__v2di)__A)[0];

}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi128_si64x (__m128i __A)
{
  return ((__v2di)__A)[0];

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A + (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_addsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A - (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_subsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A * (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_mulsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A / (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_divsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_pd (__m128d __A)
{
  return (__m128d)__builtin_ia32_sqrtpd ((__v2df)__A);

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_sd (__m128d __A, __m128d __B)
{
  __v2df __tmp = __builtin_ia32_movsd ((__v2df)__A, (__v2df)__B);

  return (__m128d)__builtin_ia32_sqrtsd ((__v2df)__tmp);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_minpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_minsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_maxpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_maxsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_andpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_andnpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_orpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_xorpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpeqpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpltpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmplepd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpgtpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpgepd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpneqpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnltpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnlepd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpngtpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpngepd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpordpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpunordpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpeqsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpltsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmplesd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpltsd ((__v2df) __B,
         (__v2df)
         __A));

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmplesd ((__v2df) __B,
         (__v2df)
         __A));

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpneqsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnltsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnlesd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpnltsd ((__v2df) __B,
          (__v2df)
          __A));

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpnlesd ((__v2df) __B,
          (__v2df)
          __A));

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpordsd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpunordsd ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comieq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdeq ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comilt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdlt ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comile_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdle ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comigt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdgt ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comige_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdge ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comineq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdneq ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomieq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdeq ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomilt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdlt ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomile_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdle ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomigt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdgt ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomige_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdge ((__v2df)__A, (__v2df)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomineq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdneq ((__v2df)__A, (__v2df)__B);

}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi64x (long long __q1, long long __q0)
{
  return __extension__ (__m128i)(__v2di){ __q0, __q1 };

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi64 (__m64 __q1, __m64 __q0)
{
  return _mm_set_epi64x ((long long)__q1, (long long)__q0);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi32 (int __q3, int __q2, int __q1, int __q0)
{
  return __extension__ (__m128i)(__v4si){ __q0, __q1, __q2, __q3 };

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi16 (short __q7, short __q6, short __q5, short __q4,
        short __q3, short __q2, short __q1, short __q0)
{
  return __extension__ (__m128i)(__v8hi){
    __q0, __q1, __q2, __q3, __q4, __q5, __q6, __q7 };

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi8 (char __q15, char __q14, char __q13, char __q12,
       char __q11, char __q10, char __q09, char __q08,
       char __q07, char __q06, char __q05, char __q04,
       char __q03, char __q02, char __q01, char __q00)
{
  return __extension__ (__m128i)(__v16qi){
    __q00, __q01, __q02, __q03, __q04, __q05, __q06, __q07,
    __q08, __q09, __q10, __q11, __q12, __q13, __q14, __q15
  };

}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi64x (long long __A)
{
  return _mm_set_epi64x (__A, __A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi64 (__m64 __A)
{
  return _mm_set_epi64 (__A, __A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi32 (int __A)
{
  return _mm_set_epi32 (__A, __A, __A, __A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi16 (short __A)
{
  return _mm_set_epi16 (__A, __A, __A, __A, __A, __A, __A, __A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi8 (char __A)
{
  return _mm_set_epi8 (__A, __A, __A, __A, __A, __A, __A, __A,
         __A, __A, __A, __A, __A, __A, __A, __A);

}




extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi64 (__m64 __q0, __m64 __q1)
{
  return _mm_set_epi64 (__q1, __q0);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi32 (int __q0, int __q1, int __q2, int __q3)
{
  return _mm_set_epi32 (__q3, __q2, __q1, __q0);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi16 (short __q0, short __q1, short __q2, short __q3,
         short __q4, short __q5, short __q6, short __q7)
{
  return _mm_set_epi16 (__q7, __q6, __q5, __q4, __q3, __q2, __q1, __q0);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi8 (char __q00, char __q01, char __q02, char __q03,
        char __q04, char __q05, char __q06, char __q07,
        char __q08, char __q09, char __q10, char __q11,
        char __q12, char __q13, char __q14, char __q15)
{
  return _mm_set_epi8 (__q15, __q14, __q13, __q12, __q11, __q10, __q09, __q08,
         __q07, __q06, __q05, __q04, __q03, __q02, __q01, __q00);

}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_si128 (__m128i const *__P)
{
  return *__P;

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadu_si128 (__m128i_u const *__P)
{
  return *__P;

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadl_epi64 (__m128i_u const *__P)
{
  return _mm_set_epi64 ((__m64)0LL, *(__m64_u *)__P);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_si128 (__m128i *__P, __m128i __B)
{
  *__P = __B;

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeu_si128 (__m128i_u *__P, __m128i __B)
{
  *__P = __B;

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storel_epi64 (__m128i_u *__P, __m128i __B)
{
  *(__m64_u *)__P = (__m64) ((__v2di)__B)[0];

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movepi64_pi64 (__m128i __B)
{
  return (__m64) ((__v2di)__B)[0];

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movpi64_epi64 (__m64 __A)
{
  return _mm_set_epi64 ((__m64)0LL, __A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_move_epi64 (__m128i __A)
{
  return (__m128i)__builtin_ia32_movq128 ((__v2di) __A);

}


extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_undefined_si128 (void)
{
  __m128i __Y = __Y;

  return __Y;

}


extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_si128 (void)
{
  return __extension__ (__m128i)(__v4si){ 0, 0, 0, 0 };

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi32_pd (__m128i __A)
{
  return (__m128d)__builtin_ia32_cvtdq2pd ((__v4si) __A);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi32_ps (__m128i __A)
{
  return (__m128)__builtin_ia32_cvtdq2ps ((__v4si) __A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpd_epi32 (__m128d __A)
{
  return (__m128i)__builtin_ia32_cvtpd2dq ((__v2df) __A);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpd_pi32 (__m128d __A)
{
  return (__m64)__builtin_ia32_cvtpd2pi ((__v2df) __A);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpd_ps (__m128d __A)
{
  return (__m128)__builtin_ia32_cvtpd2ps ((__v2df) __A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttpd_epi32 (__m128d __A)
{
  return (__m128i)__builtin_ia32_cvttpd2dq ((__v2df) __A);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttpd_pi32 (__m128d __A)
{
  return (__m64)__builtin_ia32_cvttpd2pi ((__v2df) __A);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi32_pd (__m64 __A)
{
  return (__m128d)__builtin_ia32_cvtpi2pd ((__v2si) __A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_epi32 (__m128 __A)
{
  return (__m128i)__builtin_ia32_cvtps2dq ((__v4sf) __A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttps_epi32 (__m128 __A)
{
  return (__m128i)__builtin_ia32_cvttps2dq ((__v4sf) __A);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pd (__m128 __A)
{
  return (__m128d)__builtin_ia32_cvtps2pd ((__v4sf) __A);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_si32 (__m128d __A)
{
  return __builtin_ia32_cvtsd2si ((__v2df) __A);

}



extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_si64 (__m128d __A)
{
  return __builtin_ia32_cvtsd2si64 ((__v2df) __A);

}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_si64x (__m128d __A)
{
  return __builtin_ia32_cvtsd2si64 ((__v2df) __A);

}


extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttsd_si32 (__m128d __A)
{
  return __builtin_ia32_cvttsd2si ((__v2df) __A);

}



extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttsd_si64 (__m128d __A)
{
  return __builtin_ia32_cvttsd2si64 ((__v2df) __A);

}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttsd_si64x (__m128d __A)
{
  return __builtin_ia32_cvttsd2si64 ((__v2df) __A);

}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_ss (__m128 __A, __m128d __B)
{
  return (__m128)__builtin_ia32_cvtsd2ss ((__v4sf) __A, (__v2df) __B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_sd (__m128d __A, int __B)
{
  return (__m128d)__builtin_ia32_cvtsi2sd ((__v2df) __A, __B);

}



extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_sd (__m128d __A, long long __B)
{
  return (__m128d)__builtin_ia32_cvtsi642sd ((__v2df) __A, __B);

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_sd (__m128d __A, long long __B)
{
  return (__m128d)__builtin_ia32_cvtsi642sd ((__v2df) __A, __B);

}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_sd (__m128d __A, __m128 __B)
{
  return (__m128d)__builtin_ia32_cvtss2sd ((__v2df) __A, (__v4sf)__B);

}
# 919 "/usr/lib/gcc/x86_64-linux-gnu/7/include/emmintrin.h" 3 4
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_unpckhpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_unpcklpd ((__v2df)__A, (__v2df)__B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadh_pd (__m128d __A, double const *__B)
{
  return (__m128d)__builtin_ia32_loadhpd ((__v2df)__A, __B);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadl_pd (__m128d __A, double const *__B)
{
  return (__m128d)__builtin_ia32_loadlpd ((__v2df)__A, __B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_pd (__m128d __A)
{
  return __builtin_ia32_movmskpd ((__v2df)__A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_packsswb128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_packssdw128 ((__v4si)__A, (__v4si)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packus_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_packuswb128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhbw128 ((__v16qi)__A, (__v16qi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhwd128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhdq128 ((__v4si)__A, (__v4si)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhqdq128 ((__v2di)__A, (__v2di)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpcklbw128 ((__v16qi)__A, (__v16qi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpcklwd128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckldq128 ((__v4si)__A, (__v4si)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpcklqdq128 ((__v2di)__A, (__v2di)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qu)__A + (__v16qu)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hu)__A + (__v8hu)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4su)__A + (__v4su)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A + (__v2du)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddsb128 ((__v16qi)__A, (__v16qi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddsw128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddusb128 ((__v16qi)__A, (__v16qi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddusw128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qu)__A - (__v16qu)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hu)__A - (__v8hu)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4su)__A - (__v4su)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A - (__v2du)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubsb128 ((__v16qi)__A, (__v16qi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubsw128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubusb128 ((__v16qi)__A, (__v16qi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubusw128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_madd_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmaddwd128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmulhw128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mullo_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hu)__A * (__v8hu)__B);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_su32 (__m64 __A, __m64 __B)
{
  return (__m64)__builtin_ia32_pmuludq ((__v2si)__A, (__v2si)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_epu32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmuludq128 ((__v4si)__A, (__v4si)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_epi16 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psllwi128 ((__v8hi)__A, __B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_epi32 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_pslldi128 ((__v4si)__A, __B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_epi64 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psllqi128 ((__v2di)__A, __B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_epi16 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrawi128 ((__v8hi)__A, __B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_epi32 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psradi128 ((__v4si)__A, __B);

}
# 1206 "/usr/lib/gcc/x86_64-linux-gnu/7/include/emmintrin.h" 3 4
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_epi16 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrlwi128 ((__v8hi)__A, __B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_epi32 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrldi128 ((__v4si)__A, __B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_epi64 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrlqi128 ((__v2di)__A, __B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psllw128((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pslld128((__v4si)__A, (__v4si)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psllq128((__v2di)__A, (__v2di)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psraw128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrad128 ((__v4si)__A, (__v4si)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrlw128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrld128 ((__v4si)__A, (__v4si)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrlq128 ((__v2di)__A, (__v2di)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_si128 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A & (__v2du)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_si128 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pandn128 ((__v2di)__A, (__v2di)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_si128 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A | (__v2du)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_si128 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A ^ (__v2du)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qi)__A == (__v16qi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hi)__A == (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4si)__A == (__v4si)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qs)__A < (__v16qs)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hi)__A < (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4si)__A < (__v4si)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qs)__A > (__v16qs)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hi)__A > (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4si)__A > (__v4si)__B);

}
# 1370 "/usr/lib/gcc/x86_64-linux-gnu/7/include/emmintrin.h" 3 4
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmaxsw128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmaxub128 ((__v16qi)__A, (__v16qi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pminsw128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pminub128 ((__v16qi)__A, (__v16qi)__B);

}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_epi8 (__m128i __A)
{
  return __builtin_ia32_pmovmskb128 ((__v16qi)__A);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmulhuw128 ((__v8hi)__A, (__v8hi)__B);

}
# 1433 "/usr/lib/gcc/x86_64-linux-gnu/7/include/emmintrin.h" 3 4
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_maskmoveu_si128 (__m128i __A, __m128i __B, char *__C)
{
  __builtin_ia32_maskmovdqu ((__v16qi)__A, (__v16qi)__B, __C);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pavgb128 ((__v16qi)__A, (__v16qi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pavgw128 ((__v8hi)__A, (__v8hi)__B);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sad_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psadbw128 ((__v16qi)__A, (__v16qi)__B);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_si32 (int *__A, int __B)
{
  __builtin_ia32_movnti (__A, __B);

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_si64 (long long int *__A, long long int __B)
{
  __builtin_ia32_movnti64 (__A, __B);

}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_si128 (__m128i *__A, __m128i __B)
{
  __builtin_ia32_movntdq ((__v2di *)__A, (__v2di)__B);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_pd (double *__A, __m128d __B)
{
  __builtin_ia32_movntpd (__A, (__v2df)__B);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_clflush (void const *__A)
{
  __builtin_ia32_clflush (__A);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_lfence (void)
{
  __builtin_ia32_lfence ();

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mfence (void)
{
  __builtin_ia32_mfence ();

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_si128 (int __A)
{
  return _mm_set_epi32 (0, 0, 0, __A);

}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_si128 (long long __A)
{
  return _mm_set_epi64x (0, __A);

}


extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_si128 (long long __A)
{
  return _mm_set_epi64x (0, __A);

}




extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castpd_ps(__m128d __A)
{
  return (__m128) __A;

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castpd_si128(__m128d __A)
{
  return (__m128i) __A;

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castps_pd(__m128 __A)
{
  return (__m128d) __A;

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castps_si128(__m128 __A)
{
  return (__m128i) __A;

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castsi128_ps(__m128i __A)
{
  return (__m128) __A;

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castsi128_pd(__m128i __A)
{
  return (__m128d) __A;

}
# 32 "/usr/lib/gcc/x86_64-linux-gnu/7/include/pmmintrin.h" 2 3 4


#pragma GCC push_options
#pragma GCC target("sse3")
# 49 "/usr/lib/gcc/x86_64-linux-gnu/7/include/pmmintrin.h" 3 4
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_addsub_ps (__m128 __X, __m128 __Y)
{
  return (__m128) __builtin_ia32_addsubps ((__v4sf)__X, (__v4sf)__Y);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hadd_ps (__m128 __X, __m128 __Y)
{
  return (__m128) __builtin_ia32_haddps ((__v4sf)__X, (__v4sf)__Y);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hsub_ps (__m128 __X, __m128 __Y)
{
  return (__m128) __builtin_ia32_hsubps ((__v4sf)__X, (__v4sf)__Y);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movehdup_ps (__m128 __X)
{
  return (__m128) __builtin_ia32_movshdup ((__v4sf)__X);

}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_moveldup_ps (__m128 __X)
{
  return (__m128) __builtin_ia32_movsldup ((__v4sf)__X);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_addsub_pd (__m128d __X, __m128d __Y)
{
  return (__m128d) __builtin_ia32_addsubpd ((__v2df)__X, (__v2df)__Y);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hadd_pd (__m128d __X, __m128d __Y)
{
  return (__m128d) __builtin_ia32_haddpd ((__v2df)__X, (__v2df)__Y);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hsub_pd (__m128d __X, __m128d __Y)
{
  return (__m128d) __builtin_ia32_hsubpd ((__v2df)__X, (__v2df)__Y);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loaddup_pd (double const *__P)
{
  return _mm_load1_pd (__P);

}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movedup_pd (__m128d __X)
{
  return ((__m128d)__builtin_ia32_shufpd ((__v2df)(__m128d)(__X), (__v2df)(__m128d)(__X), (int)((((0) << 1) | (0)))));

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_lddqu_si128 (__m128i const *__P)
{
  return (__m128i) __builtin_ia32_lddqu ((char const *)__P);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_monitor (void const * __P, unsigned int __E, unsigned int __H)
{
  __builtin_ia32_monitor (__P, __E, __H);

}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mwait (unsigned int __E, unsigned int __H)
{
  __builtin_ia32_mwait (__E, __H);

}



#pragma GCC pop_options
# 32 "/usr/lib/gcc/x86_64-linux-gnu/7/include/tmmintrin.h" 2 3 4


#pragma GCC push_options
#pragma GCC target("ssse3")



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hadd_epi16 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_phaddw128 ((__v8hi)__X, (__v8hi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hadd_epi32 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_phaddd128 ((__v4si)__X, (__v4si)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hadds_epi16 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_phaddsw128 ((__v8hi)__X, (__v8hi)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hadd_pi16 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_phaddw ((__v4hi)__X, (__v4hi)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hadd_pi32 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_phaddd ((__v2si)__X, (__v2si)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hadds_pi16 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_phaddsw ((__v4hi)__X, (__v4hi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hsub_epi16 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_phsubw128 ((__v8hi)__X, (__v8hi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hsub_epi32 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_phsubd128 ((__v4si)__X, (__v4si)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hsubs_epi16 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_phsubsw128 ((__v8hi)__X, (__v8hi)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hsub_pi16 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_phsubw ((__v4hi)__X, (__v4hi)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hsub_pi32 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_phsubd ((__v2si)__X, (__v2si)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_hsubs_pi16 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_phsubsw ((__v4hi)__X, (__v4hi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_maddubs_epi16 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pmaddubsw128 ((__v16qi)__X, (__v16qi)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_maddubs_pi16 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_pmaddubsw ((__v8qi)__X, (__v8qi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhrs_epi16 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pmulhrsw128 ((__v8hi)__X, (__v8hi)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhrs_pi16 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_pmulhrsw ((__v4hi)__X, (__v4hi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_shuffle_epi8 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pshufb128 ((__v16qi)__X, (__v16qi)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_shuffle_pi8 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_pshufb ((__v8qi)__X, (__v8qi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sign_epi8 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_psignb128 ((__v16qi)__X, (__v16qi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sign_epi16 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_psignw128 ((__v8hi)__X, (__v8hi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sign_epi32 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_psignd128 ((__v4si)__X, (__v4si)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sign_pi8 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_psignb ((__v8qi)__X, (__v8qi)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sign_pi16 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_psignw ((__v4hi)__X, (__v4hi)__Y);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sign_pi32 (__m64 __X, __m64 __Y)
{
  return (__m64) __builtin_ia32_psignd ((__v2si)__X, (__v2si)__Y);

}
# 208 "/usr/lib/gcc/x86_64-linux-gnu/7/include/tmmintrin.h" 3 4
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_abs_epi8 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pabsb128 ((__v16qi)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_abs_epi16 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pabsw128 ((__v8hi)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_abs_epi32 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pabsd128 ((__v4si)__X);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_abs_pi8 (__m64 __X)
{
  return (__m64) __builtin_ia32_pabsb ((__v8qi)__X);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_abs_pi16 (__m64 __X)
{
  return (__m64) __builtin_ia32_pabsw ((__v4hi)__X);

}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_abs_pi32 (__m64 __X)
{
  return (__m64) __builtin_ia32_pabsd ((__v2si)__X);

}



#pragma GCC pop_options
# 33 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 2 3 4


#pragma GCC push_options
#pragma GCC target("sse4.1")
# 66 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 3 4
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_testz_si128 (__m128i __M, __m128i __V)
{
  return __builtin_ia32_ptestz128 ((__v2di)__M, (__v2di)__V);

}



extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_testc_si128 (__m128i __M, __m128i __V)
{
  return __builtin_ia32_ptestc128 ((__v2di)__M, (__v2di)__V);

}



extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_testnzc_si128 (__m128i __M, __m128i __V)
{
  return __builtin_ia32_ptestnzc128 ((__v2di)__M, (__v2di)__V);

}
# 178 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 3 4
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_blendv_epi8 (__m128i __X, __m128i __Y, __m128i __M)
{
  return (__m128i) __builtin_ia32_pblendvb128 ((__v16qi)__X,
            (__v16qi)__Y,
            (__v16qi)__M);

}
# 203 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 3 4
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_blendv_ps (__m128 __X, __m128 __Y, __m128 __M)
{
  return (__m128) __builtin_ia32_blendvps ((__v4sf)__X,
        (__v4sf)__Y,
        (__v4sf)__M);

}
# 228 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 3 4
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_blendv_pd (__m128d __X, __m128d __Y, __m128d __M)
{
  return (__m128d) __builtin_ia32_blendvpd ((__v2df)__X,
         (__v2df)__Y,
         (__v2df)__M);

}
# 267 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 3 4
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_epi64 (__m128i __X, __m128i __Y)
{
  return (__m128i) ((__v2di)__X == (__v2di)__Y);

}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_epi8 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pminsb128 ((__v16qi)__X, (__v16qi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_epi8 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pmaxsb128 ((__v16qi)__X, (__v16qi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_epu16 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pminuw128 ((__v8hi)__X, (__v8hi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_epu16 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pmaxuw128 ((__v8hi)__X, (__v8hi)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_epi32 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pminsd128 ((__v4si)__X, (__v4si)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_epi32 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pmaxsd128 ((__v4si)__X, (__v4si)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_epu32 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pminud128 ((__v4si)__X, (__v4si)__Y);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_epu32 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pmaxud128 ((__v4si)__X, (__v4si)__Y);

}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mullo_epi32 (__m128i __X, __m128i __Y)
{
  return (__m128i) ((__v4su)__X * (__v4su)__Y);

}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_epi32 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_pmuldq128 ((__v4si)__X, (__v4si)__Y);

}
# 473 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 3 4
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_minpos_epu16 (__m128i __X)
{
  return (__m128i) __builtin_ia32_phminposuw128 ((__v8hi)__X);

}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi8_epi32 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovsxbd128 ((__v16qi)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi16_epi32 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovsxwd128 ((__v8hi)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi8_epi64 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovsxbq128 ((__v16qi)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi32_epi64 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovsxdq128 ((__v4si)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi16_epi64 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovsxwq128 ((__v8hi)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi8_epi16 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovsxbw128 ((__v16qi)__X);

}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepu8_epi32 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovzxbd128 ((__v16qi)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepu16_epi32 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovzxwd128 ((__v8hi)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepu8_epi64 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovzxbq128 ((__v16qi)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepu32_epi64 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovzxdq128 ((__v4si)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepu16_epi64 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovzxwq128 ((__v8hi)__X);

}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepu8_epi16 (__m128i __X)
{
  return (__m128i) __builtin_ia32_pmovzxbw128 ((__v16qi)__X);

}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packus_epi32 (__m128i __X, __m128i __Y)
{
  return (__m128i) __builtin_ia32_packusdw128 ((__v4si)__X, (__v4si)__Y);

}
# 581 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 3 4
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_load_si128 (__m128i *__X)
{
  return (__m128i) __builtin_ia32_movntdqa ((__v2di *) __X);

}


#pragma GCC push_options
#pragma GCC target("sse4.2")
# 795 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 3 4
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_epi64 (__m128i __X, __m128i __Y)
{
  return (__m128i) ((__v2di)__X > (__v2di)__Y);

}



#pragma GCC pop_options




#pragma GCC pop_options


# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/popcntintrin.h" 1 3 4
# 28 "/usr/lib/gcc/x86_64-linux-gnu/7/include/popcntintrin.h" 3 4
#pragma GCC push_options
#pragma GCC target("popcnt")




extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_popcnt_u32 (unsigned int __X)
{
  return __builtin_popcount (__X);

}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_popcnt_u64 (unsigned long long __X)
{
  return __builtin_popcountll (__X);

}




#pragma GCC pop_options
# 812 "/usr/lib/gcc/x86_64-linux-gnu/7/include/smmintrin.h" 2 3 4


#pragma GCC push_options
#pragma GCC target("sse4.1")




#pragma GCC push_options
#pragma GCC target("sse4.2")




extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_crc32_u8 (unsigned int __C, unsigned char __V)
{
  return __builtin_ia32_crc32qi (__C, __V);

}

extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_crc32_u16 (unsigned int __C, unsigned short __V)
{
  return __builtin_ia32_crc32hi (__C, __V);

}

extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_crc32_u32 (unsigned int __C, unsigned int __V)
{
  return __builtin_ia32_crc32si (__C, __V);

}


extern __inline unsigned long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_crc32_u64 (unsigned long long __C, unsigned long long __V)
{
  return __builtin_ia32_crc32di (__C, __V);

}




#pragma GCC pop_options




#pragma GCC pop_options
# 2 "convolve5x5_sse.c" 2
# 1 "common_simd.h" 1
# 3 "convolve5x5_sse.c" 2




# 6 "convolve5x5_sse.c"
void convolve_5x5_1_sse(float* output, float* image, float* weight, long count, long outputStride, long inputStride) {
  long i = 0;

  long alignedCount4 = count & 0xFFFFFFFC;

  float* output0 = output;

  for (;
 i < alignedCount4;
 i+=4) {
    { __m128 sum0;
 sum0 = _mm_loadu_ps(output0);
 __m128 weight0;
 __m128 weight1;
 __m128 weight2;
 __m128 weight3;
 __m128 weight4;
 float* input0 = image + i;
 float* input1 = input0 + inputStride;
 float* input2 = input1 + inputStride;
 float* input3 = input2 + inputStride;
 float* input4 = input3 + inputStride;
 __m128 image0;
 __m128 image1;
 __m128 image2;
 __m128 image3;
 __m128 image4;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 0));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 0));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 0));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 0));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 0));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 1));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 1));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 1));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 1));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 1));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 2));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 2));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 2));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 2));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 2));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 3));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 3));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 3));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 3));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 3));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 4));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 4));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 4));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 4));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 4));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 _mm_storeu_ps(output0, sum0);
 output0 += sizeof(__m128) / sizeof(float);
 }
  }
  for (;
 i < (count);
 i++) {
    float output0 = output[i + outputStride * 0];

    int row;

    for (row = 0;
 row < 5;
 row++) {
      int col;

      for (col = 0;
 col < 5;
 col++) {
        output0 += weight[5 * row + col] * image[i + (row + 0) * inputStride + col];

      }
    }
    output[i + outputStride * 0] = output0;

  }
}

void convolve_5x5_2_sse(float* output, float* image, float* weight, long count, long outputStride, long inputStride) {
  long i = 0;

  long alignedCount4 = count & 0xFFFFFFFC;

  float* output0 = output;
 float* output1 = output0 + outputStride;

  for (;
 i < alignedCount4;
 i+=4) {
    { __m128 sum0;
 __m128 sum1;
 sum0 = _mm_loadu_ps(output0);
 sum1 = _mm_loadu_ps(output1);
 __m128 weight0;
 __m128 weight1;
 __m128 weight2;
 __m128 weight3;
 __m128 weight4;
 float* input0 = image + i;
 float* input1 = input0 + inputStride;
 float* input2 = input1 + inputStride;
 float* input3 = input2 + inputStride;
 float* input4 = input3 + inputStride;
 float* input5 = input4 + inputStride;
 __m128 image0;
 __m128 image1;
 __m128 image2;
 __m128 image3;
 __m128 image4;
 __m128 image5;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 0));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 0));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 0));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 0));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 0));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 1));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 1));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 1));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 1));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 1));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 2));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 2));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 2));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 2));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 2));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 3));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 3));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 3));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 3));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 3));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 4));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 4));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 4));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 4));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 4));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 _mm_storeu_ps(output0, sum0);
 _mm_storeu_ps(output1, sum1);
 output0 += sizeof(__m128) / sizeof(float);
 output1 += sizeof(__m128) / sizeof(float);
 }
  }
  for (;
 i < (count);
 i++) {
    float output0 = output[i + outputStride * 0];

    float output1 = output[i + outputStride * 1];

    int row;

    for (row = 0;
 row < 5;
 row++) {
      int col;

      for (col = 0;
 col < 5;
 col++) {
        output0 += weight[5 * row + col] * image[i + (row + 0) * inputStride + col];

        output1 += weight[5 * row + col] * image[i + (row + 1) * inputStride + col];

      }
    }
    output[i + outputStride * 0] = output0;

    output[i + outputStride * 1] = output1;

  }
}

void convolve_5x5_4_sse(float* output, float* image, float* weight, long count, long outputStride, long inputStride) {
  long i = 0;

  long alignedCount4 = count & 0xFFFFFFFC;

  float* output0 = output;
 float* output1 = output0 + outputStride;
 float* output2 = output1 + outputStride;
 float* output3 = output2 + outputStride;

  for (;
 i < alignedCount4;
 i+=4) {
    { __m128 sum0;
 __m128 sum1;
 __m128 sum2;
 __m128 sum3;
 sum0 = _mm_loadu_ps(output0);
 sum1 = _mm_loadu_ps(output1);
 sum2 = _mm_loadu_ps(output2);
 sum3 = _mm_loadu_ps(output3);
 __m128 weight0;
 __m128 weight1;
 __m128 weight2;
 __m128 weight3;
 __m128 weight4;
 float* input0 = image + i;
 float* input1 = input0 + inputStride;
 float* input2 = input1 + inputStride;
 float* input3 = input2 + inputStride;
 float* input4 = input3 + inputStride;
 float* input5 = input4 + inputStride;
 float* input6 = input5 + inputStride;
 float* input7 = input6 + inputStride;
 __m128 image0;
 __m128 image1;
 __m128 image2;
 __m128 image3;
 __m128 image4;
 __m128 image5;
 __m128 image6;
 __m128 image7;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 0));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 0));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 0));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 0));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 0));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 1));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 1));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 1));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 1));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 1));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 2));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 2));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 2));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 2));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 2));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 3));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 3));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 3));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 3));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 3));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 4));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 4));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 4));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 4));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 4));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 _mm_storeu_ps(output0, sum0);
 _mm_storeu_ps(output1, sum1);
 _mm_storeu_ps(output2, sum2);
 _mm_storeu_ps(output3, sum3);
 output0 += sizeof(__m128) / sizeof(float);
 output1 += sizeof(__m128) / sizeof(float);
 output2 += sizeof(__m128) / sizeof(float);
 output3 += sizeof(__m128) / sizeof(float);
 }
  }
  for (;
 i < (count);
 i++) {
    float output0 = output[i + outputStride * 0];

    float output1 = output[i + outputStride * 1];

    float output2 = output[i + outputStride * 2];

    float output3 = output[i + outputStride * 3];

    int row;

    for (row = 0;
 row < 5;
 row++) {
      int col;

      for (col = 0;
 col < 5;
 col++) {
        output0 += weight[5 * row + col] * image[i + (row + 0) * inputStride + col];

        output1 += weight[5 * row + col] * image[i + (row + 1) * inputStride + col];

        output2 += weight[5 * row + col] * image[i + (row + 2) * inputStride + col];

        output3 += weight[5 * row + col] * image[i + (row + 3) * inputStride + col];

      }
    }
    output[i + outputStride * 0] = output0;

    output[i + outputStride * 1] = output1;

    output[i + outputStride * 2] = output2;

    output[i + outputStride * 3] = output3;

  }
}

void convolve_5x5_6_sse(float* output, float* image, float* weight, long count, long outputStride, long inputStride) {
  long i = 0;

  long alignedCount4 = count & 0xFFFFFFFC;

  float* output0 = output;
 float* output1 = output0 + outputStride;
 float* output2 = output1 + outputStride;
 float* output3 = output2 + outputStride;
 float* output4 = output3 + outputStride;
 float* output5 = output4 + outputStride;

  for (;
 i < alignedCount4;
 i+=4) {
    { __m128 sum0;
 __m128 sum1;
 __m128 sum2;
 __m128 sum3;
 __m128 sum4;
 __m128 sum5;
 sum0 = _mm_loadu_ps(output0);
 sum1 = _mm_loadu_ps(output1);
 sum2 = _mm_loadu_ps(output2);
 sum3 = _mm_loadu_ps(output3);
 sum4 = _mm_loadu_ps(output4);
 sum5 = _mm_loadu_ps(output5);
 __m128 weight0;
 __m128 weight1;
 __m128 weight2;
 __m128 weight3;
 __m128 weight4;
 float* input0 = image + i;
 float* input1 = input0 + inputStride;
 float* input2 = input1 + inputStride;
 float* input3 = input2 + inputStride;
 float* input4 = input3 + inputStride;
 float* input5 = input4 + inputStride;
 float* input6 = input5 + inputStride;
 float* input7 = input6 + inputStride;
 float* input8 = input7 + inputStride;
 float* input9 = input8 + inputStride;
 __m128 image0;
 __m128 image1;
 __m128 image2;
 __m128 image3;
 __m128 image4;
 __m128 image5;
 __m128 image6;
 __m128 image7;
 __m128 image8;
 __m128 image9;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 0));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 0));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 0));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 0));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 0));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 image8 = _mm_loadu_ps(input8);
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight0, image4));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight1, image5));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight2, image6));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight3, image7));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight4, image8));
 image9 = _mm_loadu_ps(input9);
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight0, image5));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight1, image6));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight2, image7));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight3, image8));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight4, image9));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 input8++;
 input9++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 1));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 1));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 1));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 1));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 1));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 image8 = _mm_loadu_ps(input8);
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight0, image4));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight1, image5));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight2, image6));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight3, image7));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight4, image8));
 image9 = _mm_loadu_ps(input9);
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight0, image5));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight1, image6));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight2, image7));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight3, image8));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight4, image9));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 input8++;
 input9++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 2));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 2));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 2));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 2));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 2));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 image8 = _mm_loadu_ps(input8);
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight0, image4));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight1, image5));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight2, image6));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight3, image7));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight4, image8));
 image9 = _mm_loadu_ps(input9);
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight0, image5));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight1, image6));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight2, image7));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight3, image8));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight4, image9));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 input8++;
 input9++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 3));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 3));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 3));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 3));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 3));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 image8 = _mm_loadu_ps(input8);
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight0, image4));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight1, image5));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight2, image6));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight3, image7));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight4, image8));
 image9 = _mm_loadu_ps(input9);
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight0, image5));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight1, image6));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight2, image7));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight3, image8));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight4, image9));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 input8++;
 input9++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 4));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 4));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 4));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 4));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 4));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 image8 = _mm_loadu_ps(input8);
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight0, image4));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight1, image5));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight2, image6));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight3, image7));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight4, image8));
 image9 = _mm_loadu_ps(input9);
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight0, image5));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight1, image6));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight2, image7));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight3, image8));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight4, image9));
 _mm_storeu_ps(output0, sum0);
 _mm_storeu_ps(output1, sum1);
 _mm_storeu_ps(output2, sum2);
 _mm_storeu_ps(output3, sum3);
 _mm_storeu_ps(output4, sum4);
 _mm_storeu_ps(output5, sum5);
 output0 += sizeof(__m128) / sizeof(float);
 output1 += sizeof(__m128) / sizeof(float);
 output2 += sizeof(__m128) / sizeof(float);
 output3 += sizeof(__m128) / sizeof(float);
 output4 += sizeof(__m128) / sizeof(float);
 output5 += sizeof(__m128) / sizeof(float);
 }
  }
  for (;
 i<(count);
 i++) {
    float output0 = output[i + outputStride * 0];

    float output1 = output[i + outputStride * 1];

    float output2 = output[i + outputStride * 2];

    float output3 = output[i + outputStride * 3];

    float output4 = output[i + outputStride * 4];

    float output5 = output[i + outputStride * 5];

    int row;

    for (row = 0;
 row < 5;
 row++) {
      int col;

      for (col = 0;
 col < 5;
 col++) {
        output0 += weight[5 * row + col] * image[i + (row + 0) * inputStride + col];

        output1 += weight[5 * row + col] * image[i + (row + 1) * inputStride + col];

        output2 += weight[5 * row + col] * image[i + (row + 2) * inputStride + col];

        output3 += weight[5 * row + col] * image[i + (row + 3) * inputStride + col];

        output4 += weight[5 * row + col] * image[i + (row + 4) * inputStride + col];

        output5 += weight[5 * row + col] * image[i + (row + 5) * inputStride + col];

      }
    }
    output[i + outputStride * 0] = output0;

    output[i + outputStride * 1] = output1;

    output[i + outputStride * 2] = output2;

    output[i + outputStride * 3] = output3;

    output[i + outputStride * 4] = output4;

    output[i + outputStride * 5] = output5;

  }
}

void convolve_5x5_8_sse(float* output, float* image, float* weight, long count, long outputStride, long inputStride) {
  long i = 0;

  long alignedCount4 = count & 0xFFFFFFFC;

  float* output0 = output;
 float* output1 = output0 + outputStride;
 float* output2 = output1 + outputStride;
 float* output3 = output2 + outputStride;
 float* output4 = output3 + outputStride;
 float* output5 = output4 + outputStride;
 float* output6 = output5 + outputStride;
 float* output7 = output6 + outputStride;

  for (;
 i < alignedCount4;
 i+=4) {
    { __m128 sum0;
 __m128 sum1;
 __m128 sum2;
 __m128 sum3;
 __m128 sum4;
 __m128 sum5;
 __m128 sum6;
 __m128 sum7;
 sum0 = _mm_loadu_ps(output0);
 sum1 = _mm_loadu_ps(output1);
 sum2 = _mm_loadu_ps(output2);
 sum3 = _mm_loadu_ps(output3);
 sum4 = _mm_loadu_ps(output4);
 sum5 = _mm_loadu_ps(output5);
 sum6 = _mm_loadu_ps(output6);
 sum7 = _mm_loadu_ps(output7);
 __m128 weight0;
 __m128 weight1;
 __m128 weight2;
 __m128 weight3;
 __m128 weight4;
 float* input0 = image + i;
 float* input1 = input0 + inputStride;
 float* input2 = input1 + inputStride;
 float* input3 = input2 + inputStride;
 float* input4 = input3 + inputStride;
 float* input5 = input4 + inputStride;
 float* input6 = input5 + inputStride;
 float* input7 = input6 + inputStride;
 float* input8 = input7 + inputStride;
 float* input9 = input8 + inputStride;
 float* inputA = input9 + inputStride;
 float* inputB = inputA + inputStride;
 __m128 image0;
 __m128 image1;
 __m128 image2;
 __m128 image3;
 __m128 image4;
 __m128 image5;
 __m128 image6;
 __m128 image7;
 __m128 image8;
 __m128 image9;
 __m128 imageA;
 __m128 imageB;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 0));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 0));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 0));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 0));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 0));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 image8 = _mm_loadu_ps(input8);
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight0, image4));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight1, image5));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight2, image6));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight3, image7));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight4, image8));
 image9 = _mm_loadu_ps(input9);
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight0, image5));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight1, image6));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight2, image7));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight3, image8));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight4, image9));
 imageA = _mm_loadu_ps(inputA);
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight0, image6));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight1, image7));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight2, image8));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight3, image9));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight4, imageA));
 imageB = _mm_loadu_ps(inputB);
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight0, image7));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight1, image8));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight2, image9));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight3, imageA));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight4, imageB));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 input8++;
 input9++;
 inputA++;
 inputB++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 1));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 1));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 1));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 1));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 1));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 image8 = _mm_loadu_ps(input8);
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight0, image4));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight1, image5));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight2, image6));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight3, image7));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight4, image8));
 image9 = _mm_loadu_ps(input9);
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight0, image5));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight1, image6));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight2, image7));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight3, image8));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight4, image9));
 imageA = _mm_loadu_ps(inputA);
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight0, image6));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight1, image7));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight2, image8));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight3, image9));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight4, imageA));
 imageB = _mm_loadu_ps(inputB);
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight0, image7));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight1, image8));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight2, image9));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight3, imageA));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight4, imageB));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 input8++;
 input9++;
 inputA++;
 inputB++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 2));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 2));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 2));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 2));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 2));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 image8 = _mm_loadu_ps(input8);
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight0, image4));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight1, image5));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight2, image6));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight3, image7));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight4, image8));
 image9 = _mm_loadu_ps(input9);
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight0, image5));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight1, image6));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight2, image7));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight3, image8));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight4, image9));
 imageA = _mm_loadu_ps(inputA);
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight0, image6));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight1, image7));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight2, image8));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight3, image9));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight4, imageA));
 imageB = _mm_loadu_ps(inputB);
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight0, image7));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight1, image8));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight2, image9));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight3, imageA));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight4, imageB));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 input8++;
 input9++;
 inputA++;
 inputB++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 3));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 3));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 3));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 3));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 3));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 image8 = _mm_loadu_ps(input8);
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight0, image4));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight1, image5));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight2, image6));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight3, image7));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight4, image8));
 image9 = _mm_loadu_ps(input9);
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight0, image5));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight1, image6));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight2, image7));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight3, image8));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight4, image9));
 imageA = _mm_loadu_ps(inputA);
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight0, image6));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight1, image7));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight2, image8));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight3, image9));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight4, imageA));
 imageB = _mm_loadu_ps(inputB);
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight0, image7));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight1, image8));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight2, image9));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight3, imageA));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight4, imageB));
 input0++;
 input1++;
 input2++;
 input3++;
 input4++;
 input5++;
 input6++;
 input7++;
 input8++;
 input9++;
 inputA++;
 inputB++;
 weight0 = _mm_set_ps1(*(weight + 5 * 0 + 4));
 weight1 = _mm_set_ps1(*(weight + 5 * 1 + 4));
 weight2 = _mm_set_ps1(*(weight + 5 * 2 + 4));
 weight3 = _mm_set_ps1(*(weight + 5 * 3 + 4));
 weight4 = _mm_set_ps1(*(weight + 5 * 4 + 4));
 image0 = _mm_loadu_ps(input0);
 image1 = _mm_loadu_ps(input1);
 image2 = _mm_loadu_ps(input2);
 image3 = _mm_loadu_ps(input3);
 image4 = _mm_loadu_ps(input4);
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight0, image0));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight1, image1));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight2, image2));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight3, image3));
 sum0 = _mm_add_ps(sum0, _mm_mul_ps(weight4, image4));
 image5 = _mm_loadu_ps(input5);
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight0, image1));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight1, image2));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight2, image3));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight3, image4));
 sum1 = _mm_add_ps(sum1, _mm_mul_ps(weight4, image5));
 image6 = _mm_loadu_ps(input6);
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight0, image2));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight1, image3));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight2, image4));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight3, image5));
 sum2 = _mm_add_ps(sum2, _mm_mul_ps(weight4, image6));
 image7 = _mm_loadu_ps(input7);
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight0, image3));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight1, image4));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight2, image5));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight3, image6));
 sum3 = _mm_add_ps(sum3, _mm_mul_ps(weight4, image7));
 image8 = _mm_loadu_ps(input8);
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight0, image4));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight1, image5));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight2, image6));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight3, image7));
 sum4 = _mm_add_ps(sum4, _mm_mul_ps(weight4, image8));
 image9 = _mm_loadu_ps(input9);
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight0, image5));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight1, image6));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight2, image7));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight3, image8));
 sum5 = _mm_add_ps(sum5, _mm_mul_ps(weight4, image9));
 imageA = _mm_loadu_ps(inputA);
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight0, image6));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight1, image7));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight2, image8));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight3, image9));
 sum6 = _mm_add_ps(sum6, _mm_mul_ps(weight4, imageA));
 imageB = _mm_loadu_ps(inputB);
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight0, image7));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight1, image8));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight2, image9));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight3, imageA));
 sum7 = _mm_add_ps(sum7, _mm_mul_ps(weight4, imageB));
 _mm_storeu_ps(output0, sum0);
 _mm_storeu_ps(output1, sum1);
 _mm_storeu_ps(output2, sum2);
 _mm_storeu_ps(output3, sum3);
 _mm_storeu_ps(output4, sum4);
 _mm_storeu_ps(output5, sum5);
 _mm_storeu_ps(output6, sum6);
 _mm_storeu_ps(output7, sum7);
 output0 += sizeof(__m128) / sizeof(float);
 output1 += sizeof(__m128) / sizeof(float);
 output2 += sizeof(__m128) / sizeof(float);
 output3 += sizeof(__m128) / sizeof(float);
 output4 += sizeof(__m128) / sizeof(float);
 output5 += sizeof(__m128) / sizeof(float);
 output6 += sizeof(__m128) / sizeof(float);
 output7 += sizeof(__m128) / sizeof(float);
 }
  }
  for (;
 i<(count);
 i++) {
    float output0 = output[i + outputStride * 0];

    float output1 = output[i + outputStride * 1];

    float output2 = output[i + outputStride * 2];

    float output3 = output[i + outputStride * 3];

    float output4 = output[i + outputStride * 4];

    float output5 = output[i + outputStride * 5];

    float output6 = output[i + outputStride * 6];

    float output7 = output[i + outputStride * 7];

    int row;

    for (row = 0;
 row < 5;
 row++) {
      int col;

      for (col = 0;
 col < 5;
 col++) {
        output0 += weight[5 * row + col] * image[i + (row + 0) * inputStride + col];

        output1 += weight[5 * row + col] * image[i + (row + 1) * inputStride + col];

        output2 += weight[5 * row + col] * image[i + (row + 2) * inputStride + col];

        output3 += weight[5 * row + col] * image[i + (row + 3) * inputStride + col];

        output4 += weight[5 * row + col] * image[i + (row + 4) * inputStride + col];

        output5 += weight[5 * row + col] * image[i + (row + 5) * inputStride + col];

        output6 += weight[5 * row + col] * image[i + (row + 6) * inputStride + col];

        output7 += weight[5 * row + col] * image[i + (row + 7) * inputStride + col];

      }
    }
    output[i + outputStride * 0] = output0;

    output[i + outputStride * 1] = output1;

    output[i + outputStride * 2] = output2;

    output[i + outputStride * 3] = output3;

    output[i + outputStride * 4] = output4;

    output[i + outputStride * 5] = output5;

    output[i + outputStride * 6] = output6;

    output[i + outputStride * 7] = output7;

  }
}
# 253 "convolve5x5_sse.c"
void convolve_5x5_sse(float* output, float* input, float* kernel, long outRows, long outCols, long outStride, long inCols) {
  long yy = 0;

  float* t_ = input;

  float* r_ = output;

  float* k_ = kernel;

# 279 "convolve5x5_sse.c"
  for(;
 yy < (outRows / 6 ) * 6;
 yy += 6) {
    float *pi_ = t_ + yy*inCols;

    float *pw_ = k_;

    float *pis_ = pi_;

    convolve_5x5_6_sse(r_, pis_, pw_, outCols, outStride, inCols);

    r_ += (outStride * 6);

  }

  if((yy < (outRows & 0xFFFFFFFE)) && ((yy % 4) != 0)) {

    float *pi_ = t_ + yy*inCols;

    float *pw_ = k_;

    float *pis_ = pi_;

    convolve_5x5_2_sse(r_, pis_, pw_, outCols, outStride, inCols);

    r_ += (outStride * 2);

    yy += 2;

  }

  for(;
 yy < (outRows & 0xFFFFFFFC);
 yy += 4) {
    float *pi_ = t_ + yy*inCols;

    float *pw_ = k_;

    float *pis_ = pi_;

    convolve_5x5_4_sse(r_, pis_, pw_, outCols, outStride, inCols);

    r_ += (outStride * 4);

  }

  for(;
 yy < (outRows & 0xFFFFFFFE);
 yy += 2) {
    float *pi_ = t_ + yy*inCols;

    float *pw_ = k_;

    float *pis_ = pi_;

    convolve_5x5_2_sse(r_, pis_, pw_, outCols, outStride, inCols);

    r_ += (outStride * 2);

  }

  for(;
 yy < outRows;
 yy += 1) {
    float *pi_ = t_ + yy*inCols;

    float *pw_ = k_;

    float *pis_ = pi_;

    convolve_5x5_1_sse(r_, pis_, pw_, outCols, outStride, inCols);

    r_ += (outStride * 1);

  }
}
