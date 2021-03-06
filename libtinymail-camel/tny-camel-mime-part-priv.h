#ifndef TNY_CAMEL_MIME_PART_PRIV_H
#define TNY_CAMEL_MIME_PART_PRIV_H

/* libtinymail-camel - The Tiny Mail base library for Camel
 * Copyright (C) 2006-2007 Philip Van Hoof <pvanhoof@gnome.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with self library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include <camel/camel.h>
#include <camel/camel-stream-mem.h>
#include <camel/camel-data-wrapper.h>

typedef struct _TnyCamelMimePartPriv TnyCamelMimePartPriv;

struct _TnyCamelMimePartPriv
{
	GMutex *part_lock;
	CamelMimePart *part;
	gchar *cached_content_type;
	gchar *cached_filename;
};

#define TNY_CAMEL_MIME_PART_GET_PRIVATE(o)	\
	(G_TYPE_INSTANCE_GET_PRIVATE ((o), TNY_TYPE_CAMEL_MIME_PART, TnyCamelMimePartPriv))

void _tny_camel_mime_part_set_part (TnyCamelMimePart *self, CamelMimePart *part);

#endif
