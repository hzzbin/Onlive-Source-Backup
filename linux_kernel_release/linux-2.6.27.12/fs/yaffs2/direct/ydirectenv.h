/*
 * YAFFS: Yet another Flash File System . A NAND-flash specific file system. 
 *
 * Copyright (C) 2002-2007 Aleph One Ltd.
 *   for Toby Churchill Ltd and Brightstar Engineering
 *
 * Created by Charles Manning <charles@aleph1.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License version 2.1 as
 * published by the Free Software Foundation.
 *
 * Note: Only YAFFS headers are LGPL, YAFFS C code is covered by GPL.
 */

/*
 * ydirectenv.h: Environment wrappers for YAFFS direct.
 */

#ifndef __YDIRECTENV_H__
#define __YDIRECTENV_H__

// Direct interface

#include "devextras.h"

#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "yaffs_malloc.h"

#include <sys/time.h>

#include "assert.h"
#define YBUG(dev) assert(0)
//#define YBUG() do { *((int *)0) =1;} while(0)


#define YCHAR char
#define YUCHAR unsigned char
#define _Y(x) x
#define yaffs_strcpy(a,b)    strcpy(a,b)
#define yaffs_strncpy(a,b,c) strncpy(a,b,c)
#define yaffs_strncmp(a,b,c) strncmp(a,b,c)
#define yaffs_strlen(s)	     strlen(s)
#define yaffs_sprintf	     sprintf
#define yaffs_toupper(a)     toupper(a)

#define YAFFS_PATH_DIVIDERS  "/"

#ifdef NO_Y_INLINE
#define Y_INLINE
#else
#define Y_INLINE inline
#endif

#define YMALLOC(x) yaffs_malloc(x)
#define YFREE(x)   free(x)
#define YMALLOC_ALT(x) yaffs_malloc(x)
#define YFREE_ALT(x)   free(x)

#define YMALLOC_DMA(x) yaffs_malloc(x)

#define YYIELD()  do {} while(0)

unsigned int yaffs_crc(unsigned int crc, unsigned char const *p, size_t len);
#define YCRC32(x,y,z) yaffs_crc(x,y,z)
static unsigned long long gettimeinusec(void)
{
	struct timeval t;
	gettimeofday(&t, NULL);
	return t.tv_sec*1000000+t.tv_usec;
}
#define YTIME() gettimeinusec()
//#define YINFO(s) YPRINTF(( __FILE__ " %d %s\n",__LINE__,s))
//#define YALERT(s) YINFO(s)


#define TENDSTR "\n"
#define TSTR(x) x
#define TOUT(p) printf p


#define YAFFS_LOSTNFOUND_NAME		"lost+found"
#define YAFFS_LOSTNFOUND_PREFIX		"obj"
//#define YPRINTF(x) printf x

#include "yaffscfg.h"

#define Y_CURRENT_TIME yaffsfs_CurrentTime()
#define Y_TIME_CONVERT(x) x

#define YAFFS_ROOT_MODE				0666
#define YAFFS_LOSTNFOUND_MODE		0666

#define yaffs_SumCompare(x,y) ((x) == (y))
#define yaffs_strcmp(a,b) strcmp(a,b)

typedef enum FILE_LOCATION_ENUM {
	REAL,
	EMUL
} fileLocation;

#endif


