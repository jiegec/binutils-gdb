/* Copyright (C) 2021-2021 Free Software Foundation, Inc.
   Contributed by Loongson Ltd.

   This file is part of GNU Binutils.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the license, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#ifndef _ELF_LOONG_H
#define _ELF_LOONG_H

#include "elf/reloc-macros.h"
#include "libiberty.h"

START_RELOC_NUMBERS (elf_loongarch_reloc_type)
/* used by the dynamic linker */
RELOC_NUMBER (R_LARCH_NONE, 0)
RELOC_NUMBER (R_LARCH_32, 1)
RELOC_NUMBER (R_LARCH_64, 2)
RELOC_NUMBER (R_LARCH_RELATIVE, 3)
RELOC_NUMBER (R_LARCH_COPY, 4)
RELOC_NUMBER (R_LARCH_JUMP_SLOT, 5)
RELOC_NUMBER (R_LARCH_TLS_DTPMOD32, 6)
RELOC_NUMBER (R_LARCH_TLS_DTPMOD64, 7)
RELOC_NUMBER (R_LARCH_TLS_DTPREL32, 8)
RELOC_NUMBER (R_LARCH_TLS_DTPREL64, 9)
RELOC_NUMBER (R_LARCH_TLS_TPREL32, 10)
RELOC_NUMBER (R_LARCH_TLS_TPREL64, 11)
RELOC_NUMBER (R_LARCH_IRELATIVE, 12)

/* Reserved for future relocs that the dynamic linker must understand.  */

/* used by the static linker for relocating .text */
RELOC_NUMBER (R_LARCH_MARK_LA, 20)
RELOC_NUMBER (R_LARCH_MARK_PCREL, 21)

RELOC_NUMBER (R_LARCH_SOP_PUSH_PCREL, 22)

RELOC_NUMBER (R_LARCH_SOP_PUSH_ABSOLUTE, 23)

RELOC_NUMBER (R_LARCH_SOP_PUSH_DUP, 24)
RELOC_NUMBER (R_LARCH_SOP_PUSH_GPREL, 25)
RELOC_NUMBER (R_LARCH_SOP_PUSH_TLS_TPREL, 26)
RELOC_NUMBER (R_LARCH_SOP_PUSH_TLS_GOT, 27)
RELOC_NUMBER (R_LARCH_SOP_PUSH_TLS_GD, 28)
RELOC_NUMBER (R_LARCH_SOP_PUSH_PLT_PCREL, 29)

RELOC_NUMBER (R_LARCH_SOP_ASSERT, 30)
RELOC_NUMBER (R_LARCH_SOP_NOT, 31)
RELOC_NUMBER (R_LARCH_SOP_SUB, 32)
RELOC_NUMBER (R_LARCH_SOP_SL, 33)
RELOC_NUMBER (R_LARCH_SOP_SR, 34)
RELOC_NUMBER (R_LARCH_SOP_ADD, 35)
RELOC_NUMBER (R_LARCH_SOP_AND, 36)
RELOC_NUMBER (R_LARCH_SOP_IF_ELSE, 37)
RELOC_NUMBER (R_LARCH_SOP_POP_32_S_10_5, 38)
RELOC_NUMBER (R_LARCH_SOP_POP_32_U_10_12, 39)
RELOC_NUMBER (R_LARCH_SOP_POP_32_S_10_12, 40)
RELOC_NUMBER (R_LARCH_SOP_POP_32_S_10_16, 41)
RELOC_NUMBER (R_LARCH_SOP_POP_32_S_10_16_S2, 42)
RELOC_NUMBER (R_LARCH_SOP_POP_32_S_5_20, 43)
RELOC_NUMBER (R_LARCH_SOP_POP_32_S_0_5_10_16_S2, 44)
RELOC_NUMBER (R_LARCH_SOP_POP_32_S_0_10_10_16_S2, 45)
RELOC_NUMBER (R_LARCH_SOP_POP_32_U, 46)

/* used by the static linker for relocating non .text */
RELOC_NUMBER (R_LARCH_ADD8, 47)
RELOC_NUMBER (R_LARCH_ADD16, 48)
RELOC_NUMBER (R_LARCH_ADD24, 49)
RELOC_NUMBER (R_LARCH_ADD32, 50)
RELOC_NUMBER (R_LARCH_ADD64, 51)
RELOC_NUMBER (R_LARCH_SUB8, 52)
RELOC_NUMBER (R_LARCH_SUB16, 53)
RELOC_NUMBER (R_LARCH_SUB24, 54)
RELOC_NUMBER (R_LARCH_SUB32, 55)
RELOC_NUMBER (R_LARCH_SUB64, 56)

/* I don't know what it is. Existing in almost all other arch */
RELOC_NUMBER (R_LARCH_GNU_VTINHERIT, 57)
RELOC_NUMBER (R_LARCH_GNU_VTENTRY, 58)

END_RELOC_NUMBERS (R_LARCH_count)

/* Processor specific flags for the ELF header e_flags field.  */

#define EF_LARCH_ABI 0x0003
#define EF_LARCH_ABI_LP64 0x0003
#define EF_LARCH_ABI_LP32 0x0001

#endif /* _ELF_LOONG_H */
