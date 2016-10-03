/*BEGIN_LEGAL 
Copyright (c) 2004-2015, Intel Corporation. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.

    * Neither the name of Intel Corporation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
END_LEGAL */
/// @file xed-reg-class-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(_XED_REG_CLASS_ENUM_H_)
# define _XED_REG_CLASS_ENUM_H_
#include "../../../third_party/xed-intel64/include/xed-common-hdrs.h"
typedef enum {
  XED_REG_CLASS_INVALID,
  XED_REG_CLASS_BNDCFG,
  XED_REG_CLASS_BNDSTAT,
  XED_REG_CLASS_BOUND,
  XED_REG_CLASS_CR,
  XED_REG_CLASS_DR,
  XED_REG_CLASS_FLAGS,
  XED_REG_CLASS_GPR,
  XED_REG_CLASS_GPR16,
  XED_REG_CLASS_GPR32,
  XED_REG_CLASS_GPR64,
  XED_REG_CLASS_GPR8,
  XED_REG_CLASS_IP,
  XED_REG_CLASS_MASK,
  XED_REG_CLASS_MMX,
  XED_REG_CLASS_MXCSR,
  XED_REG_CLASS_PSEUDO,
  XED_REG_CLASS_PSEUDOX87,
  XED_REG_CLASS_SR,
  XED_REG_CLASS_TMP,
  XED_REG_CLASS_X87,
  XED_REG_CLASS_XCR,
  XED_REG_CLASS_XMM,
  XED_REG_CLASS_YMM,
  XED_REG_CLASS_ZMM,
  XED_REG_CLASS_LAST
} xed_reg_class_enum_t;

/// This converts strings to #xed_reg_class_enum_t types.
/// @param s A C-string.
/// @return #xed_reg_class_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_reg_class_enum_t str2xed_reg_class_enum_t(const char* s);
/// This converts strings to #xed_reg_class_enum_t types.
/// @param p An enumeration element of type xed_reg_class_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_reg_class_enum_t2str(const xed_reg_class_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_reg_class_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_reg_class_enum_t xed_reg_class_enum_t_last(void);
#endif
