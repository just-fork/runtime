/*
 * handles.h:  Generic operations on handles
 *
 * Author:
 *	Dick Porter (dick@ximian.com)
 *
 * (C) 2002 Ximian, Inc.
 */

#ifndef _WAPI_HANDLES_H_
#define _WAPI_HANDLES_H_

#define INVALID_HANDLE_VALUE (gpointer)-1

G_BEGIN_DECLS

int wapi_getdtablesize (void);

G_END_DECLS

#endif /* _WAPI_HANDLES_H_ */
