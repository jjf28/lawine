﻿/************************************************************************/
/* File Name   : fontdec.h                                              */
/* Creator     : ax.minaduki@gmail.com                                  */
/* Create Time : Jan 7th, 2009                                          */
/* Module      : Lawine library                                         */
/* Descript    : Font decryption API definition                         */
/************************************************************************/

#ifndef __SD_LAWINE_MISC_FONTDEC_H__
#define __SD_LAWINE_MISC_FONTDEC_H__

/************************************************************************/

#include <common.h>

/************************************************************************/

#define FONT_GID_SIZE		72			/* font.gid文件大小 */

/************************************************************************/

CAPI extern BOOL init_font_decrypt(BUFCPTR gid, BUFPTR ccd, UINT ccd_size);
CAPI extern VOID exit_font_decrypt(VOID);
CAPI extern BOOL decrypt_font(BUFPTR fnt_src, UINT size);

/************************************************************************/

#endif	/* __SD_LAWINE_MISC_FONTDEC_H__ */
